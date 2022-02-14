
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sra_elt {struct sra_elt* sibling; struct sra_elt* groups; struct sra_elt* children; scalar_t__ cannot_scalarize; } ;



__attribute__((used)) static bool
FUNC_0 (struct sra_elt *VAR_0)
{
  struct sra_elt *VAR_1;

  if (VAR_0->cannot_scalarize)
    return 0;

  for (VAR_1 = VAR_0->children; VAR_1; VAR_1 = VAR_1->sibling)
    if (!FUNC_0 (VAR_1))
      return 0;

  for (VAR_1 = VAR_0->groups; VAR_1; VAR_1 = VAR_1->sibling)
    if (!FUNC_0 (VAR_1))
      return 0;

  return 1;
}
