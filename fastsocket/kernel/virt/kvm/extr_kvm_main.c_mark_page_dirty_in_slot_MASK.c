
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {unsigned long base_gfn; scalar_t__ dirty_bitmap; } ;
struct kvm {int dummy; } ;
typedef unsigned long gfn_t ;


 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

void FUNC_2(struct kvm *VAR_0, struct kvm_memory_slot *VAR_1,
        gfn_t VAR_2)
{
 if (VAR_1 && VAR_1->dirty_bitmap) {
  unsigned long VAR_3 = VAR_2 - VAR_1->base_gfn;


  if (!FUNC_1(VAR_3, VAR_1->dirty_bitmap))
   FUNC_0(VAR_3, VAR_1->dirty_bitmap);
 }
}
