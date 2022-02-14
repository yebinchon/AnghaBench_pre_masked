
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {struct sk_buff* (* dequeue ) (struct Qdisc*) ;TYPE_1__ q; struct sk_buff* gso_skb; } ;


 struct netdev_queue* FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct netdev_queue*) ;
 int FUNC_2 (struct netdev_queue*) ;
 struct net_device* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct Qdisc*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_7(struct Qdisc *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->gso_skb;

 if (FUNC_6(VAR_1)) {
  struct net_device *VAR_2 = FUNC_3(VAR_0);
  struct netdev_queue *VAR_3;


  VAR_3 = FUNC_0(VAR_2, FUNC_4(VAR_1));
  if (!FUNC_2(VAR_3) &&
      !FUNC_1(VAR_3)) {
   VAR_0->gso_skb = ((void*)0);
   VAR_0->q.qlen--;
  } else
   VAR_1 = ((void*)0);
 } else {
  VAR_1 = VAR_0->dequeue(VAR_0);
 }

 return VAR_1;
}
