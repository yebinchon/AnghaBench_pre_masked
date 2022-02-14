
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc {int flags; int state; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*) ;
 int * FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,struct Qdisc*,struct net_device*,struct netdev_queue*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static inline int FUNC_14(struct sk_buff *VAR_5, struct Qdisc *VAR_6,
     struct net_device *VAR_7,
     struct netdev_queue *VAR_8)
{
 spinlock_t *VAR_9 = FUNC_5(VAR_6);
 int VAR_10;

 FUNC_9(VAR_9);
 if (FUNC_13(FUNC_12(VAR_3, &VAR_6->state))) {
  FUNC_3(VAR_5);
  VAR_10 = VAR_0;
 } else if ((VAR_6->flags & VAR_2) && !FUNC_6(VAR_6) &&
     !FUNC_11(VAR_4, &VAR_6->state)) {





  FUNC_1(VAR_6, VAR_5->len);
  if (FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
   FUNC_0(VAR_6);
  else
   FUNC_2(VAR_4, &VAR_6->state);

  VAR_10 = VAR_1;
 } else {
  VAR_10 = FUNC_4(VAR_5, VAR_6);
  FUNC_7(VAR_6);
 }
 FUNC_10(VAR_9);

 return VAR_10;
}
