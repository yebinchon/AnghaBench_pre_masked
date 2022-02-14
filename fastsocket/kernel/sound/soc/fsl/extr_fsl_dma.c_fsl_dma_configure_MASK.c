
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_info {int * dma_irq; int * dma_channel; int ssi_srx_phys; int ssi_stx_phys; } ;
struct TYPE_2__ {scalar_t__* assigned; int * irq; int * dma_channel; int ssi_srx_phys; int ssi_stx_phys; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0(struct fsl_dma_info *VAR_1)
{
 static int VAR_2;


 if (VAR_2)
  return 0;

 VAR_0.ssi_stx_phys = VAR_1->ssi_stx_phys;
 VAR_0.ssi_srx_phys = VAR_1->ssi_srx_phys;
 VAR_0.dma_channel[0] = VAR_1->dma_channel[0];
 VAR_0.dma_channel[1] = VAR_1->dma_channel[1];
 VAR_0.irq[0] = VAR_1->dma_irq[0];
 VAR_0.irq[1] = VAR_1->dma_irq[1];
 VAR_0.assigned[0] = 0;
 VAR_0.assigned[1] = 0;

 VAR_2 = 1;
 return 1;
}
