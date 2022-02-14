
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ total_size; scalar_t__ n_spilled; scalar_t__ reg_save_b0; scalar_t__ reg_save_pr; scalar_t__ reg_save_ar_pfs; scalar_t__ reg_save_ar_unat; scalar_t__ reg_save_ar_lc; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;

int
FUNC_2 (void)
{
  if (VAR_2 && ! VAR_1)
    {
      FUNC_1 (FUNC_0 ());

      return (VAR_0.total_size == 0
       && VAR_0.n_spilled == 0
       && VAR_0.reg_save_b0 == 0
       && VAR_0.reg_save_pr == 0
       && VAR_0.reg_save_ar_pfs == 0
       && VAR_0.reg_save_ar_unat == 0
       && VAR_0.reg_save_ar_lc == 0);
    }
  return 0;
}
