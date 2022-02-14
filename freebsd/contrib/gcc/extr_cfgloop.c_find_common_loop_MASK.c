
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {size_t depth; struct loop* outer; struct loop** pred; } ;



struct loop *
FUNC_0 (struct loop *VAR_0, struct loop *VAR_1)
{
  if (!VAR_0) return VAR_1;
  if (!VAR_1) return VAR_0;

  if (VAR_0->depth < VAR_1->depth)
    VAR_1 = VAR_1->pred[VAR_0->depth];
  else if (VAR_0->depth > VAR_1->depth)
    VAR_0 = VAR_0->pred[VAR_1->depth];

  while (VAR_0 != VAR_1)
    {
      VAR_0 = VAR_0->outer;
      VAR_1 = VAR_1->outer;
    }
  return VAR_0;
}
