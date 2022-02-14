
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decision_head {struct decision* first; struct decision* last; } ;
struct decision {struct decision_head success; struct decision* next; struct decision* prev; TYPE_1__* tests; int position; } ;
typedef enum decision_type { ____Placeholder_decision_type } decision_type ;
struct TYPE_2__ {int type; struct TYPE_2__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct decision_head*,struct decision_head*) ;
 struct decision* FUNC_1 (int ,struct decision_head*) ;

__attribute__((used)) static void
FUNC_2 (struct decision_head *VAR_6)
{
  struct decision *VAR_7, *VAR_8;

  for (VAR_7 = VAR_6->first; VAR_7 && VAR_7->next; VAR_7 = VAR_8)
    {
      enum decision_type VAR_9;
      struct decision *VAR_10, *VAR_11;

      VAR_9 = VAR_7->tests->type;
      VAR_8 = VAR_7->next;


      if (VAR_8->tests->type != VAR_9)
 continue;



      if (VAR_9 != VAR_4
   && VAR_9 != VAR_0
   && VAR_9 != VAR_5
   && VAR_9 != VAR_2
   && VAR_9 != VAR_1
   && VAR_9 != VAR_3)
 continue;



      if (VAR_7->tests->next != ((void*)0))
 {
   VAR_10 = FUNC_1 (VAR_7->position, &VAR_7->success);
   VAR_10->tests = VAR_7->tests->next;
   VAR_7->tests->next = ((void*)0);
 }


      VAR_7->next = ((void*)0);
      VAR_11 = VAR_6->last;
      VAR_6->last = VAR_7;



      do
 {
   struct decision_head VAR_12;

   if (VAR_8->tests->next != ((void*)0))
     {
       VAR_10 = FUNC_1 (VAR_8->position, &VAR_8->success);
       VAR_10->tests = VAR_8->tests->next;
       VAR_8->tests->next = ((void*)0);
     }
   VAR_10 = VAR_8;
   VAR_8 = VAR_8->next;
   VAR_10->next = ((void*)0);
   VAR_12.first = VAR_12.last = VAR_10;

   FUNC_0 (VAR_6, &VAR_12);
 }
      while (VAR_8 && VAR_8->tests->type == VAR_9);



      if (VAR_8)
 {
   VAR_8->prev = VAR_6->last;
   VAR_6->last->next = VAR_8;
   VAR_6->last = VAR_11;
 }
    }


  for (VAR_7 = VAR_6->first; VAR_7; VAR_7 = VAR_7->next)
    FUNC_2 (&VAR_7->success);
}
