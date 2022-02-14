
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; int len; scalar_t__ sk; int protocol; } ;
struct net_device {int flags; } ;
struct ipv6_pinfo {scalar_t__ mc_loop; } ;
struct inet6_dev {int dummy; } ;
struct dst_entry {struct net_device* dev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ hop_limit; int saddr; int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct inet6_dev*,int ) ;
 int FUNC_2 (int ,struct inet6_dev*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,struct sk_buff*,int *,struct net_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 struct ipv6_pinfo* FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 struct inet6_dev* FUNC_7 (struct dst_entry*) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct net_device*,int *,int *) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 struct dst_entry* FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_10)
{
 struct dst_entry *VAR_11 = FUNC_14(VAR_10);
 struct net_device *VAR_12 = VAR_11->dev;

 VAR_10->protocol = FUNC_5(VAR_0);
 VAR_10->dev = VAR_12;

 if (FUNC_8(&FUNC_10(VAR_10)->daddr)) {
  struct ipv6_pinfo* VAR_13 = VAR_10->sk ? FUNC_6(VAR_10->sk) : ((void*)0);
  struct inet6_dev *VAR_14 = FUNC_7(FUNC_14(VAR_10));

  if (!(VAR_12->flags & VAR_2) && (!VAR_13 || VAR_13->mc_loop) &&
      ((FUNC_12(FUNC_4(VAR_12)) &&
       !(FUNC_0(VAR_10)->flags & VAR_3)) ||
       FUNC_9(VAR_12, &FUNC_10(VAR_10)->daddr,
      &FUNC_10(VAR_10)->saddr))) {
   struct sk_buff *VAR_15 = FUNC_13(VAR_10, VAR_1);




   if (VAR_15)
    FUNC_3(VAR_7, VAR_6, VAR_15,
     ((void*)0), VAR_15->dev,
     VAR_8);

   if (FUNC_10(VAR_10)->hop_limit == 0) {
    FUNC_1(FUNC_4(VAR_12), VAR_14,
           VAR_4);
    FUNC_11(VAR_10);
    return 0;
   }
  }

  FUNC_2(FUNC_4(VAR_12), VAR_14, VAR_5,
    VAR_10->len);
 }

 return FUNC_3(VAR_7, VAR_6, VAR_10, ((void*)0), VAR_10->dev,
         VAR_9);
}
