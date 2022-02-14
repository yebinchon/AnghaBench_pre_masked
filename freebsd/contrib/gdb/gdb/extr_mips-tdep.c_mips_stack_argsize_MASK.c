
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {unsigned int mips_default_stack_argsize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned int
FUNC_0 (struct gdbarch_tdep *VAR_3)
{
  if (VAR_0 == VAR_2)
    return VAR_3->mips_default_stack_argsize;
  else if (VAR_0 == VAR_1)
    return 8;
  else
    return 4;
}
