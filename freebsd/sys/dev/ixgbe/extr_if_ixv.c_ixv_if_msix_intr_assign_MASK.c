
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int me; } ;
struct ix_tx_queue {int msix; TYPE_2__ txr; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_3__ mac; } ;
struct TYPE_5__ {int me; } ;
struct ix_rx_queue {int num_rx_queues; int msix; int num_tx_queues; int vector; int que_irq; struct ix_rx_queue* rx_queues; int irq; TYPE_4__ hw; struct ix_tx_queue* tx_queues; TYPE_1__ rxr; } ;
struct adapter {int num_rx_queues; int msix; int num_tx_queues; int vector; int que_irq; struct adapter* rx_queues; int irq; TYPE_4__ hw; struct ix_tx_queue* tx_queues; TYPE_1__ rxr; } ;
typedef int if_ctx_t ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 struct ix_rx_queue* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ,int ,struct ix_rx_queue*,int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,struct ix_tx_queue*,int ,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,int,int) ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_10(if_ctx_t VAR_9, int VAR_10)
{
 struct adapter *VAR_11 = FUNC_2(VAR_9);
 device_t VAR_12 = FUNC_1(VAR_9);
 struct ix_rx_queue *VAR_13 = VAR_11->rx_queues;
 struct ix_tx_queue *VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0;
 char VAR_18[16];

 for (int VAR_19 = 0; VAR_19 < VAR_11->num_rx_queues; VAR_19++, VAR_17++, VAR_13++) {
  VAR_16 = VAR_17 + 1;

  FUNC_9(VAR_18, sizeof(VAR_18), "rxq%d", VAR_19);
  VAR_15 = FUNC_3(VAR_9, &VAR_13->que_irq, VAR_16,
      VAR_1, VAR_8, VAR_13, VAR_13->rxr.me, VAR_18);

  if (VAR_15) {
   FUNC_0(FUNC_1(VAR_9),
       "Failed to allocate que int %d err: %d", VAR_19, VAR_15);
   VAR_11->num_rx_queues = VAR_19 + 1;
   goto fail;
  }

  VAR_13->msix = VAR_17;
 }

 for (int VAR_20 = 0; VAR_20 < VAR_11->num_tx_queues; VAR_20++) {
  FUNC_9(VAR_18, sizeof(VAR_18), "txq%d", VAR_20);
  VAR_14 = &VAR_11->tx_queues[VAR_20];
  VAR_14->msix = VAR_20 % VAR_11->num_rx_queues;
  FUNC_5(VAR_9,
      &VAR_11->rx_queues[VAR_14->msix].que_irq,
      VAR_2, VAR_14, VAR_14->txr.me, VAR_18);
 }
 VAR_16 = VAR_17 + 1;
 VAR_15 = FUNC_3(VAR_9, &VAR_11->irq, VAR_16,
     VAR_0, VAR_7, VAR_11, 0, "aq");
 if (VAR_15) {
  FUNC_0(FUNC_1(VAR_9),
      "Failed to register admin handler");
  return (VAR_15);
 }

 VAR_11->vector = VAR_17;







 if (VAR_11->hw.mac.type == VAR_6) {
  int VAR_21;
  FUNC_6(VAR_12, VAR_5, &VAR_16);
  VAR_16 += VAR_4;
  VAR_21 = FUNC_7(VAR_12, VAR_16, 2);
  VAR_21 |= VAR_3;
  FUNC_8(VAR_12, VAR_16, VAR_21, 2);
 }

 return (0);

fail:
 FUNC_4(VAR_9, &VAR_11->irq);
 VAR_13 = VAR_11->rx_queues;
 for (int VAR_22 = 0; VAR_22 < VAR_11->num_rx_queues; VAR_22++, VAR_13++)
  FUNC_4(VAR_9, &VAR_13->que_irq);

 return (VAR_15);
}
