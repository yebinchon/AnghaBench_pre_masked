
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 struct kvm_memory_slot* FUNC_0 (struct kvm*,int ) ;
 int FUNC_1 (struct kvm*,int ) ;

struct kvm_memory_slot *FUNC_2(struct kvm *VAR_0, gfn_t VAR_1)
{
 VAR_1 = FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_0, VAR_1);
}
