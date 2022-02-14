
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct iommu_domain* iommu_domain; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (struct iommu_domain*) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct kvm *VAR_0)
{
 struct iommu_domain *VAR_1 = VAR_0->arch.iommu_domain;


 if (!VAR_1)
  return 0;

 FUNC_2(&VAR_0->slots_lock);
 FUNC_1(VAR_0);
 VAR_0->arch.iommu_domain = ((void*)0);
 FUNC_3(&VAR_0->slots_lock);

 FUNC_0(VAR_1);
 return 0;
}
