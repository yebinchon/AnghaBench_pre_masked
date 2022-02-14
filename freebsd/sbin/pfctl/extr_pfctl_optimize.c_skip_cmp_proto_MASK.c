
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule {scalar_t__ proto; } ;



int
FUNC_0(struct pf_rule *VAR_0, struct pf_rule *VAR_1)
{
 return (VAR_0->proto != VAR_1->proto || VAR_0->proto == 0);
}
