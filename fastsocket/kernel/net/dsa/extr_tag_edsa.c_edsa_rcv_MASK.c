
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int*,int*,scalar_t__) ;
 int FUNC_6 (int,scalar_t__,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,int*) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_9, struct net_device *VAR_10,
      struct packet_type *VAR_11, struct net_device *VAR_12)
{
 struct dsa_switch_tree *VAR_13 = VAR_10->dsa_ptr;
 struct dsa_switch *VAR_14;
 u8 *VAR_15;
 int VAR_16;
 int VAR_17;

 if (FUNC_12(VAR_13 == ((void*)0)))
  goto out_drop;

 VAR_9 = FUNC_11(VAR_9, VAR_7);
 if (VAR_9 == ((void*)0))
  goto out;

 if (FUNC_12(!FUNC_8(VAR_9, VAR_3)))
  goto out_drop;




 VAR_15 = VAR_9->data + 2;




 if ((VAR_15[0] & 0xc0) != 0x00 && (VAR_15[0] & 0xc0) != 0xc0)
  goto out_drop;




 VAR_16 = VAR_15[0] & 0x1f;
 VAR_17 = (VAR_15[1] >> 3) & 0x1f;





 if (VAR_16 >= VAR_13->pd->nr_chips)
  goto out_drop;
 VAR_14 = VAR_13->ds[VAR_16];
 if (VAR_17 >= VAR_2 || VAR_14->ports[VAR_17] == ((void*)0))
  goto out_drop;






 if (VAR_15[0] & 0x20) {
  u8 VAR_18[4];






  VAR_18[0] = (VAR_6 >> 8) & 0xff;
  VAR_18[1] = VAR_6 & 0xff;
  VAR_18[2] = VAR_15[2] & ~0x10;
  VAR_18[3] = VAR_15[3];





  if (VAR_15[1] & 0x01)
   VAR_18[2] |= 0x10;

  FUNC_9(VAR_9, VAR_1);




  if (VAR_9->ip_summed == VAR_0) {
   __wsum VAR_19 = VAR_9->csum;
   VAR_19 = FUNC_0(VAR_19, FUNC_1(VAR_18 + 2, 2, 0));
   VAR_19 = FUNC_2(VAR_19, FUNC_1(VAR_15 + 2, 2, 0));
   VAR_9->csum = VAR_19;
  }

  FUNC_5(VAR_15, VAR_18, VAR_1);

  FUNC_6(VAR_9->data - VAR_5,
   VAR_9->data - VAR_5 - VAR_1,
   2 * VAR_4);
 } else {



  FUNC_9(VAR_9, VAR_3);
  FUNC_6(VAR_9->data - VAR_5,
   VAR_9->data - VAR_5 - VAR_3,
   2 * VAR_4);
 }

 VAR_9->dev = VAR_14->ports[VAR_17];
 FUNC_10(VAR_9, VAR_5);
 VAR_9->pkt_type = VAR_8;
 VAR_9->protocol = FUNC_3(VAR_9, VAR_9->dev);

 VAR_9->dev->stats.rx_packets++;
 VAR_9->dev->stats.rx_bytes += VAR_9->len;

 FUNC_7(VAR_9);

 return 0;

out_drop:
 FUNC_4(VAR_9);
out:
 return 0;
}
