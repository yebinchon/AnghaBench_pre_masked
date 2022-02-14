
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_ioapic_state {int dummy; } ;
struct kvm_ioapic {int lock; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct kvm_ioapic* FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm_ioapic*,struct kvm_ioapic_state*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_ioapic*) ;

int FUNC_5(struct kvm *VAR_1, struct kvm_ioapic_state *VAR_2)
{
 struct kvm_ioapic *VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->lock);
 FUNC_1(VAR_3, VAR_2, sizeof(struct kvm_ioapic_state));
 FUNC_4(VAR_3);
 FUNC_3(&VAR_3->lock);
 return 0;
}
