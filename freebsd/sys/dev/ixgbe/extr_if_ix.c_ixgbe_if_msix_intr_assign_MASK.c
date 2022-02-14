
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int me; } ;
struct ix_tx_queue {int msix; TYPE_2__ txr; } ;
struct TYPE_3__ {int me; } ;
struct ix_rx_queue {int num_rx_queues; int msix; int feat_en; int num_tx_queues; int vector; int que_irq; struct ix_rx_queue* rx_queues; int irq; struct ix_tx_queue* tx_queues; TYPE_1__ rxr; } ;
struct adapter {int num_rx_queues; int msix; int feat_en; int num_tx_queues; int vector; int que_irq; struct adapter* rx_queues; int irq; struct ix_tx_queue* tx_queues; TYPE_1__ rxr; } ;
typedef int if_ctx_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 struct ix_rx_queue* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ,int ,struct ix_rx_queue*,int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,struct ix_tx_queue*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_9(if_ctx_t VAR_6, int VAR_7)
{
 struct adapter *VAR_8 = FUNC_2(VAR_6);
 struct ix_rx_queue *VAR_9 = VAR_8->rx_queues;
 struct ix_tx_queue *VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14 = 0;
 char VAR_15[16];


 VAR_12 = VAR_13 + 1;
 for (int VAR_16 = 0; VAR_16 < VAR_8->num_rx_queues; VAR_16++, VAR_13++, VAR_9++) {
  VAR_12 = VAR_13 + 1;

  FUNC_8(VAR_15, sizeof(VAR_15), "rxq%d", VAR_16);
  VAR_11 = FUNC_3(VAR_6, &VAR_9->que_irq, VAR_12,
      VAR_1, VAR_5, VAR_9, VAR_9->rxr.me, VAR_15);

  if (VAR_11) {
   FUNC_0(FUNC_1(VAR_6),
       "Failed to allocate que int %d err: %d", VAR_16, VAR_11);
   VAR_8->num_rx_queues = VAR_16 + 1;
   goto fail;
  }

  VAR_9->msix = VAR_13;
  if (VAR_8->feat_en & VAR_3) {





   VAR_14 = FUNC_6(VAR_16 % FUNC_7());
  } else {







   if (VAR_8->num_rx_queues > 1)
    VAR_14 = VAR_16;
  }

 }
 for (int VAR_17 = 0; VAR_17 < VAR_8->num_tx_queues; VAR_17++) {
  FUNC_8(VAR_15, sizeof(VAR_15), "txq%d", VAR_17);
  VAR_10 = &VAR_8->tx_queues[VAR_17];
  VAR_10->msix = VAR_17 % VAR_8->num_rx_queues;
  FUNC_5(VAR_6,
      &VAR_8->rx_queues[VAR_10->msix].que_irq,
      VAR_2, VAR_10, VAR_10->txr.me, VAR_15);
 }
 VAR_12 = VAR_13 + 1;
 VAR_11 = FUNC_3(VAR_6, &VAR_8->irq, VAR_12,
     VAR_0, VAR_4, VAR_8, 0, "aq");
 if (VAR_11) {
  FUNC_0(FUNC_1(VAR_6),
      "Failed to register admin handler");
  return (VAR_11);
 }

 VAR_8->vector = VAR_13;

 return (0);
fail:
 FUNC_4(VAR_6, &VAR_8->irq);
 VAR_9 = VAR_8->rx_queues;
 for (int VAR_18 = 0; VAR_18 < VAR_8->num_rx_queues; VAR_18++, VAR_9++)
  FUNC_4(VAR_6, &VAR_9->que_irq);

 return (VAR_11);
}
