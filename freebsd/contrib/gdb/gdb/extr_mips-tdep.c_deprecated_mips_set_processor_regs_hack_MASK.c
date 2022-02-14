
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int mips_processor_reg_names; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

void
FUNC_2 (void)
{
  struct gdbarch_tdep *VAR_3 = FUNC_0 (VAR_1);
  CORE_ADDR VAR_4;

  VAR_4 = FUNC_1 (VAR_0);

  if ((VAR_4 & ~0xf) == 0x700)
    VAR_3->mips_processor_reg_names = VAR_2;
}
