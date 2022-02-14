
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int nmemslots; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {scalar_t__ base_gfn; scalar_t__ npages; } ;
struct kvm {int memslots; } ;
typedef scalar_t__ gfn_t ;


 struct kvm_memslots* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm*,scalar_t__) ;

int FUNC_2(struct kvm *VAR_0, gfn_t VAR_1)
{
 int VAR_2;
 struct kvm_memslots *VAR_3 = FUNC_0(VAR_0->memslots);
 struct kvm_memory_slot *VAR_4 = ((void*)0);

 VAR_1 = FUNC_1(VAR_0, VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3->nmemslots; ++VAR_2) {
  VAR_4 = &VAR_3->memslots[VAR_2];

  if (VAR_1 >= VAR_4->base_gfn
      && VAR_1 < VAR_4->base_gfn + VAR_4->npages)
   break;
 }

 return VAR_4 - VAR_3->memslots;
}
