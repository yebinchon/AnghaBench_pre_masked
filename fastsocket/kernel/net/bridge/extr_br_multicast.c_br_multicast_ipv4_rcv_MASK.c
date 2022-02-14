
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {unsigned int len; int ip_summed; int csum; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct iphdr {int ihl; int version; scalar_t__ protocol; int daddr; int tot_len; } ;
struct igmphdr {int type; int group; } ;
struct TYPE_2__ {int mrouters_only; int igmp; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct net_bridge*,struct net_bridge_port*,int ) ;
 int FUNC_4 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*) ;
 int FUNC_5 (struct net_bridge*,struct net_bridge_port*,int ) ;
 int FUNC_6 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*) ;
 int FUNC_7 (int ) ;
 struct igmphdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,int) ;
 struct iphdr* FUNC_10 (struct sk_buff*) ;
 unsigned int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,unsigned int) ;
 int FUNC_16 (struct sk_buff*) ;
 struct sk_buff* FUNC_17 (struct sk_buff*,int ) ;
 unsigned int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct net_bridge *VAR_6,
     struct net_bridge_port *VAR_7,
     struct sk_buff *VAR_8)
{
 struct sk_buff *VAR_9 = VAR_8;
 struct iphdr *VAR_10;
 struct igmphdr *VAR_11;
 unsigned VAR_12;
 unsigned VAR_13;
 int VAR_14;


 if (!FUNC_14(VAR_8, sizeof(*VAR_10)))
  return -VAR_0;

 VAR_10 = FUNC_10(VAR_8);

 if (VAR_10->ihl < 5 || VAR_10->version != 4)
  return -VAR_0;

 if (!FUNC_14(VAR_8, FUNC_11(VAR_8)))
  return -VAR_0;

 VAR_10 = FUNC_10(VAR_8);

 if (FUNC_20(FUNC_9((u8 *)VAR_10, VAR_10->ihl)))
  return -VAR_0;

 if (VAR_10->protocol != VAR_5) {
  if ((VAR_10->daddr & VAR_4) != VAR_3)
   FUNC_0(VAR_8)->mrouters_only = 1;
  return 0;
 }

 VAR_12 = FUNC_13(VAR_10->tot_len);
 if (VAR_8->len < VAR_12 || VAR_12 < FUNC_11(VAR_8))
  return -VAR_0;

 if (VAR_8->len > VAR_12) {
  VAR_9 = FUNC_17(VAR_8, VAR_2);
  if (!VAR_9)
   return -VAR_1;

  VAR_14 = FUNC_15(VAR_9, VAR_12);
  if (VAR_14)
   return VAR_14;
 }

 VAR_12 -= FUNC_11(VAR_9);
 VAR_13 = FUNC_18(VAR_9) + FUNC_11(VAR_9);
 FUNC_1(VAR_9, VAR_13);
 FUNC_19(VAR_9);

 VAR_14 = -VAR_0;
 if (!FUNC_14(VAR_9, sizeof(*VAR_11)))
  goto out;

 VAR_10 = FUNC_10(VAR_9);

 switch (VAR_9->ip_summed) {
 case 134:
  if (!FUNC_7(VAR_9->csum))
   break;

 case 133:
  VAR_9->csum = 0;
  if (FUNC_16(VAR_9))
   return -VAR_0;
 }

 VAR_14 = 0;

 FUNC_0(VAR_8)->igmp = 1;
 VAR_11 = FUNC_8(VAR_9);

 switch (VAR_11->type) {
 case 128:
 case 132:
  FUNC_0(VAR_8)->mrouters_only = 1;
  VAR_14 = FUNC_3(VAR_6, VAR_7, VAR_11->group);
  break;
 case 131:
  VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_9);
  break;
 case 129:
  VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_9);
  break;
 case 130:
  FUNC_5(VAR_6, VAR_7, VAR_11->group);
  break;
 }

out:
 FUNC_2(VAR_9, VAR_13);
 if (VAR_9 != VAR_8)
  FUNC_12(VAR_9);
 return VAR_14;
}
