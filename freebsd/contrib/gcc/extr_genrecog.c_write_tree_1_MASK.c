
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decision_head {TYPE_1__* last; struct decision* first; } ;
struct decision {struct decision* next; int number; scalar_t__ need_label; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;
struct TYPE_2__ {int afterward; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (struct decision*,int,int) ;
 struct decision* FUNC_3 (struct decision*,int) ;

__attribute__((used)) static void
FUNC_4 (struct decision_head *VAR_0, int VAR_1,
       enum routine_type VAR_2)
{
  struct decision *VAR_3, *VAR_4;
  int VAR_5 = 0;

  for (VAR_3 = VAR_0->first; VAR_3 ; VAR_3 = VAR_4)
    {

      if (VAR_3 != VAR_0->first && VAR_3->need_label)
 FUNC_0 (" ", VAR_3->number);


      VAR_4 = FUNC_3 (VAR_3, VAR_1);
      if (VAR_3 != VAR_4)
 VAR_5 = 0;
      else
 {

   VAR_5 = FUNC_2 (VAR_3, VAR_1, VAR_2);
   VAR_4 = VAR_3->next;
 }
    }



  if (! VAR_5)
    FUNC_1 (VAR_0->last, VAR_0->last->afterward, "  ");
}
