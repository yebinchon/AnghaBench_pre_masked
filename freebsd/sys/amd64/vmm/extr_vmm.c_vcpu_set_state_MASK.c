
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; struct vcpu* vcpu; } ;
struct vcpu {int dummy; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct vcpu*) ;
 int FUNC_2 (struct vm*,int,int,int) ;
 int FUNC_3 (struct vcpu*) ;

int
FUNC_4(struct vm *VAR_0, int VAR_1, enum vcpu_state VAR_2,
    bool VAR_3)
{
 int VAR_4;
 struct vcpu *VAR_5;

 if (VAR_1 < 0 || VAR_1 >= VAR_0->maxcpus)
  FUNC_0("vm_set_run_state: invalid vcpuid %d", VAR_1);

 VAR_5 = &VAR_0->vcpu[VAR_1];

 FUNC_1(VAR_5);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_5);

 return (VAR_4);
}
