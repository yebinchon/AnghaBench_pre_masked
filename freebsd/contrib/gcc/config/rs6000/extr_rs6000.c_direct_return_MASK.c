
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_gp_reg_save; int first_fp_reg_save; scalar_t__ first_altivec_reg_save; scalar_t__ vrsave_mask; int push_p; int cr_save_p; int lr_save_p; } ;
typedef TYPE_1__ rs6000_stack_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 () ;

int
FUNC_1 (void)
{
  if (VAR_1)
    {
      rs6000_stack_t *VAR_2 = FUNC_0 ();

      if (VAR_2->first_gp_reg_save == 32
   && VAR_2->first_fp_reg_save == 64
   && VAR_2->first_altivec_reg_save == VAR_0 + 1
   && ! VAR_2->lr_save_p
   && ! VAR_2->cr_save_p
   && VAR_2->vrsave_mask == 0
   && ! VAR_2->push_p)
 return 1;
    }

  return 0;
}
