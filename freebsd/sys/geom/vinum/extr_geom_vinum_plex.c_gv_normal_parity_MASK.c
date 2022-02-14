
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_sd {TYPE_1__* drive_sc; } ;
struct gv_raid5_packet {int length; struct bio* parity; struct bio* waiting; } ;
struct gv_plex {int dummy; } ;
struct bio {struct gv_sd* bio_caller1; int * bio_data; } ;
struct TYPE_2__ {int consumer; } ;


 int FUNC_0 (struct bio*,int ) ;

__attribute__((used)) static int
FUNC_1(struct gv_plex *VAR_0, struct bio *VAR_1, struct gv_raid5_packet *VAR_2)
{
 struct bio *VAR_3, *VAR_4;
 struct gv_sd *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = 1;

 if (VAR_2->waiting != ((void*)0)) {
  VAR_4 = VAR_2->waiting;
  VAR_2->waiting = ((void*)0);
  VAR_3 = VAR_2->parity;
  for (VAR_7 = 0; VAR_7 < VAR_2->length; VAR_7++)
   VAR_3->bio_data[VAR_7] ^= VAR_4->bio_data[VAR_7];
  VAR_5 = VAR_4->bio_caller1;
  FUNC_0(VAR_4, VAR_5->drive_sc->consumer);
  VAR_6 = 0;

 } else if (VAR_2->parity != ((void*)0)) {
  VAR_3 = VAR_2->parity;
  VAR_2->parity = ((void*)0);
  VAR_5 = VAR_3->bio_caller1;
  FUNC_0(VAR_3, VAR_5->drive_sc->consumer);
  VAR_6 = 0;
 }

 return (VAR_6);
}
