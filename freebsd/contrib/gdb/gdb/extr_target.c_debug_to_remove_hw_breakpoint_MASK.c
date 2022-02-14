
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_remove_hw_breakpoint ) (scalar_t__,char*) ;} ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_2, char *VAR_3)
{
  int VAR_4;

  VAR_4 = VAR_0.to_remove_hw_breakpoint (VAR_2, VAR_3);

  FUNC_0 (VAR_1,
        "target_remove_hw_breakpoint (0x%lx, xxx) = %ld\n",
        (unsigned long) VAR_2,
        (unsigned long) VAR_4);
  return VAR_4;
}
