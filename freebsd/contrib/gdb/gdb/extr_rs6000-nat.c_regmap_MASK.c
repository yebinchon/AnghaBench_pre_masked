
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int ppc_gp0_regnum; int ppc_gplast_regnum; int ppc_ps_regnum; int ppc_cr_regnum; int ppc_lr_regnum; int ppc_ctr_regnum; int ppc_xer_regnum; int ppc_fpscr_regnum; int ppc_mq_regnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_13, int *VAR_14)
{
  struct gdbarch_tdep *VAR_15 = FUNC_0 (VAR_12);

  *VAR_14 = 0;
  if (VAR_15->ppc_gp0_regnum <= VAR_13 && VAR_13 <= VAR_15->ppc_gplast_regnum)
    return VAR_13;
  else if (VAR_2 <= VAR_13 && VAR_13 <= VAR_3)
    {
      *VAR_14 = 1;
      return VAR_13 - VAR_2 + VAR_4;
    }
  else if (VAR_13 == VAR_10)
    return VAR_6;
  else if (VAR_13 == VAR_15->ppc_ps_regnum)
    return VAR_9;
  else if (VAR_13 == VAR_15->ppc_cr_regnum)
    return VAR_0;
  else if (VAR_13 == VAR_15->ppc_lr_regnum)
    return VAR_7;
  else if (VAR_13 == VAR_15->ppc_ctr_regnum)
    return VAR_1;
  else if (VAR_13 == VAR_15->ppc_xer_regnum)
    return VAR_11;
  else if (VAR_13 == VAR_15->ppc_fpscr_regnum)
    return VAR_5;
  else if (VAR_15->ppc_mq_regnum >= 0 && VAR_13 == VAR_15->ppc_mq_regnum)
    return VAR_8;
  else
    return -1;
}
