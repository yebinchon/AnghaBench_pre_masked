
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioapic {int lock; } ;
struct TYPE_2__ {struct kvm_ioapic* vioapic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_ioapic*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm *VAR_0, int VAR_1, int VAR_2)
{
 struct kvm_ioapic *VAR_3 = VAR_0->arch.vioapic;

 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock);
}
