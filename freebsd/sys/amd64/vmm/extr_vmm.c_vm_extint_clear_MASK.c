
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; struct vcpu* vcpu; } ;
struct vcpu {scalar_t__ extint_pending; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct vm*,int,int ,int) ;

void
FUNC_2(struct vm *VAR_1, int VAR_2)
{
 struct vcpu *VAR_3;

 if (VAR_2 < 0 || VAR_2 >= VAR_1->maxcpus)
  FUNC_0("vm_extint_pending: invalid vcpuid %d", VAR_2);

 VAR_3 = &VAR_1->vcpu[VAR_2];

 if (VAR_3->extint_pending == 0)
  FUNC_0("vm_extint_clear: inconsistent extint_pending state");

 VAR_3->extint_pending = 0;
 FUNC_1(VAR_1, VAR_2, VAR_0, 1);
}
