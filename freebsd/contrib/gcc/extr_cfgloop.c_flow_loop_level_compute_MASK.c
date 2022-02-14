
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {int level; struct loop* next; struct loop* inner; } ;



__attribute__((used)) static int
FUNC_0 (struct loop *VAR_0)
{
  struct loop *VAR_1;
  int VAR_2 = 1;

  if (! VAR_0)
    return 0;






  for (VAR_1 = VAR_0->inner; VAR_1; VAR_1 = VAR_1->next)
    {
      int VAR_3 = FUNC_0 (VAR_1) + 1;

      if (VAR_3 > VAR_2)
 VAR_2 = VAR_3;
    }

  VAR_0->level = VAR_2;
  return VAR_2;
}
