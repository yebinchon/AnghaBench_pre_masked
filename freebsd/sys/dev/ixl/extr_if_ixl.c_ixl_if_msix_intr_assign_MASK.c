
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ixl_vsi {int num_rx_queues; struct ixl_tx_queue* rx_queues; int irq; TYPE_3__* shared; struct ixl_tx_queue* tx_queues; } ;
struct TYPE_5__ {int me; } ;
struct TYPE_4__ {int me; } ;
struct ixl_tx_queue {int msix; int que_irq; TYPE_2__ txr; TYPE_1__ rxr; struct ixl_vsi vsi; } ;
struct ixl_rx_queue {int msix; int que_irq; TYPE_2__ txr; TYPE_1__ rxr; struct ixl_vsi vsi; } ;
struct ixl_pf {int msix; int que_irq; TYPE_2__ txr; TYPE_1__ rxr; struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
typedef int buf ;
struct TYPE_6__ {int isc_nrxqsets; int isc_ntxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 struct ixl_tx_queue* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int,int ,int ,struct ixl_tx_queue*,int ,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ,struct ixl_tx_queue*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_9(if_ctx_t VAR_6, int VAR_7)
{
 struct ixl_pf *VAR_8 = FUNC_4(VAR_6);
 struct ixl_vsi *VAR_9 = &VAR_8->vsi;
 struct ixl_rx_queue *VAR_10 = VAR_9->rx_queues;
 struct ixl_tx_queue *VAR_11 = VAR_9->tx_queues;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 char VAR_16[16];

 FUNC_0(VAR_9->shared->isc_nrxqsets > 0);
 FUNC_0(VAR_9->shared->isc_ntxqsets > 0);


 VAR_14 = VAR_15 + 1;
 VAR_12 = FUNC_5(VAR_6, &VAR_9->irq, VAR_14, VAR_0,
     VAR_4, VAR_8, 0, "aq");
 if (VAR_12) {
  FUNC_6(VAR_6, &VAR_9->irq);
  FUNC_2(FUNC_3(VAR_6),
      "Failed to register Admin Que handler");
  return (VAR_12);
 }

 FUNC_7(VAR_6, ((void*)0), VAR_1, VAR_8, 0, "iov");


 for (VAR_13 = 0, VAR_15 = 1; VAR_13 < VAR_9->shared->isc_nrxqsets; VAR_13++, VAR_15++, VAR_10++) {
  VAR_14 = VAR_15 + 1;

  FUNC_8(VAR_16, sizeof(VAR_16), "rxq%d", VAR_13);
  VAR_12 = FUNC_5(VAR_6, &VAR_10->que_irq, VAR_14,
      VAR_2, VAR_5, VAR_10, VAR_10->rxr.me, VAR_16);


  if (VAR_12) {
   FUNC_2(FUNC_3(VAR_6),
       "Failed to allocate queue RX int vector %d, err: %d\n", VAR_13, VAR_12);
   VAR_9->num_rx_queues = VAR_13 + 1;
   goto fail;
  }
  VAR_10->msix = VAR_15;
 }

 FUNC_1(VAR_16, sizeof(VAR_16));

 for (VAR_13 = 0; VAR_13 < VAR_9->shared->isc_ntxqsets; VAR_13++, VAR_11++) {
  FUNC_8(VAR_16, sizeof(VAR_16), "txq%d", VAR_13);
  FUNC_7(VAR_6,
      &VAR_9->rx_queues[VAR_13 % VAR_9->shared->isc_nrxqsets].que_irq,
      VAR_3, VAR_11, VAR_11->txr.me, VAR_16);




  VAR_11->msix = (VAR_13 % VAR_9->shared->isc_nrxqsets) + 1;
 }

 return (0);
fail:
 FUNC_6(VAR_6, &VAR_9->irq);
 VAR_10 = VAR_9->rx_queues;
 for (int VAR_17 = 0; VAR_17 < VAR_9->num_rx_queues; VAR_17++, VAR_10++)
  FUNC_6(VAR_6, &VAR_10->que_irq);
 return (VAR_12);
}
