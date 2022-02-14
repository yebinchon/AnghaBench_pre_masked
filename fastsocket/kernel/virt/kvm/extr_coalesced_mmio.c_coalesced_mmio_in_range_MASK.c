
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_coalesced_mmio_zone {scalar_t__ addr; scalar_t__ size; } ;
struct kvm_coalesced_mmio_ring {int first; int last; } ;
struct kvm_coalesced_mmio_dev {int nb_zones; struct kvm_coalesced_mmio_zone* zone; TYPE_1__* kvm; } ;
typedef scalar_t__ gpa_t ;
struct TYPE_2__ {struct kvm_coalesced_mmio_ring* coalesced_mmio_ring; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct kvm_coalesced_mmio_dev *VAR_2,
       gpa_t VAR_3, int VAR_4)
{
 struct kvm_coalesced_mmio_zone *VAR_5;
 struct kvm_coalesced_mmio_ring *VAR_6;
 unsigned VAR_7;
 int VAR_8;







 VAR_6 = VAR_2->kvm->coalesced_mmio_ring;
 VAR_7 = (VAR_6->first - VAR_6->last - 1) % VAR_0;
 if (VAR_7 < VAR_1) {

  return 0;
 }



 for (VAR_8 = 0; VAR_8 < VAR_2->nb_zones; VAR_8++) {
  VAR_5 = &VAR_2->zone[VAR_8];





  if (VAR_5->addr <= VAR_3 &&
      VAR_3 + VAR_4 <= VAR_5->addr + VAR_5->size)
   return 1;
 }
 return 0;
}
