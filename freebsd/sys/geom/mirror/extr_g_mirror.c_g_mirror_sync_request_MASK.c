
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ds_geom; } ;
struct g_mirror_softc {scalar_t__ sc_geom; int sc_flags; int sc_mediasize; int sc_bump_id; int sc_lock; TYPE_1__ sc_sync; } ;
struct g_mirror_disk_sync {scalar_t__ ds_update_ts; int ds_offset_done; struct bio** ds_bios; struct g_consumer* ds_consumer; int ds_offset; int ds_inflight; } ;
struct g_mirror_disk {struct g_consumer* d_consumer; struct g_mirror_disk_sync d_sync; } ;
struct g_consumer {int acr; int acw; int ace; int index; TYPE_2__* provider; } ;
struct bio {int bio_cmd; int bio_offset; int bio_length; int bio_error; int bio_cflags; TYPE_3__* bio_from; } ;
typedef int off_t ;
struct TYPE_6__ {scalar_t__ geom; struct g_mirror_disk* private; int index; } ;
struct TYPE_5__ {int name; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct bio*,char*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct bio*,struct g_consumer*) ;
 int FUNC_4 (struct g_mirror_disk*,int ,int ) ;
 int FUNC_5 (struct g_mirror_softc*,TYPE_3__*) ;
 int FUNC_6 (struct g_mirror_softc*,struct bio*) ;
 int FUNC_7 (struct g_mirror_softc*) ;
 int FUNC_8 (struct g_mirror_softc*,struct bio*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (struct g_mirror_disk*,struct bio*,int ) ;
 int FUNC_10 (struct g_mirror_disk*,struct bio*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct g_mirror_disk*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*,struct bio*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_17(struct g_mirror_softc *VAR_11, struct bio *VAR_12)
{
 struct g_mirror_disk *VAR_13;
 struct g_mirror_disk_sync *VAR_14;

 FUNC_1((VAR_12->bio_cmd == 129 &&
     VAR_12->bio_from->geom == VAR_11->sc_sync.ds_geom) ||
     (VAR_12->bio_cmd == 128 && VAR_12->bio_from->geom == VAR_11->sc_geom),
     ("Sync BIO %p with unexpected origin", VAR_12));

 VAR_12->bio_from->index--;
 VAR_13 = VAR_12->bio_from->private;
 if (VAR_13 == ((void*)0)) {
  FUNC_16(&VAR_11->sc_lock);
  FUNC_12();
  FUNC_5(VAR_11, VAR_12->bio_from);
  FUNC_13();
  FUNC_10(((void*)0), VAR_12);
  FUNC_15(&VAR_11->sc_lock);
  return;
 }

 VAR_14 = &VAR_13->d_sync;




 switch (VAR_12->bio_cmd) {
 case 129: {
  struct g_consumer *VAR_15;

  FUNC_2(VAR_0, VAR_7,
      VAR_12->bio_error);

  if (VAR_12->bio_error != 0) {
   FUNC_0(0, VAR_12,
       "Synchronization request failed (error=%d).",
       VAR_12->bio_error);
   FUNC_10(VAR_13, VAR_12);
   FUNC_4(VAR_13,
       VAR_4,
       VAR_5);
   return;
  }
  FUNC_0(3, VAR_12,
      "Synchronization request half-finished.");
  VAR_12->bio_cmd = 128;
  VAR_12->bio_cflags = 0;
  VAR_15 = VAR_13->d_consumer;
  FUNC_1(VAR_15->acr >= 1 && VAR_15->acw >= 1 && VAR_15->ace >= 1,
      ("Consumer %s not opened (r%dw%de%d).", VAR_15->provider->name,
      VAR_15->acr, VAR_15->acw, VAR_15->ace));
  VAR_15->index++;
  FUNC_3(VAR_12, VAR_15);
  return;
 }
 case 128: {
  off_t VAR_16;
  int VAR_17;

  FUNC_2(VAR_0, VAR_8,
      VAR_12->bio_error);

  if (VAR_12->bio_error != 0) {
   FUNC_0(0, VAR_12,
       "Synchronization request failed (error=%d).",
       VAR_12->bio_error);
   FUNC_10(VAR_13, VAR_12);
   VAR_11->sc_bump_id |= VAR_1;
   FUNC_4(VAR_13,
       VAR_4,
       VAR_5);
   return;
  }
  FUNC_0(3, VAR_12, "Synchronization request finished.");
  if (VAR_14->ds_offset >= VAR_11->sc_mediasize ||
      VAR_14->ds_consumer == ((void*)0) ||
      (VAR_11->sc_flags & VAR_2) != 0) {

   VAR_14->ds_inflight--;
   FUNC_10(VAR_13, VAR_12);
   if (VAR_14->ds_inflight > 0)
    return;
   if (VAR_14->ds_consumer == ((void*)0) ||
       (VAR_11->sc_flags & VAR_2) != 0) {
    return;
   }

   FUNC_4(VAR_13, VAR_3,
       VAR_5);
   return;
  }


  FUNC_9(VAR_13, VAR_12, VAR_14->ds_offset);
  VAR_14->ds_offset += VAR_12->bio_length;

  FUNC_0(3, VAR_12, "Sending synchronization request.");
  VAR_14->ds_consumer->index++;




  if (FUNC_6(VAR_11, VAR_12))
   FUNC_8(VAR_11, VAR_12);
  else
   FUNC_3(VAR_12, VAR_14->ds_consumer);


  FUNC_7(VAR_11);


  VAR_16 = VAR_11->sc_mediasize;
  for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
   VAR_12 = VAR_14->ds_bios[VAR_17];
   if (VAR_12 != ((void*)0) && VAR_12->bio_offset < VAR_16)
    VAR_16 = VAR_12->bio_offset;
  }
  if (VAR_6 > 0 &&
      VAR_10 - VAR_14->ds_update_ts > VAR_6) {
   VAR_14->ds_offset_done = VAR_16;
   FUNC_11(VAR_13);
   VAR_14->ds_update_ts = VAR_10;
  }
  return;
 }
 default:
  FUNC_14("Invalid I/O request %p", VAR_12);
 }
}
