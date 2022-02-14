
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_head {struct decision* first; } ;
struct decision {scalar_t__ subroutine_number; struct decision_head success; struct decision* next; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;


 int FUNC_0 (struct decision_head*,int) ;

__attribute__((used)) static void
FUNC_1 (struct decision_head *VAR_0, enum routine_type VAR_1)
{
  struct decision *VAR_2;

  for (VAR_2 = VAR_0->first; VAR_2 ; VAR_2 = VAR_2->next)
    if (VAR_2->success.first)
      FUNC_1 (&VAR_2->success, VAR_1);

  if (VAR_0->first->subroutine_number > 0)
    FUNC_0 (VAR_0, VAR_1);
}
