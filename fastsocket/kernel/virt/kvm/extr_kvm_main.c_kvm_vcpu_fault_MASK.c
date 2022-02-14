
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_fault {scalar_t__ pgoff; struct page* page; } ;
struct vm_area_struct {TYPE_3__* vm_file; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int pio_data; } ;
struct kvm_vcpu {TYPE_2__* kvm; TYPE_1__ arch; int run; } ;
struct TYPE_6__ {struct kvm_vcpu* private_data; } ;
struct TYPE_5__ {int coalesced_mmio_ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct kvm_vcpu *VAR_5 = VAR_3->vm_file->private_data;
 struct page *VAR_6;

 if (VAR_4->pgoff == 0)
  VAR_6 = FUNC_1(VAR_5->run);
 else
  return VAR_2;
 FUNC_0(VAR_6);
 VAR_4->page = VAR_6;
 return 0;
}
