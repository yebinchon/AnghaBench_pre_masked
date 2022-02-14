
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct vm {int * iommu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct vm*,int,int,int) ;
 scalar_t__ FUNC_3 (struct vm*) ;
 int FUNC_4 (struct vm*) ;
 int FUNC_5 (struct vm*) ;

int
FUNC_6(struct vm *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 vm_paddr_t VAR_6;


 if (FUNC_3(VAR_1) == 0) {
  FUNC_0(VAR_1->iommu == ((void*)0),
      ("vm_assign_pptdev: iommu must be NULL"));
  VAR_6 = FUNC_5(VAR_1);
  VAR_1->iommu = FUNC_1(VAR_6);
  if (VAR_1->iommu == ((void*)0))
   return (VAR_0);
  FUNC_4(VAR_1);
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 return (VAR_5);
}
