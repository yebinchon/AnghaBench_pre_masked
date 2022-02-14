
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct ahd_devinfo {int target_offset; char channel; int target_mask; int role; void* lun; void* target; void* our_scsiid; } ;
typedef int role_t ;



void
FUNC_0(struct ahd_devinfo *VAR_0, u_int VAR_1, u_int VAR_2,
      u_int VAR_3, char VAR_4, role_t VAR_5)
{
 VAR_0->our_scsiid = VAR_1;
 VAR_0->target = VAR_2;
 VAR_0->lun = VAR_3;
 VAR_0->target_offset = VAR_2;
 VAR_0->channel = VAR_4;
 VAR_0->role = VAR_5;
 if (VAR_4 == 'B')
  VAR_0->target_offset += 8;
 VAR_0->target_mask = (0x01 << VAR_0->target_offset);
}
