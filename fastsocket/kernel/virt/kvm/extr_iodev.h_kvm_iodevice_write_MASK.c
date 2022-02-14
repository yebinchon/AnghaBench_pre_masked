
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_io_device {TYPE_1__* ops; } ;
typedef int gpa_t ;
struct TYPE_2__ {int (* write ) (struct kvm_io_device*,int ,int,void const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_io_device*,int ,int,void const*) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_io_device *VAR_1,
         gpa_t VAR_2, int VAR_3, const void *VAR_4)
{
 return VAR_1->ops->write ? VAR_1->ops->write(VAR_1, VAR_2, VAR_3, VAR_4) : -VAR_0;
}
