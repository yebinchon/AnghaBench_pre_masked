
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_userspace_memory_region {scalar_t__ slot; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm*,struct kvm_userspace_memory_region*,int) ;

int FUNC_1(struct kvm *VAR_2,
       struct
       kvm_userspace_memory_region *VAR_3,
       int VAR_4)
{
 if (VAR_3->slot >= VAR_1)
  return -VAR_0;
 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
