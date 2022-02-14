
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct pf_rule_addr {scalar_t__ neg; scalar_t__ port_op; scalar_t__* port; TYPE_1__ addr; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct pf_rule_addr *VAR_1, struct pf_rule_addr *VAR_2)
{
 if (VAR_1->addr.type != VAR_0 ||
     VAR_2->addr.type != VAR_0)
  return (0);
 if (VAR_1->neg != VAR_2->neg || VAR_1->port_op != VAR_2->port_op ||
     VAR_1->port[0] != VAR_2->port[0] || VAR_1->port[1] != VAR_2->port[1])
  return (0);
 return (1);
}
