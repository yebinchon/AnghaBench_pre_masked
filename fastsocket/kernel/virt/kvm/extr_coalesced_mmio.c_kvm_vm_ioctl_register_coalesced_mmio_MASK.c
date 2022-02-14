
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_coalesced_mmio_zone {int dummy; } ;
struct kvm_coalesced_mmio_dev {size_t nb_zones; struct kvm_coalesced_mmio_zone* zone; } ;
struct kvm {int slots_lock; struct kvm_coalesced_mmio_dev* coalesced_mmio_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct kvm *VAR_3,
             struct kvm_coalesced_mmio_zone *VAR_4)
{
 struct kvm_coalesced_mmio_dev *VAR_5 = VAR_3->coalesced_mmio_dev;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_3->slots_lock);
 if (VAR_5->nb_zones >= VAR_2) {
  FUNC_1(&VAR_3->slots_lock);
  return -VAR_1;
 }

 VAR_5->zone[VAR_5->nb_zones] = *VAR_4;
 VAR_5->nb_zones++;

 FUNC_1(&VAR_3->slots_lock);
 return 0;
}
