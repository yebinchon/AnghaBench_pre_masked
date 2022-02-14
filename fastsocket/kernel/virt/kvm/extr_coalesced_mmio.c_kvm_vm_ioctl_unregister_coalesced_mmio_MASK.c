
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_coalesced_mmio_zone {scalar_t__ addr; scalar_t__ size; } ;
struct kvm_coalesced_mmio_dev {int nb_zones; struct kvm_coalesced_mmio_zone* zone; } ;
struct kvm {int slots_lock; struct kvm_coalesced_mmio_dev* coalesced_mmio_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct kvm *VAR_1,
        struct kvm_coalesced_mmio_zone *VAR_2)
{
 int VAR_3;
 struct kvm_coalesced_mmio_dev *VAR_4 = VAR_1->coalesced_mmio_dev;
 struct kvm_coalesced_mmio_zone *VAR_5;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_1->slots_lock);

 VAR_3 = VAR_4->nb_zones;
 while(VAR_3) {
  VAR_5 = &VAR_4->zone[VAR_3 - 1];





  if (VAR_2->addr <= VAR_5->addr &&
      VAR_5->addr + VAR_5->size <= VAR_2->addr + VAR_2->size) {
   VAR_4->nb_zones--;
   *VAR_5 = VAR_4->zone[VAR_4->nb_zones];
  }
  VAR_3--;
 }

 FUNC_1(&VAR_1->slots_lock);

 return 0;
}
