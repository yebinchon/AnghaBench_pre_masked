
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ var; scalar_t__ constant; } ;
struct TYPE_5__ {TYPE_1__ size; } ;
struct assign_parm_data_one {scalar_t__ partial; TYPE_2__ locate; int * entry_parm; } ;
struct TYPE_6__ {int constant; } ;
struct assign_parm_data_all {scalar_t__ reg_parm_stack_space; TYPE_3__ stack_args_size; } ;


 int FUNC_0 (TYPE_3__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static bool
FUNC_4 (struct assign_parm_data_all *VAR_2,
      struct assign_parm_data_one *VAR_3)
{

  if (VAR_3->entry_parm == ((void*)0))
    ;


  else if (VAR_3->partial != 0)
    ;


  else if (FUNC_1 (VAR_3->entry_parm) == VAR_1
    && FUNC_2 (FUNC_3 (VAR_3->entry_parm, 0, 0), 0) == VAR_0)
    ;


  else if (VAR_2->reg_parm_stack_space > 0)
    ;

  else
    return 0;

  VAR_2->stack_args_size.constant += VAR_3->locate.size.constant;
  if (VAR_3->locate.size.var)
    FUNC_0 (VAR_2->stack_args_size, VAR_3->locate.size.var);

  return 1;
}
