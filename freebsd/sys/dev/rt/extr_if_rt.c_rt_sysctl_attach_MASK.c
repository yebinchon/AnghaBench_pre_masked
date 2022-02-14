
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rt_softc {int tx_collision; int tx_skip; int tx_packets; int tx_bytes; int rx_short_err; int rx_long_err; int rx_bytes; int rx_fifo_overflows; int rx_dup_packets; int rx_phy_err; int rx_crc_err; int rx_packets; int * tx_queue_not_empty; int rx_mbuf_dmamap_errors; int rx_mbuf_alloc_errors; int no_tx_desc_avail; int tx_defrag_packets; int tx_watchdog_timeouts; int * tx_data_queue_full; TYPE_1__* tx_ring; int tx_delay_interrupts; int * tx_interrupts; int rx_delay_interrupts; int * rx_interrupts; int rx_coherent_interrupts; int tx_coherent_interrupts; int interrupts; int dev; } ;
struct TYPE_2__ {int data_queued; int desc_queued; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct rt_softc *VAR_2)
{
 struct sysctl_ctx_list *VAR_3;
 struct sysctl_oid *VAR_4;
 struct sysctl_oid *VAR_5;

 VAR_3 = FUNC_4(VAR_2->dev);
 VAR_4 = FUNC_5(VAR_2->dev);


 VAR_5 = FUNC_1(VAR_3, FUNC_3(VAR_4), VAR_1,
     "stats", VAR_0, 0, "statistic");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "interrupts", VAR_0, &VAR_2->interrupts,
     "all interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_coherent_interrupts", VAR_0, &VAR_2->tx_coherent_interrupts,
     "Tx coherent interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_coherent_interrupts", VAR_0, &VAR_2->rx_coherent_interrupts,
     "Rx coherent interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_interrupts", VAR_0, &VAR_2->rx_interrupts[0],
     "Rx interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_delay_interrupts", VAR_0, &VAR_2->rx_delay_interrupts,
     "Rx delay interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ3_interrupts", VAR_0, &VAR_2->tx_interrupts[3],
     "Tx AC3 interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ2_interrupts", VAR_0, &VAR_2->tx_interrupts[2],
     "Tx AC2 interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ1_interrupts", VAR_0, &VAR_2->tx_interrupts[1],
     "Tx AC1 interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ0_interrupts", VAR_0, &VAR_2->tx_interrupts[0],
     "Tx AC0 interrupts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_delay_interrupts", VAR_0, &VAR_2->tx_delay_interrupts,
     "Tx delay interrupts");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ3_desc_queued", VAR_0, &VAR_2->tx_ring[3].desc_queued,
     0, "Tx AC3 descriptors queued");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ3_data_queued", VAR_0, &VAR_2->tx_ring[3].data_queued,
     0, "Tx AC3 data queued");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ2_desc_queued", VAR_0, &VAR_2->tx_ring[2].desc_queued,
     0, "Tx AC2 descriptors queued");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ2_data_queued", VAR_0, &VAR_2->tx_ring[2].data_queued,
     0, "Tx AC2 data queued");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ1_desc_queued", VAR_0, &VAR_2->tx_ring[1].desc_queued,
     0, "Tx AC1 descriptors queued");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ1_data_queued", VAR_0, &VAR_2->tx_ring[1].data_queued,
     0, "Tx AC1 data queued");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ0_desc_queued", VAR_0, &VAR_2->tx_ring[0].desc_queued,
     0, "Tx AC0 descriptors queued");

 FUNC_0(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ0_data_queued", VAR_0, &VAR_2->tx_ring[0].data_queued,
     0, "Tx AC0 data queued");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ3_data_queue_full", VAR_0, &VAR_2->tx_data_queue_full[3],
     "Tx AC3 data queue full");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ2_data_queue_full", VAR_0, &VAR_2->tx_data_queue_full[2],
     "Tx AC2 data queue full");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ1_data_queue_full", VAR_0, &VAR_2->tx_data_queue_full[1],
     "Tx AC1 data queue full");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "TXQ0_data_queue_full", VAR_0, &VAR_2->tx_data_queue_full[0],
     "Tx AC0 data queue full");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_watchdog_timeouts", VAR_0, &VAR_2->tx_watchdog_timeouts,
     "Tx watchdog timeouts");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_defrag_packets", VAR_0, &VAR_2->tx_defrag_packets,
     "Tx defragmented packets");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "no_tx_desc_avail", VAR_0, &VAR_2->no_tx_desc_avail,
     "no Tx descriptors available");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_mbuf_alloc_errors", VAR_0, &VAR_2->rx_mbuf_alloc_errors,
     "Rx mbuf allocation errors");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_mbuf_dmamap_errors", VAR_0, &VAR_2->rx_mbuf_dmamap_errors,
     "Rx mbuf DMA mapping errors");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_queue_0_not_empty", VAR_0, &VAR_2->tx_queue_not_empty[0],
     "Tx queue 0 not empty");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_queue_1_not_empty", VAR_0, &VAR_2->tx_queue_not_empty[1],
     "Tx queue 1 not empty");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_packets", VAR_0, &VAR_2->rx_packets,
     "Rx packets");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_crc_errors", VAR_0, &VAR_2->rx_crc_err,
     "Rx CRC errors");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_phy_errors", VAR_0, &VAR_2->rx_phy_err,
     "Rx PHY errors");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_dup_packets", VAR_0, &VAR_2->rx_dup_packets,
     "Rx duplicate packets");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_fifo_overflows", VAR_0, &VAR_2->rx_fifo_overflows,
     "Rx FIFO overflows");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_bytes", VAR_0, &VAR_2->rx_bytes,
     "Rx bytes");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_long_err", VAR_0, &VAR_2->rx_long_err,
     "Rx too long frame errors");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "rx_short_err", VAR_0, &VAR_2->rx_short_err,
     "Rx too short frame errors");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_bytes", VAR_0, &VAR_2->tx_bytes,
     "Tx bytes");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_packets", VAR_0, &VAR_2->tx_packets,
     "Tx packets");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_skip", VAR_0, &VAR_2->tx_skip,
     "Tx skip count for GDMA ports");

 FUNC_2(VAR_3, FUNC_3(VAR_5), VAR_1,
     "tx_collision", VAR_0, &VAR_2->tx_collision,
     "Tx collision count for GDMA ports");
}
