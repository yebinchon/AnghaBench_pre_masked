
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct xdma_iommu {int p; } ;
struct beri_iommu_softc {int dummy; } ;
typedef int pt_entry_t ;
typedef int * pmap_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct beri_iommu_softc*,int ) ;
 struct beri_iommu_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3, struct xdma_iommu *VAR_4, vm_offset_t VAR_5,
    vm_paddr_t VAR_6)
{
 struct beri_iommu_softc *VAR_7;
 pt_entry_t VAR_8, VAR_9;
 pt_entry_t *VAR_10;
 pmap_t VAR_11;

 VAR_7 = FUNC_2(VAR_3);
 VAR_11 = &VAR_4->p;

 VAR_10 = FUNC_5(VAR_11, VAR_5);
 if (VAR_10 == ((void*)0))
  FUNC_4("pte is NULL\n");


 VAR_8 = *VAR_10;
 VAR_9 = VAR_8 & ~VAR_0;
 VAR_9 |= FUNC_0(VAR_2);
 *VAR_10 = VAR_9;


 FUNC_3((vm_offset_t)VAR_10, sizeof(vm_offset_t));


 if (FUNC_6(&VAR_8, VAR_1) && VAR_8 != VAR_9)
  FUNC_1(VAR_7, VAR_5);

 return (0);
}
