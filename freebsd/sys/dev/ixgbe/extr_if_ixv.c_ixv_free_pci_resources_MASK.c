
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix_rx_queue {int que_irq; } ;
struct adapter {scalar_t__ intr_type; int num_rx_queues; int * pci_mem; int irq; struct ix_rx_queue* rx_queues; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_2)
{
 struct adapter *VAR_3 = FUNC_2(VAR_2);
 struct ix_rx_queue *VAR_4 = VAR_3->rx_queues;
 device_t VAR_5 = FUNC_1(VAR_2);


 if (VAR_3->intr_type == VAR_0)
  FUNC_3(VAR_2, &VAR_3->irq);

 if (VAR_4 != ((void*)0)) {
  for (int VAR_6 = 0; VAR_6 < VAR_3->num_rx_queues; VAR_6++, VAR_4++) {
   FUNC_3(VAR_2, &VAR_4->que_irq);
  }
 }

 if (VAR_3->pci_mem != ((void*)0))
  FUNC_0(VAR_5, VAR_1,
      FUNC_4(VAR_3->pci_mem), VAR_3->pci_mem);
}
