
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule {scalar_t__ direction; } ;



int
FUNC_0(struct pf_rule *VAR_0, struct pf_rule *VAR_1)
{
 if (VAR_0->direction == 0 || VAR_0->direction != VAR_1->direction)
  return (1);
 return (0);
}
