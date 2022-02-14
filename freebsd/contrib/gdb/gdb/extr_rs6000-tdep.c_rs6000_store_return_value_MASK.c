
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch_tdep {scalar_t__ ppc_gp0_regnum; scalar_t__ ppc_vr0_regnum; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int) ;
 struct gdbarch_tdep* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (struct type *VAR_4, char *VAR_5)
{
  struct gdbarch_tdep *VAR_6 = FUNC_5 (VAR_3);

  if (FUNC_1 (VAR_4) == VAR_2)





    FUNC_4 (FUNC_0 (VAR_0 + 1), VAR_5,
         FUNC_2 (VAR_4));
  else if (FUNC_1 (VAR_4) == VAR_1)
    {
      if (FUNC_2 (VAR_4) == 16
          && FUNC_3 (VAR_4))
 FUNC_4 (FUNC_0 (VAR_6->ppc_vr0_regnum + 2),
      VAR_5, FUNC_2 (VAR_4));
    }
  else

    FUNC_4 (FUNC_0 (FUNC_5 (VAR_3)->ppc_gp0_regnum + 3),
         VAR_5, FUNC_2 (VAR_4));
}
