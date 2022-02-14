
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_assigned_msix_entry {scalar_t__ entry; scalar_t__ gsi; int assigned_dev_id; } ;
struct kvm_assigned_dev_kernel {int entries_nr; TYPE_3__* host_msix_entries; TYPE_2__* guest_msix_entries; } ;
struct TYPE_4__ {int assigned_dev_head; } ;
struct kvm {int lock; TYPE_1__ arch; } ;
struct TYPE_6__ {scalar_t__ entry; } ;
struct TYPE_5__ {scalar_t__ vector; scalar_t__ entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_assigned_dev_kernel* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_2,
           struct kvm_assigned_msix_entry *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 struct kvm_assigned_dev_kernel *VAR_6;

 FUNC_1(&VAR_2->lock);

 VAR_6 = FUNC_0(&VAR_2->arch.assigned_dev_head,
          VAR_3->assigned_dev_id);

 if (!VAR_6) {
  VAR_4 = -VAR_0;
  goto msix_entry_out;
 }

 for (VAR_5 = 0; VAR_5 < VAR_6->entries_nr; VAR_5++)
  if (VAR_6->guest_msix_entries[VAR_5].vector == 0 ||
      VAR_6->guest_msix_entries[VAR_5].entry == VAR_3->entry) {
   VAR_6->guest_msix_entries[VAR_5].entry = VAR_3->entry;
   VAR_6->guest_msix_entries[VAR_5].vector = VAR_3->gsi;
   VAR_6->host_msix_entries[VAR_5].entry = VAR_3->entry;
   break;
  }
 if (VAR_5 == VAR_6->entries_nr) {
  VAR_4 = -VAR_1;
  goto msix_entry_out;
 }

msix_entry_out:
 FUNC_2(&VAR_2->lock);

 return VAR_4;
}
