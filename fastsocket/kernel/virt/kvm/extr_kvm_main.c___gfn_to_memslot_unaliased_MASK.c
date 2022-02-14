
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int nmemslots; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {scalar_t__ base_gfn; scalar_t__ npages; } ;
typedef scalar_t__ gfn_t ;



__attribute__((used)) static struct kvm_memory_slot *
FUNC_0(struct kvm_memslots *VAR_0, gfn_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nmemslots; ++VAR_2) {
  struct kvm_memory_slot *VAR_3 = &VAR_0->memslots[VAR_2];

  if (VAR_1 >= VAR_3->base_gfn
      && VAR_1 < VAR_3->base_gfn + VAR_3->npages)
   return VAR_3;
 }
 return ((void*)0);
}
