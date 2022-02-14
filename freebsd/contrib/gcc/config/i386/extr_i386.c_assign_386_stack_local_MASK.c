
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_local_entry {int mode; int n; int rtl; struct stack_local_entry* next; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum ix86_stack_slot { ____Placeholder_ix86_stack_slot } ix86_stack_slot ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 struct stack_local_entry* VAR_2 ;
 int VAR_3 ;

rtx
FUNC_4 (enum machine_mode VAR_4, enum ix86_stack_slot VAR_5)
{
  struct stack_local_entry *VAR_6;

  FUNC_2 (VAR_5 < VAR_0);


  FUNC_2 ((VAR_5 == VAR_1) == !VAR_3);

  for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next)
    if (VAR_6->mode == VAR_4 && VAR_6->n == VAR_5)
      return VAR_6->rtl;

  VAR_6 = (struct stack_local_entry *)
    FUNC_3 (sizeof (struct stack_local_entry));
  VAR_6->n = VAR_5;
  VAR_6->mode = VAR_4;
  VAR_6->rtl = FUNC_1 (VAR_4, FUNC_0 (VAR_4), 0);

  VAR_6->next = VAR_2;
  VAR_2 = VAR_6;
  return VAR_6->rtl;
}
