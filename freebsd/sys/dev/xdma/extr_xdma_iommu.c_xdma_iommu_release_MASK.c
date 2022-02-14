
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_iommu {int dev; int vmem; int p; } ;


 int FUNC_0 (int ,struct xdma_iommu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct xdma_iommu *VAR_0)
{

 FUNC_1(&VAR_0->p);

 FUNC_2(VAR_0->vmem);

 FUNC_0(VAR_0->dev, VAR_0);

 return (0);
}
