
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
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int*,int*,int) ;
 struct dsa_slave_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

netdev_tx_t FUNC_7(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct dsa_slave_priv *VAR_7 = FUNC_4(VAR_6);
 u8 *VAR_8;

 VAR_6->stats.tx_packets++;
 VAR_6->stats.tx_bytes += VAR_5->len;






 if (VAR_5->protocol == FUNC_1(VAR_2)) {
  if (FUNC_5(VAR_5, 0) < 0)
   goto out_free;




  VAR_8 = VAR_5->data + 2 * VAR_1;
  VAR_8[0] = 0x60 | VAR_7->parent->index;
  VAR_8[1] = VAR_7->port << 3;




  if (VAR_8[2] & 0x10) {
   VAR_8[1] |= 0x01;
   VAR_8[2] &= ~0x10;
  }
 } else {
  if (FUNC_5(VAR_5, VAR_0) < 0)
   goto out_free;
  FUNC_6(VAR_5, VAR_0);

  FUNC_3(VAR_5->data, VAR_5->data + VAR_0, 2 * VAR_1);




  VAR_8 = VAR_5->data + 2 * VAR_1;
  VAR_8[0] = 0x40 | VAR_7->parent->index;
  VAR_8[1] = VAR_7->port << 3;
  VAR_8[2] = 0x00;
  VAR_8[3] = 0x00;
 }

 VAR_5->protocol = FUNC_1(VAR_3);

 VAR_5->dev = VAR_7->parent->dst->master_netdev;
 FUNC_0(VAR_5);

 return VAR_4;

out_free:
 FUNC_2(VAR_5);
 return VAR_4;
}
