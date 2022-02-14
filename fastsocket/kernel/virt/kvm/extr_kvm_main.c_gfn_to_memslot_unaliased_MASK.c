
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 struct kvm_memory_slot* FUNC_0 (struct kvm_memslots*,int ) ;
 struct kvm_memslots* FUNC_1 (struct kvm*) ;

struct kvm_memory_slot *FUNC_2(struct kvm *VAR_0, gfn_t VAR_1)
{
 struct kvm_memslots *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2, VAR_1);
}
