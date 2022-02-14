
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int ppc_lr_regnum; int ppc_cr_regnum; int ppc_xer_regnum; int ppc_ctr_regnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gdbarch_tdep* FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

void
FUNC_3 (char *VAR_7, int VAR_8)
{
  struct gdbarch_tdep *VAR_9 = FUNC_1 (VAR_6);
  int VAR_10;

  for (VAR_10 = 0; VAR_10 <= 31; VAR_10++)
    {
      if (VAR_8 == VAR_10 || VAR_8 == -1)
 FUNC_2 (VAR_10, VAR_7 + FUNC_0 (VAR_10));
    }

  if (VAR_8 == VAR_9->ppc_lr_regnum || VAR_8 == -1)
    FUNC_2 (VAR_9->ppc_lr_regnum, VAR_7 + VAR_3);

  if (VAR_8 == VAR_9->ppc_cr_regnum || VAR_8 == -1)
    FUNC_2 (VAR_9->ppc_cr_regnum, VAR_7 + VAR_1);

  if (VAR_8 == VAR_9->ppc_xer_regnum || VAR_8 == -1)
    FUNC_2 (VAR_9->ppc_xer_regnum, VAR_7 + VAR_5);

  if (VAR_8 == VAR_9->ppc_ctr_regnum || VAR_8 == -1)
    FUNC_2 (VAR_9->ppc_ctr_regnum, VAR_7 + VAR_2);

  if (VAR_8 == VAR_0 || VAR_8 == -1)
    FUNC_2 (VAR_0, VAR_7 + VAR_4);
}
