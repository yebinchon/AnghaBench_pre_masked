
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_device_ops {int dummy; } ;
struct kvm_io_device {struct kvm_io_device_ops const* ops; } ;



__attribute__((used)) static inline void FUNC_0(struct kvm_io_device *VAR_0,
         const struct kvm_io_device_ops *VAR_1)
{
 VAR_0->ops = VAR_1;
}
