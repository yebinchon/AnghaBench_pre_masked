
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_raid_vol {int curr_migr_unit; int curr_migr_unit_hi; } ;
typedef int off_t ;



__attribute__((used)) static void
FUNC_0(struct intel_raid_vol *VAR_0, off_t VAR_1)
{

 VAR_0->curr_migr_unit = VAR_1 & 0xffffffff;
 VAR_0->curr_migr_unit_hi = VAR_1 >> 32;
}
