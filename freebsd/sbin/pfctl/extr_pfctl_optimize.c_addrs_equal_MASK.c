
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule_addr {scalar_t__ neg; int addr; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

int
FUNC_1(struct pf_rule_addr *VAR_0, struct pf_rule_addr *VAR_1)
{
 if (VAR_0->neg != VAR_1->neg)
  return (0);
 return (FUNC_0(&VAR_0->addr, &VAR_1->addr, sizeof(VAR_0->addr)) == 0);
}
