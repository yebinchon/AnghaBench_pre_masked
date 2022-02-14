
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct mips_arg_info {scalar_t__ reg_offset; scalar_t__ reg_words; scalar_t__ stack_words; scalar_t__ stack_offset; scalar_t__ fpr_p; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {int gp_reg_found; int arg_number; int fp_code; scalar_t__ num_gprs; scalar_t__ stack_words; int num_fprs; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int ,int,struct mips_arg_info*) ;

void
FUNC_1 (CUMULATIVE_ARGS *VAR_4, enum machine_mode VAR_5,
        tree VAR_6, int VAR_7)
{
  struct mips_arg_info VAR_8;

  FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8);

  if (!VAR_8.fpr_p)
    VAR_4->gp_reg_found = 1;




  if (VAR_4->arg_number < 2 && VAR_8.fpr_p)
    VAR_4->fp_code += (VAR_5 == VAR_2 ? 1 : 2) << ((VAR_4->arg_number - 1) * 2);

  if (VAR_3 != VAR_0 || !VAR_8.fpr_p)
    VAR_4->num_gprs = VAR_8.reg_offset + VAR_8.reg_words;
  else if (VAR_8.reg_words > 0)
    VAR_4->num_fprs += VAR_1;

  if (VAR_8.stack_words > 0)
    VAR_4->stack_words = VAR_8.stack_offset + VAR_8.stack_words;

  VAR_4->arg_number++;
}
