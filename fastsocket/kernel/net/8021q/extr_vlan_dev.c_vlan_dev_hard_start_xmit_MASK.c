
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vlan_ethhdr {scalar_t__ h_vlan_proto; } ;
struct sk_buff {unsigned int len; int dev; scalar_t__ data; } ;
struct netdev_queue {unsigned int tx_bytes; int tx_dropped; int tx_packets; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int flags; int real_dev; int cnt_inc_headroom_on_tx; int vlan_id; int cnt_encap_on_xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct netdev_queue* FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct net_device*,struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_5,
         struct net_device *VAR_6)
{
 int VAR_7 = FUNC_5(VAR_5);
 struct netdev_queue *VAR_8 = FUNC_4(VAR_6, VAR_7);
 struct vlan_ethhdr *VAR_9 = (struct vlan_ethhdr *)(VAR_5->data);
 unsigned int VAR_10;
 int VAR_11;






 if (VAR_9->h_vlan_proto != FUNC_2(VAR_0) ||
     FUNC_8(VAR_6)->flags & VAR_3) {
  unsigned int VAR_12 = FUNC_6(VAR_5);
  u16 VAR_13;

  FUNC_8(VAR_6)->cnt_encap_on_xmit++;

  VAR_13 = FUNC_8(VAR_6)->vlan_id;
  VAR_13 |= FUNC_7(VAR_6, VAR_5);
  VAR_5 = FUNC_0(VAR_5, VAR_13);
  if (!VAR_5) {
   VAR_8->tx_dropped++;
   return VAR_1;
  }

  if (VAR_12 < VAR_4)
   FUNC_8(VAR_6)->cnt_inc_headroom_on_tx++;
 }


 VAR_5->dev = FUNC_8(VAR_6)->real_dev;
 VAR_10 = VAR_5->len;
 VAR_11 = FUNC_1(VAR_5);

 if (FUNC_3(VAR_11 == VAR_2)) {
  VAR_8->tx_packets++;
  VAR_8->tx_bytes += VAR_10;
 } else
  VAR_8->tx_dropped++;

 return VAR_1;
}
