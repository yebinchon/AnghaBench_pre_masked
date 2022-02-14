
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int num_tx_queues; } ;
struct mq_sched {struct Qdisc** qdiscs; } ;
struct Qdisc {int dev_queue; } ;


 struct Qdisc* FUNC_0 (int ,struct Qdisc*) ;
 int FUNC_1 (struct Qdisc**) ;
 int FUNC_2 (struct Qdisc*) ;
 struct net_device* FUNC_3 (struct Qdisc*) ;
 struct mq_sched* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct mq_sched *VAR_2 = FUNC_4(VAR_0);
 struct Qdisc *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_tx_queues; VAR_4++) {
  VAR_3 = VAR_2->qdiscs[VAR_4];
  VAR_3 = FUNC_0(VAR_3->dev_queue, VAR_3);
  if (VAR_3)
   FUNC_2(VAR_3);
 }
 FUNC_1(VAR_2->qdiscs);
 VAR_2->qdiscs = ((void*)0);
}
