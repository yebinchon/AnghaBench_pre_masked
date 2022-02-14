
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_io_device {int dummy; } ;
struct kvm_coalesced_mmio_ring {size_t last; TYPE_2__* coalesced_mmio; } ;
struct kvm_coalesced_mmio_dev {int lock; TYPE_1__* kvm; } ;
typedef int gpa_t ;
struct TYPE_4__ {int len; int data; int phys_addr; } ;
struct TYPE_3__ {struct kvm_coalesced_mmio_ring* coalesced_mmio_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_coalesced_mmio_dev*,int ,int) ;
 int FUNC_1 (int ,void const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct kvm_coalesced_mmio_dev* FUNC_5 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_6(struct kvm_io_device *VAR_2,
    gpa_t VAR_3, int VAR_4, const void *VAR_5)
{
 struct kvm_coalesced_mmio_dev *VAR_6 = FUNC_5(VAR_2);
 struct kvm_coalesced_mmio_ring *VAR_7 = VAR_6->kvm->coalesced_mmio_ring;
 if (!FUNC_0(VAR_6, VAR_3, VAR_4))
  return -VAR_0;

 FUNC_3(&VAR_6->lock);



 VAR_7->coalesced_mmio[VAR_7->last].phys_addr = VAR_3;
 VAR_7->coalesced_mmio[VAR_7->last].len = VAR_4;
 FUNC_1(VAR_7->coalesced_mmio[VAR_7->last].data, VAR_5, VAR_4);
 FUNC_2();
 VAR_7->last = (VAR_7->last + 1) % VAR_1;
 FUNC_4(&VAR_6->lock);
 return 0;
}
