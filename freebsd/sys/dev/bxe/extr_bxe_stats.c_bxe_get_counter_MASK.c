
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct bxe_eth_stats {int tx_stat_dot3statsexcessivecollisions_hi; int tx_stat_dot3statslatecollisions_hi; int tx_stat_etherstatscollisions_hi; int total_multicast_packets_received_hi; int tx_stat_dot3statsinternalmactransmiterrors_hi; int rx_stat_dot3statscarriersenseerrors_hi; int no_buff_discard_hi; int rx_stat_dot3statsalignmenterrors_hi; int rx_stat_dot3statsfcserrors_hi; int brb_truncate_hi; int brb_drop_hi; int etherstatsoverrsizepkts_hi; int rx_stat_etherstatsundersizepkts_hi; int total_bytes_transmitted_hi; int total_bytes_received_hi; int total_broadcast_packets_transmitted_hi; int total_multicast_packets_transmitted_hi; int total_unicast_packets_transmitted_hi; int total_broadcast_packets_received_hi; int total_unicast_packets_received_hi; } ;
struct bxe_softc {struct bxe_eth_stats eth_stats; } ;
typedef int ift_counter ;
typedef int if_t ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct bxe_softc* FUNC_2 (int ) ;

uint64_t
FUNC_3(if_t VAR_0, ift_counter VAR_1)
{
 struct bxe_softc *VAR_2;
 struct bxe_eth_stats *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = &VAR_2->eth_stats;

 switch (VAR_1) {
 case 131:
  return (FUNC_0(&VAR_3->total_unicast_packets_received_hi) +
      FUNC_0(&VAR_3->total_multicast_packets_received_hi) +
      FUNC_0(&VAR_3->total_broadcast_packets_received_hi));
 case 128:
  return (FUNC_0(&VAR_3->total_unicast_packets_transmitted_hi) +
      FUNC_0(&VAR_3->total_multicast_packets_transmitted_hi) +
      FUNC_0(&VAR_3->total_broadcast_packets_transmitted_hi));
 case 134:
  return (FUNC_0(&VAR_3->total_bytes_received_hi));
 case 130:
  return (FUNC_0(&VAR_3->total_bytes_transmitted_hi));
 case 133:
  return (FUNC_0(&VAR_3->rx_stat_etherstatsundersizepkts_hi) +
      FUNC_0(&VAR_3->etherstatsoverrsizepkts_hi) +
      FUNC_0(&VAR_3->brb_drop_hi) +
      FUNC_0(&VAR_3->brb_truncate_hi) +
      FUNC_0(&VAR_3->rx_stat_dot3statsfcserrors_hi) +
      FUNC_0(&VAR_3->rx_stat_dot3statsalignmenterrors_hi) +
      FUNC_0(&VAR_3->no_buff_discard_hi));
 case 129:
  return (FUNC_0(&VAR_3->rx_stat_dot3statscarriersenseerrors_hi) +
      FUNC_0(&VAR_3->tx_stat_dot3statsinternalmactransmiterrors_hi));
 case 132:
  return (FUNC_0(&VAR_3->total_multicast_packets_received_hi));
 case 135:
  return (FUNC_0(&VAR_3->tx_stat_etherstatscollisions_hi) +
      FUNC_0(&VAR_3->tx_stat_dot3statslatecollisions_hi) +
      FUNC_0(&VAR_3->tx_stat_dot3statsexcessivecollisions_hi));
 default:
  return (FUNC_1(VAR_0, VAR_1));
 }
}
