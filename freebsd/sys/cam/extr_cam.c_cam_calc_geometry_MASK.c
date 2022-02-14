
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {void* status; } ;
struct ccb_calc_geometry {long block_size; int volume_size; int heads; int secs_per_track; int cylinders; TYPE_1__ ccb_h; } ;


 void* VAR_0 ;
 void* VAR_1 ;

void
FUNC_0(struct ccb_calc_geometry *VAR_2, int VAR_3)
{
 uint32_t VAR_4, VAR_5;

 if (VAR_2->block_size == 0) {
  VAR_2->ccb_h.status = VAR_1;
  return;
 }
 VAR_4 = (1024L * 1024L) / VAR_2->block_size;
 if (VAR_4 == 0) {
  VAR_2->ccb_h.status = VAR_1;
  return;
 }
 VAR_4 = VAR_2->volume_size / VAR_4;
 if (VAR_4 > 1024 && VAR_3) {
  VAR_2->heads = 255;
  VAR_2->secs_per_track = 63;
 } else {
  VAR_2->heads = 64;
  VAR_2->secs_per_track = 32;
 }
 VAR_5 = VAR_2->heads * VAR_2->secs_per_track;
 if (VAR_5 == 0) {
  VAR_2->ccb_h.status = VAR_1;
  return;
 }
 VAR_2->cylinders = VAR_2->volume_size / VAR_5;
 VAR_2->ccb_h.status = VAR_0;
}
