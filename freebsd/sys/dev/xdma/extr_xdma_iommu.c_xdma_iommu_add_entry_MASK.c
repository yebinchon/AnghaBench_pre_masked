
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdma_iommu {int vmem; } ;
struct TYPE_3__ {struct xdma_iommu xio; } ;
typedef TYPE_1__ xdma_channel_t ;
typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int,int*) ;
 int FUNC_3 (struct xdma_iommu*,int,int,int ,int ) ;

void
FUNC_4(xdma_channel_t *VAR_3, vm_offset_t *VAR_4,
    vm_paddr_t VAR_5, vm_size_t VAR_6, vm_prot_t VAR_7)
{
 struct xdma_iommu *VAR_8;
 vm_offset_t VAR_9;

 VAR_6 = FUNC_1(VAR_6, VAR_2);
 VAR_8 = &VAR_3->xio;

 if (FUNC_2(VAR_8->vmem, VAR_6,
     VAR_0 | VAR_1, &VAR_9)) {
  FUNC_0("Could not allocate virtual address.\n");
 }

 VAR_9 |= VAR_5 & (VAR_2 - 1);

 if (VAR_4)
  *VAR_4 = VAR_9;

 FUNC_3(VAR_8, VAR_9, VAR_5, VAR_6, VAR_7);
}
