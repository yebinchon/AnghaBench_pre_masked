
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eh_region {int may_contain_throw; struct eh_region* outer; } ;



void
FUNC_0 (struct eh_region *VAR_0)
{
  while (VAR_0 && !VAR_0->may_contain_throw)
    {
      VAR_0->may_contain_throw = 1;
      VAR_0 = VAR_0->outer;
    }
}
