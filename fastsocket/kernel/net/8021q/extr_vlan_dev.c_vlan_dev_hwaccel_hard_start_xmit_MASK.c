
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {unsigned int len; int dev; } ;
struct netdev_queue {unsigned int tx_bytes; int tx_dropped; int tx_packets; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int real_dev; int vlan_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 struct netdev_queue* FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*,struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_2,
          struct net_device *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_2);
 struct netdev_queue *VAR_5 = FUNC_3(VAR_3, VAR_4);
 u16 VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(VAR_3)->vlan_id;
 VAR_6 |= FUNC_5(VAR_3, VAR_2);
 VAR_2 = FUNC_0(VAR_2, VAR_6);

 VAR_2->dev = FUNC_6(VAR_3)->real_dev;
 VAR_7 = VAR_2->len;
 VAR_8 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_8 == VAR_1)) {
  VAR_5->tx_packets++;
  VAR_5->tx_bytes += VAR_7;
 } else
  VAR_5->tx_dropped++;

 return VAR_0;
}
