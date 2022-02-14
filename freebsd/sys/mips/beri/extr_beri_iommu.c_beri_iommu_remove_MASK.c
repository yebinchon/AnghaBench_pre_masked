
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct xdma_iommu {int dummy; } ;
struct beri_iommu_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct beri_iommu_softc*,int ) ;
 struct beri_iommu_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct xdma_iommu *VAR_1, vm_offset_t VAR_2)
{
 struct beri_iommu_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_2);

 return (0);
}
