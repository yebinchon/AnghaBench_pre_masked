
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int flags; unsigned long userspace_addr; int base_gfn; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;

__attribute__((used)) static unsigned long
FUNC_1(struct kvm_memory_slot *VAR_2, gfn_t VAR_3)
{
 if (!VAR_2 || VAR_2->flags & VAR_0)
  return FUNC_0();
 return (VAR_2->userspace_addr + (VAR_3 - VAR_2->base_gfn) * VAR_1);
}
