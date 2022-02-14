
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ccb_hdr {int target_id; int target_lun; } ;



__attribute__((used)) static void
FUNC_0(struct ccb_hdr *VAR_0, uint8_t VAR_1[])
{

 VAR_1[0] = 1;
 VAR_1[1] = VAR_0->target_id;
 VAR_1[2] = 0x40 | ((VAR_0->target_lun >> 8) & 0x3F);
 VAR_1[3] = VAR_0->target_lun & 0xFF;
}
