
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule {scalar_t__ af; } ;



int
FUNC_0(struct pf_rule *VAR_0, struct pf_rule *VAR_1)
{
 if (VAR_0->af != VAR_1->af || VAR_0->af == 0)
  return (1);
 return (0);
}
