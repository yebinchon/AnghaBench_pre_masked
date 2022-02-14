
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_candidate {int viable; struct z_candidate* next; } ;



__attribute__((used)) static bool
FUNC_0 (struct z_candidate *VAR_0)
{
  for (; VAR_0; VAR_0 = VAR_0->next)
    if (VAR_0->viable == 1)
      return 1;
  return 0;
}
