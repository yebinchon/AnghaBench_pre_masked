
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ protocol; int* data; int dev; scalar_t__ len; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct dsa_slave_priv {int port; TYPE_3__* parent; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int index; TYPE_2__* dst; } ;
struct TYPE_5__ {int master_netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int*,int*,int) ;
 struct dsa_slave_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

netdev_tx_t FUNC_7(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct dsa_slave_priv *VAR_8 = FUNC_4(VAR_7);
 u8 *VAR_9;

 VAR_7->stats.tx_packets++;
 VAR_7->stats.tx_bytes += VAR_6->len;







 if (VAR_6->protocol == FUNC_1(VAR_3)) {
  if (FUNC_5(VAR_6, VAR_0) < 0)
   goto out_free;
  FUNC_6(VAR_6, VAR_0);

  FUNC_3(VAR_6->data, VAR_6->data + VAR_0, 2 * VAR_2);




  VAR_9 = VAR_6->data + 2 * VAR_2;
  VAR_9[0] = (VAR_4 >> 8) & 0xff;
  VAR_9[1] = VAR_4 & 0xff;
  VAR_9[2] = 0x00;
  VAR_9[3] = 0x00;
  VAR_9[4] = 0x60 | VAR_8->parent->index;
  VAR_9[5] = VAR_8->port << 3;




  if (VAR_9[6] & 0x10) {
   VAR_9[5] |= 0x01;
   VAR_9[6] &= ~0x10;
  }
 } else {
  if (FUNC_5(VAR_6, VAR_1) < 0)
   goto out_free;
  FUNC_6(VAR_6, VAR_1);

  FUNC_3(VAR_6->data, VAR_6->data + VAR_1, 2 * VAR_2);




  VAR_9 = VAR_6->data + 2 * VAR_2;
  VAR_9[0] = (VAR_4 >> 8) & 0xff;
  VAR_9[1] = VAR_4 & 0xff;
  VAR_9[2] = 0x00;
  VAR_9[3] = 0x00;
  VAR_9[4] = 0x40 | VAR_8->parent->index;
  VAR_9[5] = VAR_8->port << 3;
  VAR_9[6] = 0x00;
  VAR_9[7] = 0x00;
 }

 VAR_6->protocol = FUNC_1(VAR_4);

 VAR_6->dev = VAR_8->parent->dst->master_netdev;
 FUNC_0(VAR_6);

 return VAR_5;

out_free:
 FUNC_2(VAR_6);
 return VAR_5;
}
