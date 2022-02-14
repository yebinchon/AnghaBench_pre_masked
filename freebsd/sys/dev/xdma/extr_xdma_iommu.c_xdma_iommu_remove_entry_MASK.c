
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdma_iommu {int vmem; int dev; int p; } ;
struct TYPE_3__ {struct xdma_iommu xio; } ;
typedef TYPE_1__ xdma_channel_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct xdma_iommu*,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ,int,int) ;

void
FUNC_3(xdma_channel_t *VAR_1, vm_offset_t VAR_2)
{
 struct xdma_iommu *VAR_3;

 VAR_3 = &VAR_1->xio;

 VAR_2 &= ~(VAR_0 - 1);
 FUNC_1(&VAR_3->p, VAR_2, VAR_2 + VAR_0);

 FUNC_0(VAR_3->dev, VAR_3, VAR_2);

 FUNC_2(VAR_3->vmem, VAR_2, VAR_0);
}
