
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int ppc_lr_regnum; int ppc_cr_regnum; int ppc_xer_regnum; int ppc_ctr_regnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_0 (VAR_1);

  return ((VAR_2 >= 0 && VAR_2 <= 31)
          || VAR_2 == VAR_3->ppc_lr_regnum
          || VAR_2 == VAR_3->ppc_cr_regnum
          || VAR_2 == VAR_3->ppc_xer_regnum
          || VAR_2 == VAR_3->ppc_ctr_regnum
   || VAR_2 == VAR_0);
}
