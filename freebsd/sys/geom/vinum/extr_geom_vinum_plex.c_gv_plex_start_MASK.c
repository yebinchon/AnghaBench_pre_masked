
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_sd {TYPE_1__* drive_sc; } ;
struct gv_raid5_packet {scalar_t__ length; int lockbase; int bits; } ;
struct gv_plex {scalar_t__ org; int bqueue; int wqueue; int packets; } ;
struct bio {scalar_t__ bio_length; scalar_t__ bio_offset; struct gv_sd* bio_caller1; int bio_pflags; int * bio_caller2; int bio_data; } ;
typedef scalar_t__ off_t ;
typedef int caddr_t ;
struct TYPE_2__ {int consumer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct gv_raid5_packet*,int ) ;
 int FUNC_2 (int ,struct bio*) ;
 struct bio* FUNC_3 (int ) ;
 int FUNC_4 (struct gv_raid5_packet*) ;
 int FUNC_5 (struct bio*,int ) ;
 scalar_t__ FUNC_6 (struct gv_plex*,struct bio*,scalar_t__,scalar_t__,int ) ;
 struct gv_raid5_packet* FUNC_7 (struct gv_plex*,struct bio*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct gv_plex*,struct bio*) ;
 int VAR_2 ;

void
FUNC_9(struct gv_plex *VAR_3, struct bio *VAR_4)
{
 struct bio *VAR_5;
 struct gv_sd *VAR_6;
 struct gv_raid5_packet *VAR_7;
 caddr_t VAR_8;
 off_t VAR_9, VAR_10, VAR_11;

 VAR_9 = VAR_4->bio_length;
 VAR_8 = VAR_4->bio_data;
 VAR_10 = VAR_4->bio_offset;


 while (VAR_9 > 0) {
  VAR_7 = ((void*)0);





  if (VAR_3->org == VAR_1) {
   VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_8, VAR_10, VAR_9);
    if (VAR_7 == ((void*)0))
     return;

   VAR_11 = VAR_7->length;

   if (FUNC_0(&VAR_7->bits))
    FUNC_4(VAR_7);
   else if (VAR_7->lockbase != -1)
    FUNC_1(&VAR_3->packets, VAR_7, VAR_2);





  } else {
   VAR_11 = FUNC_6(VAR_3, VAR_4, VAR_10, VAR_9, VAR_8);
  }
  if (VAR_11 < 0)
   return;

  VAR_9 -= VAR_11;
  VAR_8 += VAR_11;
  VAR_10 += VAR_11;
 }






 VAR_5 = FUNC_3(VAR_3->bqueue);
 while (VAR_5 != ((void*)0)) {






  if (VAR_5->bio_caller2 != ((void*)0) && FUNC_8(VAR_3, VAR_5)) {

   VAR_5->bio_pflags |= VAR_0;
   FUNC_2(VAR_3->wqueue, VAR_5);
  } else {
   VAR_6 = VAR_5->bio_caller1;
   FUNC_5(VAR_5, VAR_6->drive_sc->consumer);
  }
  VAR_5 = FUNC_3(VAR_3->bqueue);
 }
}
