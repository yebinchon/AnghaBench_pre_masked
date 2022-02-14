
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ pmf; } ;
struct bxe_eth_stats {int mac_discard; int brb_truncate_discard; int mac_filter_discard; } ;
struct bxe_softc {int num_queues; TYPE_2__ port; TYPE_1__* fp; struct bxe_eth_stats eth_stats; } ;
struct bxe_eth_q_stats {int total_transmitted_dropped_packets_error_lo; int total_transmitted_dropped_packets_error_hi; int total_multicast_packets_transmitted_lo; int total_multicast_packets_transmitted_hi; int total_broadcast_packets_transmitted_lo; int total_broadcast_packets_transmitted_hi; int total_unicast_packets_transmitted_lo; int total_unicast_packets_transmitted_hi; int total_multicast_bytes_transmitted_lo; int total_multicast_bytes_transmitted_hi; int total_broadcast_bytes_transmitted_lo; int total_broadcast_bytes_transmitted_hi; int total_unicast_bytes_transmitted_lo; int total_unicast_bytes_transmitted_hi; int no_buff_discard_lo; int no_buff_discard_hi; int etherstatsoverrsizepkts_lo; int etherstatsoverrsizepkts_hi; int total_packets_received_ttl0_discarded_lo; int total_packets_received_ttl0_discarded_hi; int total_packets_received_checksum_discarded_lo; int total_packets_received_checksum_discarded_hi; int total_multicast_packets_received_lo; int total_multicast_packets_received_hi; int total_broadcast_packets_received_lo; int total_broadcast_packets_received_hi; int total_unicast_packets_received_lo; int total_unicast_packets_received_hi; int total_multicast_bytes_received_lo; int total_multicast_bytes_received_hi; int total_broadcast_bytes_received_lo; int total_broadcast_bytes_received_hi; int total_unicast_bytes_received_lo; int total_unicast_bytes_received_hi; } ;
struct afex_stats {int rx_frames_discarded_lo; int rx_frames_discarded_hi; int rx_frames_dropped_lo; int rx_frames_dropped_hi; int tx_frames_dropped_lo; int tx_frames_dropped_hi; int tx_multicast_frames_lo; int tx_multicast_frames_hi; int tx_broadcast_frames_lo; int tx_broadcast_frames_hi; int tx_unicast_frames_lo; int tx_unicast_frames_hi; int tx_multicast_bytes_lo; int tx_multicast_bytes_hi; int tx_broadcast_bytes_lo; int tx_broadcast_bytes_hi; int tx_unicast_bytes_lo; int tx_unicast_bytes_hi; int rx_multicast_frames_lo; int rx_multicast_frames_hi; int rx_broadcast_frames_lo; int rx_broadcast_frames_hi; int rx_unicast_frames_lo; int rx_unicast_frames_hi; int rx_multicast_bytes_lo; int rx_multicast_bytes_hi; int rx_broadcast_bytes_lo; int rx_broadcast_bytes_hi; int rx_unicast_bytes_lo; int rx_unicast_bytes_hi; } ;
struct TYPE_3__ {struct bxe_eth_q_stats eth_q_stats; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct afex_stats*,int ,int) ;

