
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {struct loop* next; struct loop* inner; } ;



unsigned
FUNC_0 (const struct loop *VAR_0)
{
  const struct loop *VAR_1;
  unsigned VAR_2 = 0, VAR_3;

  for (VAR_1 = VAR_0->inner; VAR_1; VAR_1 = VAR_1->next)
    {
      VAR_3 = FUNC_0 (VAR_1);
      if (VAR_3 >= VAR_2)
 VAR_2 = VAR_3 + 1;
    }
  return VAR_2;
}
