
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {struct iommu_domain* iommu_domain; } ;
struct kvm {TYPE_1__ arch; } ;
struct iommu_domain {int dummy; } ;
typedef int pfn_t ;
typedef int gfn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iommu_domain*,int ) ;
 int FUNC_2 (struct iommu_domain*,int ,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_2,
    gfn_t VAR_3, unsigned long VAR_4)
{
 gfn_t VAR_5 = VAR_3;
 pfn_t VAR_6;
 struct iommu_domain *VAR_7 = VAR_2->arch.iommu_domain;
 unsigned long VAR_8;
 u64 VAR_9;


 if (!VAR_7)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_9 = FUNC_1(VAR_7, FUNC_0(VAR_5));
  VAR_6 = VAR_9 >> VAR_0;
  FUNC_3(VAR_6);
  VAR_5++;
 }

 FUNC_2(VAR_7, FUNC_0(VAR_3), VAR_1 * VAR_4);
}