void
FUNC_2(struct bxe_softc *VAR_1,
                       void *VAR_2,
                       uint32_t VAR_3)
{
    int VAR_4;
    struct afex_stats *VAR_5 = (struct afex_stats *)VAR_2;
    struct bxe_eth_stats *VAR_6 = &VAR_1->eth_stats;

    FUNC_1(VAR_5, 0, sizeof(struct afex_stats));

    for (VAR_4 = 0; VAR_4 < VAR_1->num_queues; VAR_4++) {
        struct bxe_eth_q_stats *VAR_7 = &VAR_1->fp[VAR_4].eth_q_stats;

        FUNC_0(VAR_5->rx_unicast_bytes_hi,
               VAR_7->total_unicast_bytes_received_hi,
               VAR_5->rx_unicast_bytes_lo,
               VAR_7->total_unicast_bytes_received_lo);

        FUNC_0(VAR_5->rx_broadcast_bytes_hi,
               VAR_7->total_broadcast_bytes_received_hi,
               VAR_5->rx_broadcast_bytes_lo,
               VAR_7->total_broadcast_bytes_received_lo);

        FUNC_0(VAR_5->rx_multicast_bytes_hi,
               VAR_7->total_multicast_bytes_received_hi,
               VAR_5->rx_multicast_bytes_lo,
               VAR_7->total_multicast_bytes_received_lo);

        FUNC_0(VAR_5->rx_unicast_frames_hi,
               VAR_7->total_unicast_packets_received_hi,
               VAR_5->rx_unicast_frames_lo,
               VAR_7->total_unicast_packets_received_lo);

        FUNC_0(VAR_5->rx_broadcast_frames_hi,
               VAR_7->total_broadcast_packets_received_hi,
               VAR_5->rx_broadcast_frames_lo,
               VAR_7->total_broadcast_packets_received_lo);

        FUNC_0(VAR_5->rx_multicast_frames_hi,
               VAR_7->total_multicast_packets_received_hi,
               VAR_5->rx_multicast_frames_lo,
               VAR_7->total_multicast_packets_received_lo);





        FUNC_0(VAR_5->rx_frames_discarded_hi,
               VAR_7->total_packets_received_checksum_discarded_hi,
               VAR_5->rx_frames_discarded_lo,
               VAR_7->total_packets_received_checksum_discarded_lo);

        FUNC_0(VAR_5->rx_frames_discarded_hi,
               VAR_7->total_packets_received_ttl0_discarded_hi,
               VAR_5->rx_frames_discarded_lo,
               VAR_7->total_packets_received_ttl0_discarded_lo);

        FUNC_0(VAR_5->rx_frames_discarded_hi,
               VAR_7->etherstatsoverrsizepkts_hi,
               VAR_5->rx_frames_discarded_lo,
               VAR_7->etherstatsoverrsizepkts_lo);

        FUNC_0(VAR_5->rx_frames_dropped_hi,
               VAR_7->no_buff_discard_hi,
               VAR_5->rx_frames_dropped_lo,
               VAR_7->no_buff_discard_lo);

        FUNC_0(VAR_5->tx_unicast_bytes_hi,
               VAR_7->total_unicast_bytes_transmitted_hi,
               VAR_5->tx_unicast_bytes_lo,
               VAR_7->total_unicast_bytes_transmitted_lo);

        FUNC_0(VAR_5->tx_broadcast_bytes_hi,
               VAR_7->total_broadcast_bytes_transmitted_hi,
               VAR_5->tx_broadcast_bytes_lo,
               VAR_7->total_broadcast_bytes_transmitted_lo);

        FUNC_0(VAR_5->tx_multicast_bytes_hi,
               VAR_7->total_multicast_bytes_transmitted_hi,
               VAR_5->tx_multicast_bytes_lo,
               VAR_7->total_multicast_bytes_transmitted_lo);

        FUNC_0(VAR_5->tx_unicast_frames_hi,
               VAR_7->total_unicast_packets_transmitted_hi,
               VAR_5->tx_unicast_frames_lo,
               VAR_7->total_unicast_packets_transmitted_lo);

        FUNC_0(VAR_5->tx_broadcast_frames_hi,
               VAR_7->total_broadcast_packets_transmitted_hi,
               VAR_5->tx_broadcast_frames_lo,
               VAR_7->total_broadcast_packets_transmitted_lo);

        FUNC_0(VAR_5->tx_multicast_frames_hi,
               VAR_7->total_multicast_packets_transmitted_hi,
               VAR_5->tx_multicast_frames_lo,
               VAR_7->total_multicast_packets_transmitted_lo);

        FUNC_0(VAR_5->tx_frames_dropped_hi,
               VAR_7->total_transmitted_dropped_packets_error_hi,
               VAR_5->tx_frames_dropped_lo,
               VAR_7->total_transmitted_dropped_packets_error_lo);
    }






    if ((VAR_1->port.pmf) && (VAR_3 == VAR_0)) {
        FUNC_0(VAR_5->rx_frames_dropped_hi,
               0,
               VAR_5->rx_frames_dropped_lo,
               VAR_6->mac_filter_discard);
        FUNC_0(VAR_5->rx_frames_dropped_hi,
               0,
               VAR_5->rx_frames_dropped_lo,
               VAR_6->brb_truncate_discard);
        FUNC_0(VAR_5->rx_frames_discarded_hi,
               0,
               VAR_5->rx_frames_discarded_lo,
               VAR_6->mac_discard);
    }
}
