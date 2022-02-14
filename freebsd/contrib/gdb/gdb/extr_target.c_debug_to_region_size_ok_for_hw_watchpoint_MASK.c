
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_region_size_ok_for_hw_watchpoint ) (int) ;} ;
typedef int CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (int VAR_2)
{
  CORE_ADDR VAR_3;

  VAR_3 = VAR_0.to_region_size_ok_for_hw_watchpoint (VAR_2);

  FUNC_0 (VAR_1,
        "TARGET_REGION_SIZE_OK_FOR_HW_WATCHPOINT (%ld) = 0x%lx\n",
        (unsigned long) VAR_2,
        (unsigned long) VAR_3);
  return VAR_3;
}
