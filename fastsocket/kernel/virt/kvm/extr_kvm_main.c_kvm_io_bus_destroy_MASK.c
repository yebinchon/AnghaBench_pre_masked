
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_device {int dummy; } ;
struct kvm_io_bus {int dev_count; struct kvm_io_device** devs; } ;


 int FUNC_0 (struct kvm_io_bus*) ;
 int FUNC_1 (struct kvm_io_device*) ;

__attribute__((used)) static void FUNC_2(struct kvm_io_bus *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->dev_count; VAR_1++) {
  struct kvm_io_device *VAR_2 = VAR_0->devs[VAR_1];

  FUNC_1(VAR_2);
 }
 FUNC_0(VAR_0);
}
