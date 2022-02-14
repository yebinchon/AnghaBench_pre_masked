
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct assign_parm_data_one {scalar_t__ nominal_mode; scalar_t__ passed_mode; int * stack_parm; scalar_t__ nominal_type; scalar_t__ passed_pointer; int * entry_parm; } ;
typedef int * rtx ;
struct TYPE_2__ {scalar_t__ stack_protect_guard; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (struct assign_parm_data_one *VAR_5)
{
  rtx VAR_6 = VAR_5->stack_parm;




  if (VAR_6
      && ((VAR_2
    && FUNC_0 (VAR_5->nominal_mode) > FUNC_1 (VAR_6))
   || (VAR_5->nominal_type
       && FUNC_3 (VAR_5->nominal_type) > FUNC_1 (VAR_6)
       && FUNC_1 (VAR_6) < VAR_1)))
    VAR_6 = ((void*)0);



  else if (VAR_5->entry_parm == VAR_6
    && VAR_5->nominal_mode != VAR_0
    && VAR_5->nominal_mode != VAR_5->passed_mode)
    VAR_6 = ((void*)0);



  else if (VAR_3->stack_protect_guard
    && (VAR_4 == 2
        || VAR_5->passed_pointer
        || FUNC_2 (VAR_5->nominal_type)))
    VAR_6 = ((void*)0);

  VAR_5->stack_parm = VAR_6;
}
