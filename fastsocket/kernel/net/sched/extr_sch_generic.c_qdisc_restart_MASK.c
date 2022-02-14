
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;


 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 struct netdev_queue* FUNC_1 (struct net_device*,int ) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 int * FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*,struct net_device*,struct netdev_queue*,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(struct Qdisc *VAR_0)
{
 struct netdev_queue *VAR_1;
 struct net_device *VAR_2;
 spinlock_t *VAR_3;
 struct sk_buff *VAR_4;


 VAR_4 = FUNC_0(VAR_0);
 if (FUNC_6(!VAR_4))
  return 0;

 VAR_3 = FUNC_3(VAR_0);
 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = FUNC_1(VAR_2, FUNC_5(VAR_4));

 return FUNC_4(VAR_4, VAR_0, VAR_2, VAR_1, VAR_3);
}
