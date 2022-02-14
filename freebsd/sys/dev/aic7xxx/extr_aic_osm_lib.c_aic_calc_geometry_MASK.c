
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int status; } ;
struct ccb_calc_geometry {long volume_size; long block_size; int heads; int secs_per_track; int cylinders; TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccb_calc_geometry*,int) ;

void
FUNC_1(struct ccb_calc_geometry *VAR_1, int VAR_2)
{



 uint32_t VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_1->volume_size / ((1024L * 1024L) / VAR_1->block_size);
 if (VAR_3 > 1024 && VAR_2) {
  VAR_1->heads = 255;
  VAR_1->secs_per_track = 63;
 } else {
  VAR_1->heads = 64;
  VAR_1->secs_per_track = 32;
 }
 VAR_4 = VAR_1->heads * VAR_1->secs_per_track;
 VAR_1->cylinders = VAR_1->volume_size / VAR_4;
 VAR_1->ccb_h.status = VAR_0;

}
