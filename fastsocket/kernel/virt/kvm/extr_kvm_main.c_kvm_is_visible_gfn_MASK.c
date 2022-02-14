
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {int flags; scalar_t__ base_gfn; scalar_t__ npages; } ;
struct kvm {int memslots; } ;
typedef scalar_t__ gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_memslots* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm*,scalar_t__) ;

int FUNC_2(struct kvm *VAR_2, gfn_t VAR_3)
{
 int VAR_4;
 struct kvm_memslots *VAR_5 = FUNC_0(VAR_2->memslots);

 VAR_3 = FUNC_1(VAR_2, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct kvm_memory_slot *VAR_6 = &VAR_5->memslots[VAR_4];

  if (VAR_6->flags & VAR_1)
   continue;

  if (VAR_3 >= VAR_6->base_gfn
      && VAR_3 < VAR_6->base_gfn + VAR_6->npages)
   return 1;
 }
 return 0;
}
