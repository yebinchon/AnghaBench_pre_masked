
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_head {struct decision* first; } ;
struct decision {scalar_t__ subroutine_number; int need_label; struct decision* afterward; struct decision_head success; struct decision* next; } ;


 scalar_t__ FUNC_0 (struct decision*,struct decision*,int) ;

__attribute__((used)) static void
FUNC_1 (struct decision_head *VAR_0, struct decision *VAR_1)
{
  struct decision *VAR_2, *VAR_3, *VAR_4;




  VAR_2 = VAR_0->first;
  VAR_4 = (VAR_2->subroutine_number > 0 ? ((void*)0) : VAR_1);

  for ( ; VAR_2 ; VAR_2 = VAR_2->next)
    {

      for (VAR_3 = VAR_2->next; VAR_3 ; VAR_3 = VAR_3->next)
 if (FUNC_0 (VAR_2, VAR_3, 1))
   break;



      if (!VAR_3)
 VAR_3 = VAR_4;
      VAR_2->afterward = VAR_3;
      if (VAR_3)
 VAR_3->need_label = 1;
    }


  for (VAR_2 = VAR_0->first; VAR_2 ; VAR_2 = VAR_2->next)
    if (VAR_2->success.first)
      FUNC_1 (&VAR_2->success, VAR_2->afterward);




  VAR_2 = VAR_0->first;
  if (VAR_2->subroutine_number > 0)
    VAR_2->afterward = VAR_1;
}
