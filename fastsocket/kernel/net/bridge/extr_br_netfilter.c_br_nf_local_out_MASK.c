
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; int pkt_type; struct nf_bridge_info* nf_bridge; } ;
struct nf_bridge_info {int mask; struct net_device* physindev; int physoutdev; } ;
struct net_device {int dummy; } ;
struct inet_skb_parm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,int ,struct sk_buff*,struct net_device*,int ,int ) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_5(unsigned int VAR_9, struct sk_buff *VAR_10,
        const struct net_device *VAR_11,
        const struct net_device *VAR_12,
        int (*VAR_13)(struct sk_buff *))
{
 struct net_device *VAR_14;
 struct nf_bridge_info *VAR_15;

 if (!VAR_10->nf_bridge)
  return VAR_2;



 if (!FUNC_4(VAR_10))
  return VAR_4;

 VAR_15 = VAR_10->nf_bridge;
 if (!(VAR_15->mask & VAR_0))
  return VAR_2;



 VAR_15->physoutdev = VAR_10->dev;
 VAR_14 = VAR_15->physindev;

 if (VAR_15->mask & VAR_1) {
  VAR_10->pkt_type = VAR_6;
  VAR_15->mask ^= VAR_1;
 }
 FUNC_3(VAR_10);


 FUNC_2(FUNC_0(VAR_10), 0, sizeof(struct inet_skb_parm));

 FUNC_1(VAR_7, VAR_3, VAR_10, VAR_14, VAR_10->dev,
  VAR_8);
 return VAR_5;
}
