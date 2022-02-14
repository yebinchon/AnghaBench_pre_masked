
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct kvm_memslots {int dummy; } ;
struct kvm_io_bus {int dummy; } ;
struct kvm_coalesced_mmio_ring {int dummy; } ;
struct TYPE_4__ {int * ops; } ;
struct kvm {int vm_list; int users_count; int slots_lock; int irq_lock; int lock; int requests_lock; int mmu_lock; TYPE_2__* mm; struct kvm* memslots; int srcu; struct kvm** buses; TYPE_1__ mmu_notifier; struct kvm_coalesced_mmio_ring* coalesced_mmio_ring; int irq_ack_notifier_list; int mask_notifier_list; } ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int mm_count; } ;


 int VAR_0 ;
 struct kvm* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kvm*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct kvm*) ;
 struct kvm* FUNC_11 () ;
 int FUNC_12 (struct kvm*) ;
 int FUNC_13 (struct kvm*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_14 (int,int) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int VAR_7 ;

__attribute__((used)) static struct kvm *FUNC_23(void)
{
 int VAR_8 = 0, VAR_9;
 struct kvm *VAR_10 = FUNC_11();




 if (FUNC_2(VAR_10))
  goto out;

 VAR_8 = FUNC_8();
 if (VAR_8)
  goto out_err_nodisable;





 VAR_10->memslots = FUNC_14(sizeof(struct kvm_memslots), VAR_1);
 if (!VAR_10->memslots) {
  FUNC_10(VAR_10);
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_9(&VAR_10->srcu);
 if (VAR_8) {
  FUNC_10(VAR_10->memslots);
  FUNC_10(VAR_10);
  return FUNC_0(VAR_8);
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_10->buses[VAR_9] = FUNC_14(sizeof(struct kvm_io_bus),
     VAR_1);
  if (!VAR_10->buses[VAR_9]) {
   FUNC_6(&VAR_10->srcu);
   FUNC_10(VAR_10->memslots);
   FUNC_10(VAR_10);
   return FUNC_0(-VAR_0);
  }
 }
 VAR_10->mm = VAR_4->mm;
 FUNC_4(&VAR_10->mm->mm_count);
 FUNC_21(&VAR_10->mmu_lock);
 FUNC_21(&VAR_10->requests_lock);
 FUNC_13(VAR_10);
 FUNC_17(&VAR_10->lock);
 FUNC_17(&VAR_10->irq_lock);
 FUNC_17(&VAR_10->slots_lock);
 FUNC_5(&VAR_10->users_count, 1);
 FUNC_20(&VAR_5);
 FUNC_15(&VAR_10->vm_list, &VAR_7);
 FUNC_22(&VAR_5);



out:
 return VAR_10;

out_err:
 FUNC_7();
out_err_nodisable:
 FUNC_10(VAR_10);
 return FUNC_0(VAR_8);
}
