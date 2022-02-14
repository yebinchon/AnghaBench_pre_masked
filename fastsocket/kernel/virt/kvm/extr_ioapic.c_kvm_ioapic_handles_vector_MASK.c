
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioapic {int handled_vectors; } ;
struct TYPE_2__ {struct kvm_ioapic* vioapic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;

bool FUNC_2(struct kvm *VAR_0, int VAR_1)
{
 struct kvm_ioapic *VAR_2 = VAR_0->arch.vioapic;
 FUNC_0();
 return FUNC_1(VAR_1, VAR_2->handled_vectors);
}
