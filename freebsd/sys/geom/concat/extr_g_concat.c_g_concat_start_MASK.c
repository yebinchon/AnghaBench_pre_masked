
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct g_provider {TYPE_2__* geom; int name; int error; } ;
struct g_concat_softc {size_t sc_ndisks; struct g_concat_disk* sc_disks; } ;
struct g_concat_disk {scalar_t__ d_end; scalar_t__ d_start; TYPE_3__* d_consumer; } ;
struct bio_queue_head {int dummy; } ;
struct bio {int bio_cmd; scalar_t__ bio_offset; scalar_t__ bio_length; int bio_flags; char* bio_data; scalar_t__ bio_error; uintptr_t bio_ma_offset; int bio_ma; int bio_ma_n; struct g_concat_disk* bio_caller1; struct g_provider* bio_to; int bio_done; int bio_attribute; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {struct g_provider* provider; } ;
struct TYPE_5__ {int name; TYPE_1__* class; struct g_concat_softc* softc; } ;
struct TYPE_4__ {int name; } ;






 int BIO_UNMAPPED ;

 scalar_t__ ENOMEM ;
 scalar_t__ EOPNOTSUPP ;
 int G_CONCAT_LOGREQ (struct bio*,char*) ;
 int KASSERT (int,char*) ;
 scalar_t__ MIN (scalar_t__,scalar_t__) ;
 int PAGE_SIZE ;
 int bioq_init (struct bio_queue_head*) ;
 int bioq_insert_tail (struct bio_queue_head*,struct bio*) ;
 struct bio* bioq_takefirst (struct bio_queue_head*) ;
 struct bio* g_clone_bio (struct bio*) ;
 int g_concat_candelete (struct bio*) ;
 int g_concat_done ;
 int g_concat_flush (struct g_concat_softc*,struct bio*) ;
 int g_concat_kernel_dump (struct bio*) ;
 int g_destroy_bio (struct bio*) ;
 int g_io_deliver (struct bio*,scalar_t__) ;
 int g_io_request (struct bio*,TYPE_3__*) ;
 int g_std_done ;
 int round_page (scalar_t__) ;
 int strcmp (char*,int ) ;

__attribute__((used)) static void
g_concat_start(struct bio *bp)
{
 struct bio_queue_head queue;
 struct g_concat_softc *sc;
 struct g_concat_disk *disk;
 struct g_provider *pp;
 off_t offset, end, length, off, len;
 struct bio *cbp;
 char *addr;
 u_int no;

 pp = bp->bio_to;
 sc = pp->geom->softc;




 KASSERT(sc != ((void*)0),
     ("Provider's error should be set (error=%d)(device=%s).",
     bp->bio_to->error, bp->bio_to->name));

 G_CONCAT_LOGREQ(bp, "Request received.");

 switch (bp->bio_cmd) {
 case 129:
 case 128:
 case 132:
  break;
 case 131:
  g_concat_flush(sc, bp);
  return;
 case 130:
  if (strcmp("GEOM::kerneldump", bp->bio_attribute) == 0) {
   g_concat_kernel_dump(bp);
   return;
  } else if (strcmp("GEOM::candelete", bp->bio_attribute) == 0) {
   g_concat_candelete(bp);
   return;
  }


 default:
  g_io_deliver(bp, EOPNOTSUPP);
  return;
 }

 offset = bp->bio_offset;
 length = bp->bio_length;
 if ((bp->bio_flags & BIO_UNMAPPED) != 0)
  addr = ((void*)0);
 else
  addr = bp->bio_data;
 end = offset + length;

 bioq_init(&queue);
 for (no = 0; no < sc->sc_ndisks; no++) {
  disk = &sc->sc_disks[no];
  if (disk->d_end <= offset)
   continue;
  if (disk->d_start >= end)
   break;

  off = offset - disk->d_start;
  len = MIN(length, disk->d_end - offset);
  length -= len;
  offset += len;

  cbp = g_clone_bio(bp);
  if (cbp == ((void*)0)) {
   while ((cbp = bioq_takefirst(&queue)) != ((void*)0))
    g_destroy_bio(cbp);
   if (bp->bio_error == 0)
    bp->bio_error = ENOMEM;
   g_io_deliver(bp, bp->bio_error);
   return;
  }
  bioq_insert_tail(&queue, cbp);



  if (len == bp->bio_length)
   cbp->bio_done = g_std_done;
  else
   cbp->bio_done = g_concat_done;
  cbp->bio_offset = off;
  cbp->bio_length = len;
  if ((bp->bio_flags & BIO_UNMAPPED) != 0) {
   cbp->bio_ma_offset += (uintptr_t)addr;
   cbp->bio_ma += cbp->bio_ma_offset / PAGE_SIZE;
   cbp->bio_ma_offset %= PAGE_SIZE;
   cbp->bio_ma_n = round_page(cbp->bio_ma_offset +
       cbp->bio_length) / PAGE_SIZE;
  } else
   cbp->bio_data = addr;
  addr += len;
  cbp->bio_to = disk->d_consumer->provider;
  cbp->bio_caller1 = disk;

  if (length == 0)
   break;
 }
 KASSERT(length == 0,
     ("Length is still greater than 0 (class=%s, name=%s).",
     bp->bio_to->geom->class->name, bp->bio_to->geom->name));
 while ((cbp = bioq_takefirst(&queue)) != ((void*)0)) {
  G_CONCAT_LOGREQ(cbp, "Sending request.");
  disk = cbp->bio_caller1;
  cbp->bio_caller1 = ((void*)0);
  g_io_request(cbp, disk->d_consumer);
 }
}
