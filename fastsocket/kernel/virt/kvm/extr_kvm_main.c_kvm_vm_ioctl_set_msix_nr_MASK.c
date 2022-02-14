
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msix_entry {int dummy; } ;
struct kvm_guest_msix_entry {int dummy; } ;
struct kvm_assigned_msix_nr {int entry_nr; int assigned_dev_id; } ;
struct kvm_assigned_dev_kernel {scalar_t__ entries_nr; void* host_msix_entries; void* guest_msix_entries; } ;
struct TYPE_2__ {int assigned_dev_head; } ;
struct kvm {int lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*) ;
 struct kvm_assigned_dev_kernel* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_4,
        struct kvm_assigned_msix_nr *VAR_5)
{
 int VAR_6 = 0;
 struct kvm_assigned_dev_kernel *VAR_7;

 FUNC_3(&VAR_4->lock);

 VAR_7 = FUNC_1(&VAR_4->arch.assigned_dev_head,
          VAR_5->assigned_dev_id);
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  goto msix_nr_out;
 }

 if (VAR_7->entries_nr == 0) {
  VAR_7->entries_nr = VAR_5->entry_nr;
  if (VAR_7->entries_nr == 0 ||
      VAR_7->entries_nr >= VAR_3) {
   VAR_6 = -VAR_0;
   goto msix_nr_out;
  }

  VAR_7->host_msix_entries = FUNC_2(sizeof(struct msix_entry) *
      VAR_5->entry_nr,
      VAR_2);
  if (!VAR_7->host_msix_entries) {
   VAR_6 = -VAR_1;
   goto msix_nr_out;
  }
  VAR_7->guest_msix_entries = FUNC_2(
    sizeof(struct kvm_guest_msix_entry) *
    VAR_5->entry_nr, VAR_2);
  if (!VAR_7->guest_msix_entries) {
   FUNC_0(VAR_7->host_msix_entries);
   VAR_6 = -VAR_1;
   goto msix_nr_out;
  }
 } else
  VAR_6 = -VAR_0;
msix_nr_out:
 FUNC_4(&VAR_4->lock);
 return VAR_6;
}
