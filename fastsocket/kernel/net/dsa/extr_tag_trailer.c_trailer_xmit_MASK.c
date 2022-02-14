
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int dev; int protocol; scalar_t__ head; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct dsa_slave_priv {int port; TYPE_3__* parent; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {TYPE_2__* dst; } ;
struct TYPE_5__ {int master_netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int*,int ,int) ;
 struct dsa_slave_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;

netdev_tx_t FUNC_14(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct dsa_slave_priv *VAR_6 = FUNC_5(VAR_5);
 struct sk_buff *VAR_7;
 int VAR_8;
 u8 *VAR_9;

 VAR_5->stats.tx_packets++;
 VAR_5->stats.tx_bytes += VAR_4->len;







 VAR_8 = 0;
 if (VAR_4->len < 60)
  VAR_8 = 60 - VAR_4->len;

 VAR_7 = FUNC_0(VAR_3 + VAR_4->len + VAR_8 + 4, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_4);
  return VAR_2;
 }
 FUNC_9(VAR_7, VAR_3);

 FUNC_10(VAR_7);
 FUNC_11(VAR_7, FUNC_7(VAR_4) - VAR_4->head);
 FUNC_12(VAR_7, FUNC_13(VAR_4) - VAR_4->head);
 FUNC_6(VAR_4, FUNC_8(VAR_7, VAR_4->len));
 FUNC_3(VAR_4);

 if (VAR_8) {
  u8 *VAR_10 = FUNC_8(VAR_7, VAR_8);
  FUNC_4(VAR_10, 0, VAR_8);
 }

 VAR_9 = FUNC_8(VAR_7, 4);
 VAR_9[0] = 0x80;
 VAR_9[1] = 1 << VAR_6->port;
 VAR_9[2] = 0x10;
 VAR_9[3] = 0x00;

 VAR_7->protocol = FUNC_2(VAR_0);

 VAR_7->dev = VAR_6->parent->dst->master_netdev;
 FUNC_1(VAR_7);

 return VAR_2;
}
