
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {TYPE_7__* dev; } ;
struct TYPE_10__ {TYPE_7__* dev; } ;
struct TYPE_11__ {TYPE_1__ dst; } ;
struct rtable {int rt_flags; TYPE_2__ u; } ;
struct iphdr {int tos; int saddr; int daddr; } ;
struct inet6_skb_parm {int dummy; } ;
struct flowi {int fl4_tos; int fl4_src; int fl4_dst; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
typedef scalar_t__ __u32 ;
typedef int __be32 ;
struct TYPE_15__ {scalar_t__ type; } ;
struct TYPE_14__ {TYPE_4__* ops; TYPE_3__* dev; } ;
struct TYPE_13__ {int (* update_pmtu ) (TYPE_5__*,scalar_t__) ;} ;
struct TYPE_12__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sk_buff*,int,int,int ) ;
 int FUNC_5 (struct sk_buff*,int ,struct inet6_skb_parm*,int*,int*,int*,scalar_t__*,int) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ,TYPE_7__*) ;
 scalar_t__ FUNC_8 (int ,struct rtable**,struct flowi*) ;
 int FUNC_9 (struct rtable*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct flowi*,int ,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;
 TYPE_5__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_21(struct sk_buff *VAR_8, struct inet6_skb_parm *VAR_9,
    u8 VAR_10, u8 VAR_11, int VAR_12, __be32 VAR_13)
{
 int VAR_14 = 0;
 u8 VAR_15 = VAR_10;
 u8 VAR_16 = VAR_11;
 __u32 VAR_17 = FUNC_12(VAR_13);
 int VAR_18;
 struct sk_buff *VAR_19;
 struct iphdr *VAR_20;
 struct flowi VAR_21;
 struct rtable *VAR_22;

 VAR_18 = FUNC_5(VAR_8, VAR_6, VAR_9, &VAR_15, &VAR_16,
     &VAR_14, &VAR_17, VAR_12);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_14 == 0)
  return 0;

 switch (VAR_15) {
 case 129:
  if (VAR_16 != VAR_2)
   return 0;
  VAR_15 = VAR_3;
  VAR_16 = VAR_5;
  break;
 case 128:
  if (VAR_16 != 0)
   return 0;
  VAR_15 = VAR_3;
  VAR_16 = VAR_4;
  break;
 default:
  return 0;
 }

 if (!FUNC_13(VAR_8, VAR_12 + sizeof(struct iphdr)))
  return 0;

 VAR_19 = FUNC_14(VAR_8, VAR_1);
 if (!VAR_19)
  return 0;

 FUNC_16(VAR_19);

 FUNC_18(VAR_19, VAR_12);
 FUNC_19(VAR_19);
 VAR_20 = FUNC_6(VAR_19);


 FUNC_11(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.fl4_dst = VAR_20->saddr;
 VAR_21.fl4_tos = FUNC_0(VAR_20->tos);
 VAR_21.proto = VAR_6;
 if (FUNC_8(FUNC_1(VAR_8->dev), &VAR_22, &VAR_21))
  goto out;

 VAR_19->dev = VAR_22->u.dst.dev;


 if (VAR_22->rt_flags & VAR_7) {
  FUNC_9(VAR_22);
  VAR_22 = ((void*)0);
  VAR_21.fl4_dst = VAR_20->daddr;
  VAR_21.fl4_src = VAR_20->saddr;
  VAR_21.fl4_tos = VAR_20->tos;
  if (FUNC_8(FUNC_1(VAR_8->dev), &VAR_22, &VAR_21) ||
      VAR_22->u.dst.dev->type != VAR_0) {
   FUNC_9(VAR_22);
   goto out;
  }
  FUNC_17(VAR_19, (struct dst_entry *)VAR_22);
 } else {
  FUNC_9(VAR_22);
  if (FUNC_7(VAR_19, VAR_20->daddr, VAR_20->saddr, VAR_20->tos,
       VAR_19->dev) ||
      FUNC_15(VAR_19)->dev->type != VAR_0)
   goto out;
 }


 if (VAR_15 == VAR_3 && VAR_16 == VAR_4) {
  if (VAR_17 > FUNC_2(FUNC_15(VAR_19)))
   goto out;

  FUNC_15(VAR_19)->ops->update_pmtu(FUNC_15(VAR_19), VAR_17);
 }

 FUNC_4(VAR_19, VAR_15, VAR_16, FUNC_3(VAR_17));

out:
 FUNC_10(VAR_19);
 return 0;
}
