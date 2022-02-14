
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_test {scalar_t__ type; struct decision_test* next; } ;
struct decision_head {struct decision* first; } ;
struct decision {struct decision_head success; struct decision* next; struct decision_test* tests; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_0 (struct decision_head *VAR_3)
{
  struct decision *VAR_4;

  for (VAR_4 = VAR_3->first; VAR_4; VAR_4 = VAR_4->next)
    {
      struct decision_test *VAR_5, *VAR_6;

      VAR_5 = VAR_4->tests;
      VAR_6 = VAR_5->next;
      if (VAR_6 == ((void*)0))
 continue;


      while (VAR_6 && VAR_6->type != VAR_2)
 VAR_6 = VAR_6->next;
      if (VAR_6)
 {



   while (VAR_5->type == VAR_1 || VAR_5->type == VAR_0)
     VAR_5 = VAR_5->next;
   VAR_4->tests = VAR_5;
 }
    }


  for (VAR_4 = VAR_3->first; VAR_4; VAR_4 = VAR_4->next)
    FUNC_0 (&VAR_4->success);
}
