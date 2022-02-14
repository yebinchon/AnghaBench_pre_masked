
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct decision* first; } ;
struct decision {struct decision* next; TYPE_1__ success; int tests; int position; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3 (struct decision *VAR_0, struct decision *VAR_1,
   int VAR_2)
{
  struct decision *VAR_3, *VAR_4;
  int VAR_5;
  VAR_5 = FUNC_2 (VAR_0->position, VAR_1->position);
  if (VAR_5 != 0)
    {
      FUNC_0 (!VAR_2);


      if (VAR_5 > 0)
 VAR_3 = VAR_0, VAR_0 = VAR_1, VAR_1 = VAR_3;

      if (VAR_0->success.first == 0)
 return 1;
      for (VAR_3 = VAR_0->success.first; VAR_3; VAR_3 = VAR_3->next)
 if (FUNC_3 (VAR_3, VAR_1, 0))
   return 1;

      return 0;
    }


  VAR_5 = FUNC_1 (VAR_0->tests, VAR_1->tests);
  if (VAR_5 >= 0)
    return VAR_5;







  if (VAR_2 || VAR_0->success.first == 0 || VAR_1->success.first == 0)
    return 1;

  for (VAR_3 = VAR_0->success.first; VAR_3; VAR_3 = VAR_3->next)
    for (VAR_4 = VAR_1->success.first; VAR_4; VAR_4 = VAR_4->next)
      if (FUNC_3 (VAR_3, VAR_4, 0))
 return 1;

  return 0;
}
