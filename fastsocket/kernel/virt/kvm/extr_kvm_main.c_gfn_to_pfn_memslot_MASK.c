
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int pfn_t ;
typedef int gfn_t ;


 unsigned long FUNC_0 (struct kvm_memory_slot*,int ) ;
 int FUNC_1 (struct kvm*,unsigned long) ;

pfn_t FUNC_2(struct kvm *VAR_0,
    struct kvm_memory_slot *VAR_1, gfn_t VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1, VAR_2);
 return FUNC_1(VAR_0, VAR_3);
}
