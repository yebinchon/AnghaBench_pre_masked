
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct em_tx_queue {int msix; int eims; int me; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct em_rx_queue {int rx_num_queues; int msix; int eims; int ims; int ivars; int tx_num_queues; int linkvec; int que_irq; struct em_rx_queue* rx_queues; int irq; TYPE_2__ hw; struct em_tx_queue* tx_queues; int me; } ;
struct adapter {int rx_num_queues; int msix; int eims; int ims; int ivars; int tx_num_queues; int linkvec; int que_irq; struct adapter* rx_queues; int irq; TYPE_2__ hw; struct em_tx_queue* tx_queues; int me; } ;
typedef int if_ctx_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 struct em_rx_queue* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ,int ,struct em_rx_queue*,int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,struct em_tx_queue*,int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_9, int VAR_10)
{
 struct adapter *VAR_11 = FUNC_2(VAR_9);
 struct em_rx_queue *VAR_12 = VAR_11->rx_queues;
 struct em_tx_queue *VAR_13 = VAR_11->tx_queues;
 int VAR_14, VAR_15, VAR_16, VAR_17 = 0, VAR_18;
 char VAR_19[16];


 for (VAR_16 = 0; VAR_16 < VAR_11->rx_num_queues; VAR_16++, VAR_12++, VAR_17++) {
  VAR_15 = VAR_17 + 1;
  FUNC_6(VAR_19, sizeof(VAR_19), "rxq%d", VAR_16);
  VAR_14 = FUNC_3(VAR_9, &VAR_12->que_irq, VAR_15, VAR_2, VAR_7, VAR_12, VAR_12->me, VAR_19);
  if (VAR_14) {
   FUNC_0(FUNC_1(VAR_9), "Failed to allocate que int %d err: %d", VAR_16, VAR_14);
   VAR_11->rx_num_queues = VAR_16 + 1;
   goto fail;
  }

  VAR_12->msix = VAR_17;







  if (VAR_11->hw.mac.type == VAR_4) {
   VAR_12->eims = 1 << (20 + VAR_16);
   VAR_11->ims |= VAR_12->eims;
   VAR_11->ivars |= (8 | VAR_12->msix) << (VAR_16 * 4);
  } else if (VAR_11->hw.mac.type == VAR_5)
   VAR_12->eims = VAR_0 << VAR_17;
  else
   VAR_12->eims = 1 << VAR_17;
 }
 VAR_18 = VAR_17;

 VAR_17 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_11->tx_num_queues; VAR_16++, VAR_13++, VAR_17++) {
  FUNC_6(VAR_19, sizeof(VAR_19), "txq%d", VAR_16);
  VAR_13 = &VAR_11->tx_queues[VAR_16];
  FUNC_5(VAR_9,
      &VAR_11->rx_queues[VAR_16 % VAR_11->rx_num_queues].que_irq,
      VAR_3, VAR_13, VAR_13->me, VAR_19);

  VAR_13->msix = (VAR_17 % VAR_11->rx_num_queues);







  if (VAR_11->hw.mac.type == VAR_4) {
   VAR_13->eims = 1 << (22 + VAR_16);
   VAR_11->ims |= VAR_13->eims;
   VAR_11->ivars |= (8 | VAR_13->msix) << (8 + (VAR_16 * 4));
  } else if (VAR_11->hw.mac.type == VAR_5) {
   VAR_13->eims = VAR_0 << VAR_16;
  } else {
   VAR_13->eims = 1 << VAR_16;
  }
 }


 VAR_15 = VAR_18 + 1;
 VAR_14 = FUNC_3(VAR_9, &VAR_11->irq, VAR_15, VAR_1, VAR_6, VAR_11, 0, "aq");

 if (VAR_14) {
  FUNC_0(FUNC_1(VAR_9), "Failed to register admin handler");
  goto fail;
 }
 VAR_11->linkvec = VAR_18;
 if (VAR_11->hw.mac.type < VAR_8) {
  VAR_11->ivars |= (8 | VAR_18) << 16;
  VAR_11->ivars |= 0x80000000;
 }
 return (0);
fail:
 FUNC_4(VAR_9, &VAR_11->irq);
 VAR_12 = VAR_11->rx_queues;
 for (int VAR_20 = 0; VAR_20 < VAR_11->rx_num_queues; VAR_20++, VAR_12++)
  FUNC_4(VAR_9, &VAR_12->que_irq);
 return (VAR_14);
}
