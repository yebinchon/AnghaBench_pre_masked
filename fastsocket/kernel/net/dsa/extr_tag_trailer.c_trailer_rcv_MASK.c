
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; TYPE_2__* dev; int protocol; int pkt_type; } ;
struct packet_type {int dummy; } ;
struct net_device {struct dsa_switch_tree* dsa_ptr; } ;
struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {TYPE_2__** ports; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct net_device *VAR_5,
         struct packet_type *VAR_6, struct net_device *VAR_7)
{
 struct dsa_switch_tree *VAR_8 = VAR_5->dsa_ptr;
 struct dsa_switch *VAR_9;
 u8 *VAR_10;
 int VAR_11;

 if (FUNC_8(VAR_8 == ((void*)0)))
  goto out_drop;
 VAR_9 = VAR_8->ds[0];

 VAR_4 = FUNC_7(VAR_4, VAR_2);
 if (VAR_4 == ((void*)0))
  goto out;

 if (FUNC_4(VAR_4))
  goto out_drop;

 VAR_10 = FUNC_6(VAR_4) - 4;
 if (VAR_10[0] != 0x80 || (VAR_10[1] & 0xf8) != 0x00 ||
     (VAR_10[3] & 0xef) != 0x00 || VAR_10[3] != 0x00)
  goto out_drop;

 VAR_11 = VAR_10[1] & 7;
 if (VAR_11 >= VAR_0 || VAR_9->ports[VAR_11] == ((void*)0))
  goto out_drop;

 FUNC_3(VAR_4, VAR_4->len - 4);

 VAR_4->dev = VAR_9->ports[VAR_11];
 FUNC_5(VAR_4, VAR_1);
 VAR_4->pkt_type = VAR_3;
 VAR_4->protocol = FUNC_0(VAR_4, VAR_4->dev);

 VAR_4->dev->stats.rx_packets++;
 VAR_4->dev->stats.rx_bytes += VAR_4->len;

 FUNC_2(VAR_4);

 return 0;

out_drop:
 FUNC_1(VAR_4);
out:
 return 0;
}
