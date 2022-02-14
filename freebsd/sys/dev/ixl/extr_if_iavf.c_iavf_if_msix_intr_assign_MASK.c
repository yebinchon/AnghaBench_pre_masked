
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ixl_vsi {int num_rx_queues; struct ixl_rx_queue* rx_queues; int irq; TYPE_3__* shared; struct ixl_tx_queue* tx_queues; } ;
struct TYPE_5__ {int me; } ;
struct ixl_tx_queue {int msix; TYPE_2__ txr; } ;
struct TYPE_4__ {int me; } ;
struct ixl_rx_queue {int msix; int que_irq; TYPE_1__ rxr; struct ixl_vsi vsi; } ;
struct iavf_sc {int msix; int que_irq; TYPE_1__ rxr; struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
typedef int buf ;
struct TYPE_6__ {int isc_nrxqsets; int isc_ntxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct ixl_rx_queue* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int,int ,int ,struct ixl_rx_queue*,int ,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ,struct ixl_tx_queue*,int ,char*) ;
 int FUNC_8 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_9(if_ctx_t VAR_5, int VAR_6)
{
 struct iavf_sc *VAR_7 = FUNC_4(VAR_5);
 struct ixl_vsi *VAR_8 = &VAR_7->vsi;
 struct ixl_rx_queue *VAR_9 = VAR_8->rx_queues;
 struct ixl_tx_queue *VAR_10 = VAR_8->tx_queues;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 char VAR_15[16];

 FUNC_0(VAR_8->shared->isc_nrxqsets > 0);
 FUNC_0(VAR_8->shared->isc_ntxqsets > 0);


 VAR_13 = VAR_14 + 1;
 VAR_11 = FUNC_5(VAR_5, &VAR_8->irq, VAR_13, VAR_0,
     VAR_3, VAR_7, 0, "aq");
 if (VAR_11) {
  FUNC_6(VAR_5, &VAR_8->irq);
  FUNC_2(FUNC_3(VAR_5),
      "Failed to register Admin Que handler");
  return (VAR_11);
 }


 for (VAR_12 = 0, VAR_14 = 1; VAR_12 < VAR_8->shared->isc_nrxqsets; VAR_12++, VAR_14++, VAR_9++) {
  VAR_13 = VAR_14 + 1;

  FUNC_8(VAR_15, sizeof(VAR_15), "rxq%d", VAR_12);
  VAR_11 = FUNC_5(VAR_5, &VAR_9->que_irq, VAR_13,
      VAR_1, VAR_4, VAR_9, VAR_9->rxr.me, VAR_15);


  if (VAR_11) {
   FUNC_2(FUNC_3(VAR_5),
       "Failed to allocate queue RX int vector %d, err: %d\n", VAR_12, VAR_11);
   VAR_8->num_rx_queues = VAR_12 + 1;
   goto fail;
  }
  VAR_9->msix = VAR_14;
 }

 FUNC_1(VAR_15, sizeof(VAR_15));

 for (VAR_12 = 0; VAR_12 < VAR_8->shared->isc_ntxqsets; VAR_12++, VAR_10++) {
  FUNC_8(VAR_15, sizeof(VAR_15), "txq%d", VAR_12);
  FUNC_7(VAR_5,
      &VAR_8->rx_queues[VAR_12 % VAR_8->shared->isc_nrxqsets].que_irq,
      VAR_2, VAR_10, VAR_10->txr.me, VAR_15);




  VAR_10->msix = (VAR_12 % VAR_8->shared->isc_nrxqsets) + 1;
 }

 return (0);
fail:
 FUNC_6(VAR_5, &VAR_8->irq);
 VAR_9 = VAR_8->rx_queues;
 for (int VAR_16 = 0; VAR_16 < VAR_8->num_rx_queues; VAR_16++, VAR_9++)
  FUNC_6(VAR_5, &VAR_9->que_irq);
 return (VAR_11);
}
