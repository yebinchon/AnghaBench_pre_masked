
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_irq_mask_notifier {int irq; int link; } ;
struct kvm {int irq_lock; int mask_notifier_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm *VAR_0, int VAR_1,
        struct kvm_irq_mask_notifier *VAR_2)
{
 FUNC_1(&VAR_0->irq_lock);
 VAR_2->irq = VAR_1;
 FUNC_0(&VAR_2->link, &VAR_0->mask_notifier_list);
 FUNC_2(&VAR_0->irq_lock);
}
