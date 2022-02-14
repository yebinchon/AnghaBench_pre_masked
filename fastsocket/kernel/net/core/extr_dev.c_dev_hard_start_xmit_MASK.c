
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; unsigned int len; int destructor; struct sk_buff* next; scalar_t__ encapsulation; scalar_t__ vlan_tci; } ;
struct netdev_queue {int dummy; } ;
struct net_device_ops {int (* ndo_start_xmit ) (struct sk_buff*,struct net_device*) ;} ;
struct net_device {int priv_flags; struct net_device_ops* netdev_ops; } ;
struct TYPE_2__ {int destructor; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct netdev_queue*) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,struct net_device*) ;
 int FUNC_17 (struct sk_buff*,struct net_device*) ;
 int FUNC_18 (struct sk_buff*,int,struct net_device*,unsigned int) ;
 int FUNC_19 (struct netdev_queue*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (struct sk_buff*) ;

int FUNC_23(struct sk_buff *VAR_8, struct net_device *VAR_9,
   struct netdev_queue *VAR_10)
{
 const struct net_device_ops *VAR_11 = VAR_9->netdev_ops;
 int VAR_12;
 unsigned int VAR_13;

 if (FUNC_6(!VAR_8->next)) {
  int VAR_14;

  VAR_14 = FUNC_9(VAR_8);

  if (FUNC_22(VAR_8) &&
      !(VAR_14 & VAR_5)) {
   VAR_8 = FUNC_2(VAR_8, FUNC_21(VAR_8));
   if (FUNC_20(!VAR_8))
    goto out;

   VAR_8->vlan_tci = 0;
  }





  if (VAR_8->encapsulation)
   VAR_14 &= VAR_6;

  if (FUNC_8(VAR_8, VAR_14)) {
   if (FUNC_20(FUNC_3(VAR_8, VAR_14)))
    goto out_kfree_skb;
   if (VAR_8->next)
    goto gso;
  } else {
   if (FUNC_14(VAR_8, VAR_14) &&
       FUNC_1(VAR_8))
    goto out_kfree_skb;





   if (VAR_8->ip_summed == VAR_0) {
    if (!VAR_8->encapsulation)
     FUNC_15(VAR_8,
      FUNC_12(VAR_8));

    if (!(VAR_14 & VAR_4) &&
         FUNC_11(VAR_8))
     goto out_kfree_skb;
   }
  }





  if (VAR_9->priv_flags & VAR_1)
   FUNC_13(VAR_8);

  if (!FUNC_7(&VAR_7))
   FUNC_4(VAR_8, VAR_9);

  VAR_13 = VAR_8->len;
  VAR_12 = VAR_11->ndo_start_xmit(VAR_8, VAR_9);
  FUNC_18(VAR_8, VAR_12, VAR_9, VAR_13);
  if (VAR_12 == VAR_3)
   FUNC_19(VAR_10);
  return VAR_12;
 }

gso:
 do {
  struct sk_buff *VAR_15 = VAR_8->next;

  VAR_8->next = VAR_15->next;
  VAR_15->next = ((void*)0);

  if (!FUNC_7(&VAR_7))
   FUNC_4(VAR_15, VAR_9);

  VAR_13 = VAR_15->len;
  VAR_12 = VAR_11->ndo_start_xmit(VAR_15, VAR_9);
  FUNC_18(VAR_15, VAR_12, VAR_9, VAR_13);
  if (FUNC_20(VAR_12 != VAR_3)) {
   VAR_15->next = VAR_8->next;
   VAR_8->next = VAR_15;
   return VAR_12;
  }
  FUNC_19(VAR_10);
  if (FUNC_20(FUNC_10(VAR_10) && VAR_8->next))
   return VAR_2;
 } while (VAR_8->next);

 VAR_8->destructor = FUNC_0(VAR_8)->destructor;

out_kfree_skb:
 FUNC_5(VAR_8);
out:
 return VAR_3;
}
