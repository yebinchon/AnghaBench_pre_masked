
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct ovs_vport_stats {int rx_dropped; int tx_dropped; int rx_errors; int tx_errors; int rx_bytes; int tx_bytes; int rx_packets; int tx_packets; } ;
struct net_device_stats {int tx_dropped; int rx_dropped; int tx_errors; int rx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;


 struct vport* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct vport*,struct ovs_vport_stats*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 struct vport *VAR_1 = FUNC_0(VAR_0);
 struct ovs_vport_stats VAR_2;
 struct net_device_stats *VAR_3 = &VAR_0->stats;

 FUNC_1(VAR_1, &VAR_2);



 VAR_3->rx_packets = VAR_2.tx_packets;
 VAR_3->tx_packets = VAR_2.rx_packets;
 VAR_3->rx_bytes = VAR_2.tx_bytes;
 VAR_3->tx_bytes = VAR_2.rx_bytes;
 VAR_3->rx_errors = VAR_2.tx_errors;
 VAR_3->tx_errors = VAR_2.rx_errors;
 VAR_3->rx_dropped = VAR_2.tx_dropped;
 VAR_3->tx_dropped = VAR_2.rx_dropped;

 return VAR_3;
}
