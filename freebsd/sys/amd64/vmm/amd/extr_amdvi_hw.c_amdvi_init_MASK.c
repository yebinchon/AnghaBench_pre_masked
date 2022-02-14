
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(void)
{
 if (!VAR_3) {
  return (VAR_1);
 }
 if (!VAR_2 && VAR_3) {
  FUNC_0("bhyve: Found %d AMD-Vi/IOMMU device(s), "
       "use hw.vmm.amdvi.enable=1 to enable pass-through.\n",
      VAR_3);
  return (VAR_0);
 }
 return (0);
}
