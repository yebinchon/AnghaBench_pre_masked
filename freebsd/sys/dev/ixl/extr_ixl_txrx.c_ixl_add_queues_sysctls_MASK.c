
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {int itr; int tx_bytes; int tx_packets; int mss_too_small; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rx_ring {int itr; int desc_errs; int rx_bytes; int rx_packets; } ;
struct ixl_vsi {int num_rx_queues; int num_tx_queues; struct ixl_tx_queue* tx_queues; struct ixl_rx_queue* rx_queues; struct sysctl_oid* vsi_node; } ;
struct ixl_tx_queue {int tso; struct tx_ring txr; } ;
struct ixl_rx_queue {int irqs; struct rx_ring rxr; } ;
typedef int queue_namebuf ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (char*,int) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,char*,int) ;

void
FUNC_7(device_t VAR_3, struct ixl_vsi *VAR_4)
{
 struct sysctl_ctx_list *VAR_5 = FUNC_5(VAR_3);
 struct sysctl_oid_list *VAR_6, *VAR_7;
 struct sysctl_oid *VAR_8;
 char VAR_9[32];

 struct ixl_rx_queue *VAR_10;
 struct ixl_tx_queue *VAR_11;
 struct tx_ring *VAR_12;
 struct rx_ring *VAR_13;

 VAR_6 = FUNC_3(VAR_4->vsi_node);


 for (int VAR_14 = 0; VAR_14 < VAR_4->num_rx_queues; VAR_14++) {
  FUNC_4(VAR_9, sizeof(VAR_9));
  FUNC_6(VAR_9, VAR_2, "rxq%02d", VAR_14);
  VAR_8 = FUNC_0(VAR_5, VAR_6,
      VAR_1, VAR_9, VAR_0, ((void*)0), "RX Queue #");
  VAR_7 = FUNC_3(VAR_8);

  VAR_10 = &(VAR_4->rx_queues[VAR_14]);
  VAR_13 = &(VAR_10->rxr);

  FUNC_2(VAR_5, VAR_7, VAR_1, "irqs",
    VAR_0, &(VAR_10->irqs),
    "irqs on this queue (both Tx and Rx)");

  FUNC_2(VAR_5, VAR_7, VAR_1, "packets",
    VAR_0, &(VAR_13->rx_packets),
    "Queue Packets Received");
  FUNC_2(VAR_5, VAR_7, VAR_1, "bytes",
    VAR_0, &(VAR_13->rx_bytes),
    "Queue Bytes Received");
  FUNC_2(VAR_5, VAR_7, VAR_1, "desc_err",
    VAR_0, &(VAR_13->desc_errs),
    "Queue Rx Descriptor Errors");
  FUNC_1(VAR_5, VAR_7, VAR_1, "itr",
    VAR_0, &(VAR_13->itr), 0,
    "Queue Rx ITR Interval");
 }
 for (int VAR_15 = 0; VAR_15 < VAR_4->num_tx_queues; VAR_15++) {
  FUNC_4(VAR_9, sizeof(VAR_9));
  FUNC_6(VAR_9, VAR_2, "txq%02d", VAR_15);
  VAR_8 = FUNC_0(VAR_5, VAR_6,
      VAR_1, VAR_9, VAR_0, ((void*)0), "TX Queue #");
  VAR_7 = FUNC_3(VAR_8);

  VAR_11 = &(VAR_4->tx_queues[VAR_15]);
  VAR_12 = &(VAR_11->txr);

  FUNC_2(VAR_5, VAR_7, VAR_1, "tso",
    VAR_0, &(VAR_11->tso),
    "TSO");
  FUNC_2(VAR_5, VAR_7, VAR_1, "mss_too_small",
    VAR_0, &(VAR_12->mss_too_small),
    "TSO sends with an MSS less than 64");
  FUNC_2(VAR_5, VAR_7, VAR_1, "packets",
    VAR_0, &(VAR_12->tx_packets),
    "Queue Packets Transmitted");
  FUNC_2(VAR_5, VAR_7, VAR_1, "bytes",
    VAR_0, &(VAR_12->tx_bytes),
    "Queue Bytes Transmitted");
  FUNC_1(VAR_5, VAR_7, VAR_1, "itr",
    VAR_0, &(VAR_12->itr), 0,
    "Queue Tx ITR Interval");
 }
}
