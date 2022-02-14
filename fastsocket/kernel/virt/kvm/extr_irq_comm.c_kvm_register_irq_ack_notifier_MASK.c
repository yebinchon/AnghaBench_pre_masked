
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_irq_ack_notifier {int link; } ;
struct kvm {int irq_lock; int irq_ack_notifier_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm *VAR_0,
       struct kvm_irq_ack_notifier *VAR_1)
{
 FUNC_1(&VAR_0->irq_lock);
 FUNC_0(&VAR_1->link, &VAR_0->irq_ack_notifier_list);
 FUNC_2(&VAR_0->irq_lock);
}
