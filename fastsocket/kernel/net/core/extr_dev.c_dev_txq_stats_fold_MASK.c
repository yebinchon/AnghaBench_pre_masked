
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {scalar_t__ tx_dropped; scalar_t__ tx_packets; scalar_t__ tx_bytes; } ;
struct net_device_stats {unsigned long tx_bytes; unsigned long tx_packets; unsigned long tx_dropped; } ;
struct net_device {unsigned int num_tx_queues; } ;


 struct netdev_queue* FUNC_0 (struct net_device const*,unsigned int) ;

void FUNC_1(const struct net_device *VAR_0,
   struct net_device_stats *VAR_1)
{
 unsigned long VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
 unsigned int VAR_5;
 struct netdev_queue *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_tx_queues; VAR_5++) {
  VAR_6 = FUNC_0(VAR_0, VAR_5);
  VAR_2 += VAR_6->tx_bytes;
  VAR_3 += VAR_6->tx_packets;
  VAR_4 += VAR_6->tx_dropped;
 }
 if (VAR_2 || VAR_3 || VAR_4) {
  VAR_1->tx_bytes = VAR_2;
  VAR_1->tx_packets = VAR_3;
  VAR_1->tx_dropped = VAR_4;
 }
}
