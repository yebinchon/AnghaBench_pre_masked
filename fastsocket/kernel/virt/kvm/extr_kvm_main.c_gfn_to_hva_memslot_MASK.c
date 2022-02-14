
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {unsigned long userspace_addr; int base_gfn; } ;
typedef int gfn_t ;


 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct kvm_memory_slot *VAR_1, gfn_t VAR_2)
{
 return (VAR_1->userspace_addr + (VAR_2 - VAR_1->base_gfn) * VAR_0);
}
