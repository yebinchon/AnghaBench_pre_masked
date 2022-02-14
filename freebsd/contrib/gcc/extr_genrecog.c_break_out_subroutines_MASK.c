
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_head {struct decision* first; } ;
struct decision {scalar_t__ subroutine_number; struct decision_head success; struct decision* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0 (struct decision_head *VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  struct decision *VAR_5;

  for (VAR_5 = VAR_2->first; VAR_5; VAR_5 = VAR_5->next)
    VAR_4 += 1 + FUNC_0 (&VAR_5->success, 0);

  if (VAR_4 > VAR_0 && ! VAR_3)
    {
      VAR_2->first->subroutine_number = ++VAR_1;
      VAR_4 = 1;
    }
  return VAR_4;
}
