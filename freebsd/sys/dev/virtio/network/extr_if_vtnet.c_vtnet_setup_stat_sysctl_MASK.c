
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq_stats {int vtxs_rescheduled; int vtxs_tso; int vtxs_csum; } ;
struct vtnet_statistics {int tx_task_rescheduled; int tx_tso_offloaded; int tx_csum_offloaded; int tx_defrag_failed; int tx_defragged; int tx_tso_not_tcp; int tx_tso_bad_ethtype; int tx_csum_bad_ethtype; int rx_task_rescheduled; int rx_csum_offloaded; int rx_csum_failed; int rx_csum_bad_proto; int rx_csum_bad_offset; int rx_csum_bad_ipproto; int rx_csum_bad_ethtype; int rx_mergeable_failed; int rx_enq_replacement_failed; int rx_frame_too_large; int mbuf_alloc_failed; } ;
struct vtnet_softc {struct vtnet_statistics vtnet_stats; } ;
struct vtnet_rxq_stats {int vrxs_rescheduled; int vrxs_csum_failed; int vrxs_csum; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct vtnet_softc*,struct vtnet_rxq_stats*,struct vtnet_txq_stats*) ;

__attribute__((used)) static void
FUNC_2(struct sysctl_ctx_list *VAR_2,
    struct sysctl_oid_list *VAR_3, struct vtnet_softc *VAR_4)
{
 struct vtnet_statistics *VAR_5;
 struct vtnet_rxq_stats VAR_6;
 struct vtnet_txq_stats VAR_7;

 FUNC_1(VAR_4, &VAR_6, &VAR_7);

 VAR_5 = &VAR_4->vtnet_stats;
 VAR_5->rx_csum_offloaded = VAR_6.vrxs_csum;
 VAR_5->rx_csum_failed = VAR_6.vrxs_csum_failed;
 VAR_5->rx_task_rescheduled = VAR_6.vrxs_rescheduled;
 VAR_5->tx_csum_offloaded = VAR_7.vtxs_csum;
 VAR_5->tx_tso_offloaded = VAR_7.vtxs_tso;
 VAR_5->tx_task_rescheduled = VAR_7.vtxs_rescheduled;

 FUNC_0(VAR_2, VAR_3, VAR_1, "mbuf_alloc_failed",
     VAR_0, &VAR_5->mbuf_alloc_failed,
     "Mbuf cluster allocation failures");

 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_frame_too_large",
     VAR_0, &VAR_5->rx_frame_too_large,
     "Received frame larger than the mbuf chain");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_enq_replacement_failed",
     VAR_0, &VAR_5->rx_enq_replacement_failed,
     "Enqueuing the replacement receive mbuf failed");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_mergeable_failed",
     VAR_0, &VAR_5->rx_mergeable_failed,
     "Mergeable buffers receive failures");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_csum_bad_ethtype",
     VAR_0, &VAR_5->rx_csum_bad_ethtype,
     "Received checksum offloaded buffer with unsupported "
     "Ethernet type");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_csum_bad_ipproto",
     VAR_0, &VAR_5->rx_csum_bad_ipproto,
     "Received checksum offloaded buffer with incorrect IP protocol");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_csum_bad_offset",
     VAR_0, &VAR_5->rx_csum_bad_offset,
     "Received checksum offloaded buffer with incorrect offset");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_csum_bad_proto",
     VAR_0, &VAR_5->rx_csum_bad_proto,
     "Received checksum offloaded buffer with incorrect protocol");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_csum_failed",
     VAR_0, &VAR_5->rx_csum_failed,
     "Received buffer checksum offload failed");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_csum_offloaded",
     VAR_0, &VAR_5->rx_csum_offloaded,
     "Received buffer checksum offload succeeded");
 FUNC_0(VAR_2, VAR_3, VAR_1, "rx_task_rescheduled",
     VAR_0, &VAR_5->rx_task_rescheduled,
     "Times the receive interrupt task rescheduled itself");

 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_csum_bad_ethtype",
     VAR_0, &VAR_5->tx_csum_bad_ethtype,
     "Aborted transmit of checksum offloaded buffer with unknown "
     "Ethernet type");
 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_tso_bad_ethtype",
     VAR_0, &VAR_5->tx_tso_bad_ethtype,
     "Aborted transmit of TSO buffer with unknown Ethernet type");
 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_tso_not_tcp",
     VAR_0, &VAR_5->tx_tso_not_tcp,
     "Aborted transmit of TSO buffer with non TCP protocol");
 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_defragged",
     VAR_0, &VAR_5->tx_defragged,
     "Transmit mbufs defragged");
 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_defrag_failed",
     VAR_0, &VAR_5->tx_defrag_failed,
     "Aborted transmit of buffer because defrag failed");
 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_csum_offloaded",
     VAR_0, &VAR_5->tx_csum_offloaded,
     "Offloaded checksum of transmitted buffer");
 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_tso_offloaded",
     VAR_0, &VAR_5->tx_tso_offloaded,
     "Segmentation offload of transmitted buffer");
 FUNC_0(VAR_2, VAR_3, VAR_1, "tx_task_rescheduled",
     VAR_0, &VAR_5->tx_task_rescheduled,
     "Times the transmit interrupt task rescheduled itself");
}
