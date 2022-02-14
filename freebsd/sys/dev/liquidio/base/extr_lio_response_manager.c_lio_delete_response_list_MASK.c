
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tq; int work; } ;
struct octeon_device {TYPE_1__ dma_comp_tq; } ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct octeon_device *VAR_0)
{

 if (VAR_0->dma_comp_tq.tq != ((void*)0)) {
  while (FUNC_0(VAR_0->dma_comp_tq.tq,
      &VAR_0->dma_comp_tq.work, ((void*)0)))
   FUNC_1(VAR_0->dma_comp_tq.tq,
      &VAR_0->dma_comp_tq.work);
  FUNC_2(VAR_0->dma_comp_tq.tq);
  VAR_0->dma_comp_tq.tq = ((void*)0);
 }
}
