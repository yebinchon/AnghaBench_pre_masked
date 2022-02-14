
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_io_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* destructor ) (struct kvm_io_device*) ;} ;


 int FUNC_0 (struct kvm_io_device*) ;

__attribute__((used)) static inline void FUNC_1(struct kvm_io_device *VAR_0)
{
 if (VAR_0->ops->destructor)
  VAR_0->ops->destructor(VAR_0);
}
