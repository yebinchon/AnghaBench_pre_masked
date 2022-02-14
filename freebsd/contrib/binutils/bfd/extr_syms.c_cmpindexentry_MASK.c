
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct indexentry {scalar_t__ val; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct indexentry *VAR_2 = VAR_0;
  const struct indexentry *VAR_3 = VAR_1;

  if (VAR_2->val < VAR_3->val)
    return -1;
  else if (VAR_2->val > VAR_3->val)
    return 1;
  else
    return 0;
}
