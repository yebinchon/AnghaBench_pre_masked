
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; struct vcpu* vcpu; } ;
struct vcpu {int state; int hostcpu; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct vcpu*) ;
 int FUNC_2 (struct vcpu*) ;

enum vcpu_state
FUNC_3(struct vm *VAR_0, int VAR_1, int *VAR_2)
{
 struct vcpu *VAR_3;
 enum vcpu_state VAR_4;

 if (VAR_1 < 0 || VAR_1 >= VAR_0->maxcpus)
  FUNC_0("vm_get_run_state: invalid vcpuid %d", VAR_1);

 VAR_3 = &VAR_0->vcpu[VAR_1];

 FUNC_1(VAR_3);
 VAR_4 = VAR_3->state;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3->hostcpu;
 FUNC_2(VAR_3);

 return (VAR_4);
}
