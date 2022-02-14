
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int num_tx_queues; } ;
struct mqprio_sched {scalar_t__* qdiscs; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct net_device* FUNC_3 (struct Qdisc*) ;
 struct mqprio_sched* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct mqprio_sched *VAR_2 = FUNC_4(VAR_0);
 unsigned int VAR_3;

 if (VAR_2->qdiscs) {
  for (VAR_3 = 0;
       VAR_3 < VAR_1->num_tx_queues && VAR_2->qdiscs[VAR_3];
       VAR_3++)
   FUNC_2(VAR_2->qdiscs[VAR_3]);
  FUNC_0(VAR_2->qdiscs);
 }

 FUNC_1(VAR_1, 0);
}
