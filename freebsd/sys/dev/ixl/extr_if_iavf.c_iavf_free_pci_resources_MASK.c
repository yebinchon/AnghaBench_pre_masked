
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int num_rx_queues; int ctx; int irq; struct ixl_rx_queue* rx_queues; } ;
struct ixl_rx_queue {int que_irq; } ;
struct iavf_sc {int * pci_mem; int dev; struct ixl_vsi vsi; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct iavf_sc *VAR_1)
{
 struct ixl_vsi *VAR_2 = &VAR_1->vsi;
 struct ixl_rx_queue *VAR_3 = VAR_2->rx_queues;
 device_t VAR_4 = VAR_1->dev;


 if (VAR_3 == ((void*)0))
  goto early;


 FUNC_1(VAR_2->ctx, &VAR_2->irq);

 for (int VAR_5 = 0; VAR_5 < VAR_2->num_rx_queues; VAR_5++, VAR_3++)
  FUNC_1(VAR_2->ctx, &VAR_3->que_irq);

early:
 if (VAR_1->pci_mem != ((void*)0))
  FUNC_0(VAR_4, VAR_0,
      FUNC_2(VAR_1->pci_mem), VAR_1->pci_mem);
}
