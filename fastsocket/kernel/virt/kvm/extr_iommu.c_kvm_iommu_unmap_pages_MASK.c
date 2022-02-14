
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int npages; int base_gfn; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,int ,int ) ;

void FUNC_1(struct kvm *VAR_0, struct kvm_memory_slot *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->base_gfn, VAR_1->npages);
}
