
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct decision_test {scalar_t__ type; struct decision_test* next; } ;
struct TYPE_4__ {TYPE_1__* first; } ;
struct decision {TYPE_2__ success; struct decision_test* tests; } ;
struct TYPE_3__ {int position; } ;


 int FUNC_0 (struct decision_test*,struct decision_test*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2 (struct decision *VAR_0, struct decision *VAR_1)
{
  struct decision_test *VAR_2, *VAR_3;

  for (VAR_2 = VAR_0->tests, VAR_3 = VAR_1->tests; VAR_2 && VAR_3; VAR_2 = VAR_2->next, VAR_3 = VAR_3->next)
    {
      if (VAR_2->type != VAR_3->type)
 return 0;
      if (! FUNC_0 (VAR_2, VAR_3))
 return 0;
    }


  if (VAR_2 != VAR_3)
    return 0;





  if (VAR_0->success.first
      && VAR_1->success.first
      && FUNC_1 (VAR_0->success.first->position, VAR_1->success.first->position))
    return 0;

  return 1;
}
