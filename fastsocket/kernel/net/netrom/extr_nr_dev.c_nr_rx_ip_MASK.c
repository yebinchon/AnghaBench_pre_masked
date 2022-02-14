
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; int network_header; int mac_header; struct net_device* dev; int protocol; scalar_t__ len; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct net_device_stats *VAR_4 = &VAR_3->stats;

 if (!FUNC_1(VAR_3)) {
  VAR_4->rx_dropped++;
  return 0;
 }

 VAR_4->rx_packets++;
 VAR_4->rx_bytes += VAR_2->len;

 VAR_2->protocol = FUNC_0(VAR_0);


 VAR_2->dev = VAR_3;
 VAR_2->mac_header = VAR_2->network_header;
 FUNC_3(VAR_2);
 VAR_2->pkt_type = VAR_1;

 FUNC_2(VAR_2);

 return 1;
}
