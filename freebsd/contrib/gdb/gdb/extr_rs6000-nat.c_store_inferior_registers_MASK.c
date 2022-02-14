
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int ppc_gp0_regnum; int ppc_gplast_regnum; int ppc_ps_regnum; int ppc_cr_regnum; int ppc_lr_regnum; int ppc_ctr_regnum; int ppc_xer_regnum; int ppc_fpscr_regnum; int ppc_mq_regnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void
FUNC_2 (int VAR_4)
{
  if (VAR_4 != -1)
    FUNC_1 (VAR_4);

  else
    {
      struct gdbarch_tdep *VAR_5 = FUNC_0 (VAR_3);


      for (VAR_4 = VAR_5->ppc_gp0_regnum;
           VAR_4 <= VAR_5->ppc_gplast_regnum;
    VAR_4++)
 {
   FUNC_1 (VAR_4);
 }


      for (VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4++)
 FUNC_1 (VAR_4);


      FUNC_1 (VAR_2);
      FUNC_1 (VAR_5->ppc_ps_regnum);
      FUNC_1 (VAR_5->ppc_cr_regnum);
      FUNC_1 (VAR_5->ppc_lr_regnum);
      FUNC_1 (VAR_5->ppc_ctr_regnum);
      FUNC_1 (VAR_5->ppc_xer_regnum);
      FUNC_1 (VAR_5->ppc_fpscr_regnum);
      if (VAR_5->ppc_mq_regnum >= 0)
 FUNC_1 (VAR_5->ppc_mq_regnum);
    }
}
