
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct acpi_cx {int do_mwait; int mwait_hint; int mwait_hw_coord; int mwait_bm_avoidance; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct acpi_cx *VAR_2, uint64_t VAR_3, int VAR_4)
{

 VAR_2->do_mwait = 1;
 VAR_2->mwait_hint = VAR_3 & 0xffffffff;
 VAR_2->mwait_hw_coord = (VAR_4 & VAR_1) != 0;
 VAR_2->mwait_bm_avoidance = (VAR_4 & VAR_0) != 0;
}
