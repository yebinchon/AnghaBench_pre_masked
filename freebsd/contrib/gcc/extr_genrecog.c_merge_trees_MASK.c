
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decision_head {struct decision* first; struct decision* last; } ;
struct decision {struct decision* prev; struct decision* next; TYPE_1__* tests; struct decision_head success; int position; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct decision*,struct decision*,int ) ;
 int FUNC_2 (struct decision*,struct decision*) ;
 scalar_t__ FUNC_3 (struct decision*,struct decision*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (struct decision_head *VAR_0, struct decision_head *VAR_1)
{
  struct decision *VAR_2, *VAR_3;

  if (VAR_1->first == 0)
    return;
  if (VAR_0->first == 0)
    {
      *VAR_0 = *VAR_1;
      return;
    }


  FUNC_0 (!FUNC_4 (VAR_0->first->position, VAR_1->first->position));

  for (VAR_3 = VAR_1->first; VAR_3 ; VAR_3 = VAR_2)
    {
      struct decision *VAR_4, *VAR_5 = ((void*)0);

      VAR_2 = VAR_3->next;
      for (VAR_4 = VAR_0->last; VAR_4; VAR_4 = VAR_4->prev)
 {
   if (FUNC_3 (VAR_4, VAR_3))
     {
       FUNC_2 (VAR_4, VAR_3);
       FUNC_5 (&VAR_4->success, &VAR_3->success);
       goto merged_nodes;
     }

   if (FUNC_1 (VAR_4, VAR_3, 0))
     break;





   if ((int) VAR_3->tests->type < (int) VAR_4->tests->type)
     VAR_5 = VAR_4;
 }

      if (VAR_5 == ((void*)0))
 {
   VAR_3->next = ((void*)0);
   VAR_3->prev = VAR_0->last;
   VAR_0->last->next = VAR_3;
   VAR_0->last = VAR_3;
 }
      else
 {
   if ((VAR_3->prev = VAR_5->prev) != ((void*)0))
     VAR_3->prev->next = VAR_3;
   else
     VAR_0->first = VAR_3;
   VAR_3->next = VAR_5;
   VAR_5->prev = VAR_3;
 }

    merged_nodes:;
    }
}
