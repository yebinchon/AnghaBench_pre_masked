
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {int maxcpus; TYPE_1__* vcpu; } ;
typedef enum x2apic_state { ____Placeholder_x2apic_state } x2apic_state ;
struct TYPE_2__ {int x2apic_state; } ;


 int VAR_0 ;

int
FUNC_0(struct vm *VAR_1, int VAR_2, enum x2apic_state *VAR_3)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_1->maxcpus)
  return (VAR_0);

 *VAR_3 = VAR_1->vcpu[VAR_2].x2apic_state;

 return (0);
}
