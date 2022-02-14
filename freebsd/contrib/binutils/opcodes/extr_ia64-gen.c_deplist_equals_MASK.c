
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deplist {int len; scalar_t__* deps; } ;



__attribute__((used)) static int
FUNC_0 (struct deplist *VAR_0, struct deplist *VAR_1)
{
  int VAR_2;

  if (VAR_0->len != VAR_1->len)
    return 0;

  for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++)
    if (VAR_0->deps[VAR_2] != VAR_1->deps[VAR_2])
      return 0;

  return 1;
}
