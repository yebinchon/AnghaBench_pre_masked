
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int mutex; int preempt_notifier; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm_vcpu *VAR_0)
{
 FUNC_2();
 FUNC_0(VAR_0);
 FUNC_4(&VAR_0->preempt_notifier);
 FUNC_3();
 FUNC_1(&VAR_0->mutex);
}
