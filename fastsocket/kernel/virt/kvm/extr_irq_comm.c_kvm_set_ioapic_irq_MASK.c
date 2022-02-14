
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pin; } ;
struct kvm_kernel_irq_routing_entry {TYPE_2__ irqchip; } ;
struct kvm_ioapic {int dummy; } ;
struct TYPE_3__ {struct kvm_ioapic* vioapic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_ioapic*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_kernel_irq_routing_entry *VAR_0,
         struct kvm *VAR_1, int VAR_2, int VAR_3)
{
 struct kvm_ioapic *VAR_4 = VAR_1->arch.vioapic;
 return FUNC_0(VAR_4, VAR_0->irqchip.pin, VAR_2, VAR_3);
}
