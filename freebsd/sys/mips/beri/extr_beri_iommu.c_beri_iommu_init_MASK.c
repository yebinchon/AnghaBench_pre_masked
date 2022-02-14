
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_segtab; } ;
struct xdma_iommu {TYPE_1__ p; } ;
struct beri_iommu_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct beri_iommu_softc*,uintptr_t) ;
 struct beri_iommu_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct xdma_iommu *VAR_1)
{
 struct beri_iommu_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, (uintptr_t)VAR_1->p.pm_segtab);

 return (0);
}
