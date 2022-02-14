
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {scalar_t__ protocol; scalar_t__ pkt_type; int dev; struct nf_bridge_info* nf_bridge; } ;
struct nf_bridge_info {int physoutdev; int mask; } ;
struct net_device {int dummy; } ;
struct inet_skb_parm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_5 (int ,int ,struct sk_buff*,struct net_device*,struct net_device*,int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct net_device* FUNC_6 (struct net_device const*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_11(unsigned int VAR_13, struct sk_buff *VAR_14,
         const struct net_device *VAR_15,
         const struct net_device *VAR_16,
         int (*VAR_17)(struct sk_buff *))
{
 struct nf_bridge_info *VAR_18;
 struct net_device *VAR_19;
 u_int8_t VAR_20;

 if (!VAR_14->nf_bridge)
  return VAR_4;



 if (!FUNC_10(VAR_14))
  return VAR_5;

 VAR_19 = FUNC_6(VAR_16);
 if (!VAR_19)
  return VAR_5;

 if (VAR_14->protocol == FUNC_7(VAR_2) || FUNC_3(VAR_14) ||
     FUNC_1(VAR_14))
  VAR_20 = VAR_10;
 else if (VAR_14->protocol == FUNC_7(VAR_3) || FUNC_4(VAR_14) ||
   FUNC_2(VAR_14))
  VAR_20 = VAR_11;
 else
  return VAR_4;

 FUNC_9(VAR_14);

 VAR_18 = VAR_14->nf_bridge;
 if (VAR_14->pkt_type == VAR_9) {
  VAR_14->pkt_type = VAR_8;
  VAR_18->mask |= VAR_1;
 }


 FUNC_8(FUNC_0(VAR_14), 0, sizeof(struct inet_skb_parm));


 VAR_18->mask |= VAR_0;
 VAR_18->physoutdev = VAR_14->dev;

 FUNC_5(VAR_20, VAR_6, VAR_14, FUNC_6(VAR_15), VAR_19,
  VAR_12);

 return VAR_7;
}
