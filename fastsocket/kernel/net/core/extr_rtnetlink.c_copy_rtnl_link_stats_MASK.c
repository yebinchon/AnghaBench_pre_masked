
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_missed_errors; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int collisions; int multicast; int tx_dropped; int rx_dropped; int tx_errors; int rx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device_stats {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_missed_errors; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int collisions; int multicast; int tx_dropped; int rx_dropped; int tx_errors; int rx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;



__attribute__((used)) static void FUNC_0(struct rtnl_link_stats *VAR_0,
     const struct net_device_stats *VAR_1)
{
 VAR_0->rx_packets = VAR_1->rx_packets;
 VAR_0->tx_packets = VAR_1->tx_packets;
 VAR_0->rx_bytes = VAR_1->rx_bytes;
 VAR_0->tx_bytes = VAR_1->tx_bytes;
 VAR_0->rx_errors = VAR_1->rx_errors;
 VAR_0->tx_errors = VAR_1->tx_errors;
 VAR_0->rx_dropped = VAR_1->rx_dropped;
 VAR_0->tx_dropped = VAR_1->tx_dropped;

 VAR_0->multicast = VAR_1->multicast;
 VAR_0->collisions = VAR_1->collisions;

 VAR_0->rx_length_errors = VAR_1->rx_length_errors;
 VAR_0->rx_over_errors = VAR_1->rx_over_errors;
 VAR_0->rx_crc_errors = VAR_1->rx_crc_errors;
 VAR_0->rx_frame_errors = VAR_1->rx_frame_errors;
 VAR_0->rx_fifo_errors = VAR_1->rx_fifo_errors;
 VAR_0->rx_missed_errors = VAR_1->rx_missed_errors;

 VAR_0->tx_aborted_errors = VAR_1->tx_aborted_errors;
 VAR_0->tx_carrier_errors = VAR_1->tx_carrier_errors;
 VAR_0->tx_fifo_errors = VAR_1->tx_fifo_errors;
 VAR_0->tx_heartbeat_errors = VAR_1->tx_heartbeat_errors;
 VAR_0->tx_window_errors = VAR_1->tx_window_errors;

 VAR_0->rx_compressed = VAR_1->rx_compressed;
 VAR_0->tx_compressed = VAR_1->tx_compressed;
}
