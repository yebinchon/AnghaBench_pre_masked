
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_fp; int reg_save_b0; int reg_save_pr; int reg_save_ar_pfs; int reg_save_ar_unat; int reg_save_ar_lc; int n_output_regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;

int
FUNC_3 (int VAR_1, int VAR_2)
{

  if (VAR_2 == VAR_0.reg_fp
      || VAR_2 == VAR_0.reg_save_b0
      || VAR_2 == VAR_0.reg_save_pr
      || VAR_2 == VAR_0.reg_save_ar_pfs
      || VAR_2 == VAR_0.reg_save_ar_unat
      || VAR_2 == VAR_0.reg_save_ar_lc)
    return 0;

  if (VAR_1 == VAR_0.reg_fp
      || VAR_1 == VAR_0.reg_save_b0
      || VAR_1 == VAR_0.reg_save_pr
      || VAR_1 == VAR_0.reg_save_ar_pfs
      || VAR_1 == VAR_0.reg_save_ar_unat
      || VAR_1 == VAR_0.reg_save_ar_lc)
    return 0;


  if (FUNC_1 (VAR_2) && VAR_2 >= FUNC_0 (VAR_0.n_output_regs))
    return 0;


  if (FUNC_2 (VAR_1) && FUNC_2 (VAR_2))
    return (VAR_1 & 1) == (VAR_2 & 1);

  return 1;
}
