
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_device {int dummy; } ;
struct kvm_coalesced_mmio_dev {int dummy; } ;


 int FUNC_0 (struct kvm_coalesced_mmio_dev*) ;
 struct kvm_coalesced_mmio_dev* FUNC_1 (struct kvm_io_device*) ;

__attribute__((used)) static void FUNC_2(struct kvm_io_device *VAR_0)
{
 struct kvm_coalesced_mmio_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);
}
