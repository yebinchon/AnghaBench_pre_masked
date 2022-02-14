
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int ppc_vr0_regnum; int ppc_vrsave_regnum; } ;


 int VAR_0 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;

int
FUNC_1 (int VAR_1)
{
  struct gdbarch_tdep *VAR_2 = FUNC_0 (VAR_0);
  if (VAR_2->ppc_vr0_regnum < 0 || VAR_2->ppc_vrsave_regnum < 0)
    return 0;
  else
    return (VAR_1 >= VAR_2->ppc_vr0_regnum && VAR_1 <= VAR_2->ppc_vrsave_regnum);
}
