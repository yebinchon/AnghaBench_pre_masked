
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int num_rx_queues; int ctx; int irq; struct ixl_rx_queue* rx_queues; } ;
struct ixl_rx_queue {int que_irq; } ;
struct ixl_pf {int * pci_mem; struct ixl_vsi vsi; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct ixl_pf *VAR_1)
{
 struct ixl_vsi *VAR_2 = &VAR_1->vsi;
 device_t VAR_3 = FUNC_1(VAR_2->ctx);
 struct ixl_rx_queue *VAR_4 = VAR_2->rx_queues;


 if (VAR_4 == ((void*)0))
  goto early;




 FUNC_2(VAR_2->ctx, &VAR_2->irq);

 for (int VAR_5 = 0; VAR_5 < VAR_2->num_rx_queues; VAR_5++, VAR_4++)
  FUNC_2(VAR_2->ctx, &VAR_4->que_irq);
early:
 if (VAR_1->pci_mem != ((void*)0))
  FUNC_0(VAR_3, VAR_0,
      FUNC_3(VAR_1->pci_mem), VAR_1->pci_mem);
}
