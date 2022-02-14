
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_test {scalar_t__ type; struct decision_test* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct decision_test*,struct decision_test*) ;

__attribute__((used)) static int
FUNC_1 (struct decision_test *VAR_1, struct decision_test *VAR_2)
{
  struct decision_test *VAR_3, *VAR_4;



  if (VAR_1->type == VAR_0 || VAR_2->type == VAR_0)
    return 1;


  while (VAR_1 && VAR_2 && VAR_1->type == VAR_2->type)
    {
      if (FUNC_0 (VAR_1, VAR_2) == 0)
 return 0;
      VAR_1 = VAR_1->next, VAR_2 = VAR_2->next;
    }


  for (VAR_3 = VAR_1; VAR_3 ; VAR_3 = VAR_3->next)
    for (VAR_4 = VAR_2; VAR_4 ; VAR_4 = VAR_4->next)
      if (FUNC_0 (VAR_3, VAR_4) == 0)
 return 0;

  return -1;
}
