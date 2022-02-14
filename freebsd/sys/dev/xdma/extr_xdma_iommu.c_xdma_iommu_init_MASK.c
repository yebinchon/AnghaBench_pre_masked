
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_iommu {int dev; int * vmem; int p; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int mem_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,void*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct xdma_iommu*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ,int ,int ,int ,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;

int
FUNC_9(struct xdma_iommu *VAR_4)
{





 FUNC_5(&VAR_4->p);
 VAR_4->vmem = FUNC_6("xDMA vmem", 0, 0, VAR_3,
     VAR_3, VAR_1 | VAR_2);
 if (VAR_4->vmem == ((void*)0))
  return (VAR_0);
 FUNC_3(VAR_4->dev, VAR_4);

 return (0);
}
