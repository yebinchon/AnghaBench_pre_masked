
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_rx_stats {int multicast; int rx_bytes; int rx_packets; } ;
struct sk_buff {int vlan_tci; int pkt_type; scalar_t__ len; int priority; struct net_device* dev; } ;
struct net_device {int dev_addr; } ;
struct TYPE_4__ {int h_dest; } ;
struct TYPE_3__ {int vlan_rx_stats; struct net_device* real_dev; } ;



 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct vlan_rx_stats* FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int) ;

int FUNC_8(struct sk_buff *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 struct vlan_rx_stats *VAR_4;
 if (!FUNC_2(VAR_2->dev)) {
  if (VAR_2->vlan_tci & VAR_1)
   VAR_2->pkt_type = 128;
  return 0;
 }

 VAR_2->dev = FUNC_6(VAR_3)->real_dev;
 FUNC_3(VAR_2);

 VAR_2->dev = VAR_3;
 VAR_2->priority = FUNC_7(VAR_3, VAR_2->vlan_tci);
 VAR_2->vlan_tci = 0;

 VAR_4 = FUNC_4(FUNC_6(VAR_3)->vlan_rx_stats,
          FUNC_5());

 VAR_4->rx_packets++;
 VAR_4->rx_bytes += VAR_2->len;

 switch (VAR_2->pkt_type) {
 case 130:
  break;
 case 129:
  VAR_4->multicast++;
  break;
 case 128:



  if (!FUNC_0(FUNC_1(VAR_2)->h_dest,
     VAR_3->dev_addr))
   VAR_2->pkt_type = VAR_0;
  break;
 };
 return 0;
}
