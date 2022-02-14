
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int ppc_gp0_regnum; int ppc_gplast_regnum; int ppc_lr_regnum; int ppc_cr_regnum; int ppc_xer_regnum; int ppc_ctr_regnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct gdbarch_tdep* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*) ;

void
FUNC_3 (char *VAR_8, int VAR_9)
{
  struct gdbarch_tdep *VAR_10 = FUNC_1 (VAR_6);
  int VAR_11;

  for (VAR_11 = VAR_10->ppc_gp0_regnum; VAR_11 <= VAR_10->ppc_gplast_regnum; VAR_11++)
    {
      if (VAR_9 == VAR_11 || VAR_9 == -1)
 FUNC_2 (VAR_7, VAR_11, VAR_8 +
         FUNC_0 (VAR_11 - VAR_10->ppc_gp0_regnum));
    }

  if (VAR_9 == VAR_10->ppc_lr_regnum || VAR_9 == -1)
    FUNC_2 (VAR_7, VAR_10->ppc_lr_regnum,
     VAR_8 + VAR_3);

  if (VAR_9 == VAR_10->ppc_cr_regnum || VAR_9 == -1)
    FUNC_2 (VAR_7, VAR_10->ppc_cr_regnum,
     VAR_8 + VAR_1);

  if (VAR_9 == VAR_10->ppc_xer_regnum || VAR_9 == -1)
    FUNC_2 (VAR_7, VAR_10->ppc_xer_regnum,
     VAR_8 + VAR_5);

  if (VAR_9 == VAR_10->ppc_ctr_regnum || VAR_9 == -1)
    FUNC_2 (VAR_7, VAR_10->ppc_ctr_regnum,
     VAR_8 + VAR_2);

  if (VAR_9 == VAR_0 || VAR_9 == -1)
    FUNC_2 (VAR_7, VAR_0, VAR_8 + VAR_4);
}
