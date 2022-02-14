
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {scalar_t__ run; int pid; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 FUNC_2(VAR_0->pid);
 FUNC_1(VAR_0);
 FUNC_0((unsigned long)VAR_0->run);
}
