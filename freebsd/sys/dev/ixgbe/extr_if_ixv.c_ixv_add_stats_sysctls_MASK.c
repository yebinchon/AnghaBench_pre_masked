
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring {int total_packets; int tso_tx; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rx_ring {int rx_discarded; int rx_bytes; int rx_packets; } ;
struct ixgbevf_hw_stats {int vfgotc; int vfgptc; int vfmprc; int vfgorc; int vfgprc; } ;
struct ix_tx_queue {struct tx_ring txr; } ;
struct ix_rx_queue {int irqs; struct rx_ring rxr; } ;
struct TYPE_2__ {struct ixgbevf_hw_stats vf; } ;
struct adapter {int num_tx_queues; int num_rx_queues; int link_irq; int watchdog_events; TYPE_1__ stats; struct ix_rx_queue* rx_queues; struct ix_tx_queue* tx_queues; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct adapter *VAR_3)
{
 device_t VAR_4 = VAR_3->dev;
 struct ix_tx_queue *VAR_5 = VAR_3->tx_queues;
 struct ix_rx_queue *VAR_6 = VAR_3->rx_queues;
 struct sysctl_ctx_list *VAR_7 = FUNC_4(VAR_4);
 struct sysctl_oid *VAR_8 = FUNC_5(VAR_4);
 struct sysctl_oid_list *VAR_9 = FUNC_3(VAR_8);
 struct ixgbevf_hw_stats *VAR_10 = &VAR_3->stats.vf;
 struct sysctl_oid *VAR_11, *VAR_12;
 struct sysctl_oid_list *VAR_13, *VAR_14;


 char VAR_15[32];


 FUNC_1(VAR_7, VAR_9, VAR_1, "watchdog_events",
     VAR_0, &VAR_3->watchdog_events, "Watchdog timeouts");
 FUNC_1(VAR_7, VAR_9, VAR_1, "link_irq",
     VAR_0, &VAR_3->link_irq, "Link MSI-X IRQ Handled");

 for (int VAR_16 = 0; VAR_16 < VAR_3->num_tx_queues; VAR_16++, VAR_5++) {
  struct tx_ring *VAR_17 = &VAR_5->txr;
  FUNC_6(VAR_15, 32, "queue%d", VAR_16);
  VAR_12 = FUNC_0(VAR_7, VAR_9, VAR_1, VAR_15,
      VAR_0, ((void*)0), "Queue Name");
  VAR_14 = FUNC_3(VAR_12);

  FUNC_2(VAR_7, VAR_14, VAR_1, "tso_tx",
      VAR_0, &(VAR_17->tso_tx), "TSO Packets");
  FUNC_2(VAR_7, VAR_14, VAR_1, "tx_packets",
      VAR_0, &(VAR_17->total_packets), "TX Packets");
 }

 for (int VAR_18 = 0; VAR_18 < VAR_3->num_rx_queues; VAR_18++, VAR_6++) {
  struct rx_ring *VAR_19 = &VAR_6->rxr;
  FUNC_6(VAR_15, 32, "queue%d", VAR_18);
  VAR_12 = FUNC_0(VAR_7, VAR_9, VAR_1, VAR_15,
      VAR_0, ((void*)0), "Queue Name");
  VAR_14 = FUNC_3(VAR_12);

  FUNC_2(VAR_7, VAR_14, VAR_1, "irqs",
      VAR_0, &(VAR_6->irqs), "IRQs on queue");
  FUNC_2(VAR_7, VAR_14, VAR_1, "rx_packets",
      VAR_0, &(VAR_19->rx_packets), "RX packets");
  FUNC_2(VAR_7, VAR_14, VAR_1, "rx_bytes",
      VAR_0, &(VAR_19->rx_bytes), "RX bytes");
  FUNC_2(VAR_7, VAR_14, VAR_1, "rx_discarded",
      VAR_0, &(VAR_19->rx_discarded), "Discarded RX packets");
 }

 VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_1, "mac",
     VAR_0, ((void*)0), "VF Statistics (read from HW registers)");
 VAR_13 = FUNC_3(VAR_11);

 FUNC_2(VAR_7, VAR_13, VAR_1, "good_pkts_rcvd",
     VAR_0, &VAR_10->vfgprc, "Good Packets Received");
 FUNC_2(VAR_7, VAR_13, VAR_1, "good_octets_rcvd",
     VAR_0, &VAR_10->vfgorc, "Good Octets Received");
 FUNC_2(VAR_7, VAR_13, VAR_1, "mcast_pkts_rcvd",
     VAR_0, &VAR_10->vfmprc, "Multicast Packets Received");
 FUNC_2(VAR_7, VAR_13, VAR_1, "good_pkts_txd",
     VAR_0, &VAR_10->vfgptc, "Good Packets Transmitted");
 FUNC_2(VAR_7, VAR_13, VAR_1, "good_octets_txd",
     VAR_0, &VAR_10->vfgotc, "Good Octets Transmitted");
}
