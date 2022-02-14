
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct decision_test {struct decision_test* next; } ;
struct decision {int number; TYPE_2__* afterward; TYPE_1__* next; struct decision_test* tests; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (struct decision_test*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4 (struct decision *VAR_1, int VAR_2)
{
  int VAR_3;
  struct decision_test *VAR_4;

  if (VAR_1 == ((void*)0))
    {
      for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
 FUNC_3 (' ', VAR_0);
      FUNC_2 ("(nil)\n", VAR_0);
      return;
    }

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
    FUNC_3 (' ', VAR_0);

  FUNC_3 ('{', VAR_0);
  VAR_4 = VAR_1->tests;
  if (VAR_4)
    {
      FUNC_0 (VAR_4);
      while ((VAR_4 = VAR_4->next) != ((void*)0))
 {
   FUNC_2 (" + ", VAR_0);
   FUNC_0 (VAR_4);
 }
    }
  FUNC_1 (VAR_0, "} %d n %d a %d\n", VAR_1->number,
    (VAR_1->next ? VAR_1->next->number : -1),
    (VAR_1->afterward ? VAR_1->afterward->number : -1));
}
