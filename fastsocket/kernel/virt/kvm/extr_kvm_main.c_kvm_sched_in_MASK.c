
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preempt_notifier {int dummy; } ;
struct kvm_vcpu {int preempted; } ;


 int FUNC_0 (struct kvm_vcpu*,int) ;
 struct kvm_vcpu* FUNC_1 (struct preempt_notifier*) ;

__attribute__((used)) static void FUNC_2(struct preempt_notifier *VAR_0, int VAR_1)
{
 struct kvm_vcpu *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2->preempted)
  VAR_2->preempted = 0;

 FUNC_0(VAR_2, VAR_1);
}
