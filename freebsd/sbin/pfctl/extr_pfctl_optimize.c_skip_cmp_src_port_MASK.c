
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port_op; scalar_t__* port; } ;
struct pf_rule {TYPE_1__ src; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct pf_rule *VAR_1, struct pf_rule *VAR_2)
{
 if (VAR_1->src.port_op == VAR_0 || VAR_1->src.port_op != VAR_2->src.port_op ||
     VAR_1->src.port[0] != VAR_2->src.port[0] ||
     VAR_1->src.port[1] != VAR_2->src.port[1])
  return (1);





 return (0);
}
