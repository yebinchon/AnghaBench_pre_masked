
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_missed_errors; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int collisions; int multicast; int tx_dropped; int rx_dropped; int tx_errors; int rx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device_stats {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_missed_errors; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int collisions; int multicast; int tx_dropped; int rx_dropped; int tx_errors; int rx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
typedef int a ;


 int FUNC_0 (void*,struct rtnl_link_stats64*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const struct net_device_stats *VAR_1)
{
 struct rtnl_link_stats64 VAR_2;

 VAR_2.rx_packets = VAR_1->rx_packets;
 VAR_2.tx_packets = VAR_1->tx_packets;
 VAR_2.rx_bytes = VAR_1->rx_bytes;
 VAR_2.tx_bytes = VAR_1->tx_bytes;
 VAR_2.rx_errors = VAR_1->rx_errors;
 VAR_2.tx_errors = VAR_1->tx_errors;
 VAR_2.rx_dropped = VAR_1->rx_dropped;
 VAR_2.tx_dropped = VAR_1->tx_dropped;

 VAR_2.multicast = VAR_1->multicast;
 VAR_2.collisions = VAR_1->collisions;

 VAR_2.rx_length_errors = VAR_1->rx_length_errors;
 VAR_2.rx_over_errors = VAR_1->rx_over_errors;
 VAR_2.rx_crc_errors = VAR_1->rx_crc_errors;
 VAR_2.rx_frame_errors = VAR_1->rx_frame_errors;
 VAR_2.rx_fifo_errors = VAR_1->rx_fifo_errors;
 VAR_2.rx_missed_errors = VAR_1->rx_missed_errors;

 VAR_2.tx_aborted_errors = VAR_1->tx_aborted_errors;
 VAR_2.tx_carrier_errors = VAR_1->tx_carrier_errors;
 VAR_2.tx_fifo_errors = VAR_1->tx_fifo_errors;
 VAR_2.tx_heartbeat_errors = VAR_1->tx_heartbeat_errors;
 VAR_2.tx_window_errors = VAR_1->tx_window_errors;

 VAR_2.rx_compressed = VAR_1->rx_compressed;
 VAR_2.tx_compressed = VAR_1->tx_compressed;
 FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));
}
