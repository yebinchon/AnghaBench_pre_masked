
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahci_controller {int numirqs; int ch_mtx; int sc_iomem; int dma_tag; TYPE_1__* irqs; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ r_irq; int r_irq_rid; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 struct ahci_controller* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(device_t VAR_1)
{
 struct ahci_controller *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;


 FUNC_4(VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_2->numirqs; VAR_3++) {
  if (VAR_2->irqs[VAR_3].r_irq) {
   FUNC_3(VAR_1, VAR_2->irqs[VAR_3].r_irq,
       VAR_2->irqs[VAR_3].handle);
   FUNC_2(VAR_1, VAR_0,
       VAR_2->irqs[VAR_3].r_irq_rid, VAR_2->irqs[VAR_3].r_irq);
  }
 }
 FUNC_1(VAR_2->dma_tag);

 FUNC_7(&VAR_2->sc_iomem);
 FUNC_0(VAR_1);
 FUNC_6(&VAR_2->ch_mtx);
 return (0);
}
