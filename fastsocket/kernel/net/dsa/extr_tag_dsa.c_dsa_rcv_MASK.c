
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int* data; scalar_t__ ip_summed; scalar_t__ len; TYPE_3__* dev; int protocol; int pkt_type; int csum; } ;
struct packet_type {int dummy; } ;
struct net_device {struct dsa_switch_tree* dsa_ptr; } ;
struct dsa_switch_tree {struct dsa_switch** ds; TYPE_1__* pd; } ;
struct dsa_switch {TYPE_3__** ports; } ;
typedef int __wsum ;
struct TYPE_5__ {int rx_bytes; int rx_packets; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int nr_chips; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int*) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_8, struct net_device *VAR_9,
     struct packet_type *VAR_10, struct net_device *VAR_11)
{
 struct dsa_switch_tree *VAR_12 = VAR_9->dsa_ptr;
 struct dsa_switch *VAR_13;
 u8 *VAR_14;
 int VAR_15;
 int VAR_16;

 if (FUNC_12(VAR_12 == ((void*)0)))
  goto out_drop;

 VAR_8 = FUNC_11(VAR_8, VAR_6);
 if (VAR_8 == ((void*)0))
  goto out;

 if (FUNC_12(!FUNC_8(VAR_8, VAR_1)))
  goto out_drop;




 VAR_14 = VAR_8->data - 2;




 if ((VAR_14[0] & 0xc0) != 0x00 && (VAR_14[0] & 0xc0) != 0xc0)
  goto out_drop;




 VAR_15 = VAR_14[0] & 0x1f;
 VAR_16 = (VAR_14[1] >> 3) & 0x1f;





 if (VAR_15 >= VAR_12->pd->nr_chips)
  goto out_drop;
 VAR_13 = VAR_12->ds[VAR_15];
 if (VAR_16 >= VAR_2 || VAR_13->ports[VAR_16] == ((void*)0))
  goto out_drop;






 if (VAR_14[0] & 0x20) {
  u8 VAR_17[4];






  VAR_17[0] = (VAR_5 >> 8) & 0xff;
  VAR_17[1] = VAR_5 & 0xff;
  VAR_17[2] = VAR_14[2] & ~0x10;
  VAR_17[3] = VAR_14[3];





  if (VAR_14[1] & 0x01)
   VAR_17[2] |= 0x10;




  if (VAR_8->ip_summed == VAR_0) {
   __wsum VAR_18 = VAR_8->csum;
   VAR_18 = FUNC_0(VAR_18, FUNC_1(VAR_17 + 2, 2, 0));
   VAR_18 = FUNC_2(VAR_18, FUNC_1(VAR_14 + 2, 2, 0));
   VAR_8->csum = VAR_18;
  }

  FUNC_5(VAR_14, VAR_17, VAR_1);
 } else {



  FUNC_9(VAR_8, VAR_1);
  FUNC_6(VAR_8->data - VAR_4,
   VAR_8->data - VAR_4 - VAR_1,
   2 * VAR_3);
 }

 VAR_8->dev = VAR_13->ports[VAR_16];
 FUNC_10(VAR_8, VAR_4);
 VAR_8->pkt_type = VAR_7;
 VAR_8->protocol = FUNC_3(VAR_8, VAR_8->dev);

 VAR_8->dev->stats.rx_packets++;
 VAR_8->dev->stats.rx_bytes += VAR_8->len;

 FUNC_7(VAR_8);

 return 0;

out_drop:
 FUNC_4(VAR_8);
out:
 return 0;
}
