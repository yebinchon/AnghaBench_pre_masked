
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; struct vcpu* vcpu; } ;
struct vcpu {int extint_pending; } ;


 int FUNC_0 (char*,int) ;

int
FUNC_1(struct vm *VAR_0, int VAR_1)
{
 struct vcpu *VAR_2;

 if (VAR_1 < 0 || VAR_1 >= VAR_0->maxcpus)
  FUNC_0("vm_extint_pending: invalid vcpuid %d", VAR_1);

 VAR_2 = &VAR_0->vcpu[VAR_1];

 return (VAR_2->extint_pending);
}
