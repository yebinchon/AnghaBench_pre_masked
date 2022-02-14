
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; int protocol; int len; struct sock* sk; } ;
struct TYPE_6__ {struct net_device* dev; } ;
struct TYPE_7__ {TYPE_1__ dst; } ;
struct rtable {int rt_flags; TYPE_2__ u; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {scalar_t__ mc_loop; } ;
struct TYPE_8__ {scalar_t__ ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,struct sk_buff*,int *,struct net_device*,int ) ;
 int FUNC_3 (int ,int ,struct sk_buff*,int *,struct net_device*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (struct sock*) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;

int FUNC_11(struct sk_buff *VAR_12)
{
 struct sock *VAR_13 = VAR_12->sk;
 struct rtable *VAR_14 = FUNC_10(VAR_12);
 struct net_device *VAR_15 = VAR_14->u.dst.dev;




 FUNC_1(FUNC_4(VAR_15), VAR_4, VAR_12->len);

 VAR_12->dev = VAR_15;
 VAR_12->protocol = FUNC_5(VAR_0);





 if (VAR_14->rt_flags&VAR_9) {
  if ((!VAR_13 || FUNC_6(VAR_13)->mc_loop)
  ) {
   struct sk_buff *VAR_16 = FUNC_9(VAR_12, VAR_1);
   if (VAR_16)
    FUNC_2(VAR_6, VAR_5, VAR_16,
     ((void*)0), VAR_16->dev,
     VAR_10);
  }



  if (FUNC_7(VAR_12)->ttl == 0) {
   FUNC_8(VAR_12);
   return 0;
  }
 }

 if (VAR_14->rt_flags&VAR_7) {
  struct sk_buff *VAR_17 = FUNC_9(VAR_12, VAR_1);
  if (VAR_17)
   FUNC_2(VAR_6, VAR_5, VAR_17, ((void*)0),
    VAR_17->dev, VAR_10);
 }

 return FUNC_3(VAR_6, VAR_5, VAR_12, ((void*)0), VAR_12->dev,
       VAR_11,
       !(FUNC_0(VAR_12)->flags & VAR_3));
}
