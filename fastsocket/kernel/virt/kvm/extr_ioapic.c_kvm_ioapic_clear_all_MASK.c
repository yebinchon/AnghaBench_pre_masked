
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_ioapic {int lock; int * irq_states; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm_ioapic *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1->lock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, &VAR_1->irq_states[VAR_3]);
 FUNC_2(&VAR_1->lock);
}
