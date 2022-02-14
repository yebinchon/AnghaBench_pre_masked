
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioapic {int dev; struct kvm* kvm; int lock; } ;
struct TYPE_2__ {struct kvm_ioapic* vioapic; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_ioapic*) ;
 int FUNC_1 (struct kvm*,int ,int *) ;
 int FUNC_2 (struct kvm_ioapic*) ;
 int FUNC_3 (int *,int *) ;
 struct kvm_ioapic* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct kvm *VAR_4)
{
 struct kvm_ioapic *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(struct kvm_ioapic), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_7(&VAR_5->lock);
 VAR_4->arch.vioapic = VAR_5;
 FUNC_2(VAR_5);
 FUNC_3(&VAR_5->dev, &VAR_3);
 VAR_5->kvm = VAR_4;
 FUNC_5(&VAR_4->slots_lock);
 VAR_6 = FUNC_1(VAR_4, VAR_2, &VAR_5->dev);
 FUNC_6(&VAR_4->slots_lock);
 if (VAR_6 < 0)
  FUNC_0(VAR_5);

 return VAR_6;
}
