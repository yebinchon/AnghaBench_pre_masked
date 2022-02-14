
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gv_sd {TYPE_1__* drive_sc; } ;
struct gv_raid5_packet {int length; struct bio* parity; struct bio* waiting; } ;
struct gv_plex {int dummy; } ;
struct bio {scalar_t__* bio_data; TYPE_2__* bio_parent; struct gv_sd* bio_caller1; } ;
struct TYPE_4__ {int bio_pflags; int bio_inbed; int bio_error; } ;
struct TYPE_3__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;

__attribute__((used)) static int
FUNC_2(struct gv_plex *VAR_2, struct bio *VAR_3, struct gv_raid5_packet *VAR_4)
{
 struct bio *VAR_5;
 struct gv_sd *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = 0;
 VAR_8 = 1;

 if (VAR_4->waiting != ((void*)0)) {
  VAR_5 = VAR_4->waiting;
  VAR_4->waiting = ((void*)0);
  VAR_6 = VAR_5->bio_caller1;
  FUNC_1(VAR_5, VAR_6->drive_sc->consumer);
  VAR_8 = 0;

 } else if (VAR_4->parity != ((void*)0)) {
  VAR_5 = VAR_4->parity;
  VAR_4->parity = ((void*)0);


  for (VAR_9 = 0; VAR_9 < VAR_4->length; VAR_9++) {
   if (VAR_3->bio_data[VAR_9] != VAR_5->bio_data[VAR_9]) {
    VAR_7 = 1;
    break;
   }
  }


  if (VAR_7) {
   VAR_3->bio_parent->bio_error = VAR_0;


   if (VAR_3->bio_parent->bio_pflags & VAR_1) {
    VAR_6 = VAR_5->bio_caller1;
    FUNC_1(VAR_5, VAR_6->drive_sc->consumer);
    VAR_8 = 0;
   }
  }





  if (VAR_8) {
   VAR_3->bio_parent->bio_inbed++;
   FUNC_0(VAR_5);
  }

 }

 return (VAR_8);
}
