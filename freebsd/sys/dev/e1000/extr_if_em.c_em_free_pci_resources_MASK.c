
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_rx_queue {int que_irq; } ;
struct adapter {scalar_t__ intr_type; int rx_num_queues; int * ioport; int * flash; int * memory; int irq; struct em_rx_queue* rx_queues; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_3)
{
 struct adapter *VAR_4 = FUNC_2(VAR_3);
 struct em_rx_queue *VAR_5 = VAR_4->rx_queues;
 device_t VAR_6 = FUNC_1(VAR_3);


 if (VAR_4->intr_type == VAR_0)
  FUNC_3(VAR_3, &VAR_4->irq);

 for (int VAR_7 = 0; VAR_7 < VAR_4->rx_num_queues; VAR_7++, VAR_5++) {
  FUNC_3(VAR_3, &VAR_5->que_irq);
 }

 if (VAR_4->memory != ((void*)0)) {
  FUNC_0(VAR_6, VAR_2,
      FUNC_4(VAR_4->memory), VAR_4->memory);
  VAR_4->memory = ((void*)0);
 }

 if (VAR_4->flash != ((void*)0)) {
  FUNC_0(VAR_6, VAR_2,
      FUNC_4(VAR_4->flash), VAR_4->flash);
  VAR_4->flash = ((void*)0);
 }

 if (VAR_4->ioport != ((void*)0)) {
  FUNC_0(VAR_6, VAR_1,
      FUNC_4(VAR_4->ioport), VAR_4->ioport);
  VAR_4->ioport = ((void*)0);
 }
}
