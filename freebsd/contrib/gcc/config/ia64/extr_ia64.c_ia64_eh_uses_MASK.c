
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_save_b0; int reg_save_pr; int reg_save_ar_pfs; int reg_save_ar_unat; int reg_save_ar_lc; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

int
FUNC_0 (int VAR_2)
{
  if (! VAR_1)
    return 0;

  if (VAR_0.reg_save_b0
      && VAR_2 == VAR_0.reg_save_b0)
    return 1;
  if (VAR_0.reg_save_pr
      && VAR_2 == VAR_0.reg_save_pr)
    return 1;
  if (VAR_0.reg_save_ar_pfs
      && VAR_2 == VAR_0.reg_save_ar_pfs)
    return 1;
  if (VAR_0.reg_save_ar_unat
      && VAR_2 == VAR_0.reg_save_ar_unat)
    return 1;
  if (VAR_0.reg_save_ar_lc
      && VAR_2 == VAR_0.reg_save_ar_lc)
    return 1;

  return 0;
}
