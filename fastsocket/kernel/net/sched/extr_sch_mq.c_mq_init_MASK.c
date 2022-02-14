
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {unsigned int num_tx_queues; } ;
struct mq_sched {struct Qdisc** qdiscs; } ;
struct Qdisc {scalar_t__ parent; int flags; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_5 ;
 struct Qdisc** FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct Qdisc*) ;
 struct netdev_queue* FUNC_5 (struct net_device*,unsigned int) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_6 ;
 struct Qdisc* FUNC_7 (struct net_device*,struct netdev_queue*,int *,int ) ;
 struct net_device* FUNC_8 (struct Qdisc*) ;
 struct mq_sched* FUNC_9 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_10(struct Qdisc *VAR_7, struct nlattr *VAR_8)
{
 struct net_device *VAR_9 = FUNC_8(VAR_7);
 struct mq_sched *VAR_10 = FUNC_9(VAR_7);
 struct netdev_queue *VAR_11;
 struct Qdisc *VAR_12;
 unsigned int VAR_13;

 if (VAR_7->parent != VAR_5)
  return -VAR_1;

 if (!FUNC_6(VAR_9))
  return -VAR_1;


 VAR_10->qdiscs = FUNC_3(VAR_9->num_tx_queues, sizeof(VAR_10->qdiscs[0]),
          VAR_2);
 if (VAR_10->qdiscs == ((void*)0))
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_9->num_tx_queues; VAR_13++) {
  VAR_11 = FUNC_5(VAR_9, VAR_13);
  VAR_12 = FUNC_7(VAR_9, VAR_11, &VAR_6,
       FUNC_1(FUNC_0(VAR_7->handle),
          FUNC_2(VAR_13 + 1)));
  if (VAR_12 == ((void*)0))
   goto err;
  VAR_12->flags |= VAR_3;
  VAR_10->qdiscs[VAR_13] = VAR_12;
 }

 VAR_7->flags |= VAR_4;
 return 0;

err:
 FUNC_4(VAR_7);
 return -VAR_0;
}
