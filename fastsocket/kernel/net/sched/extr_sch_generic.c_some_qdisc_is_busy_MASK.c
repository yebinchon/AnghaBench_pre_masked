
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {unsigned int num_tx_queues; } ;
struct Qdisc {int state; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct netdev_queue* FUNC_0 (struct net_device*,unsigned int) ;
 int * FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct net_device *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++) {
  struct netdev_queue *VAR_4;
  spinlock_t *VAR_5;
  struct Qdisc *VAR_6;
  int VAR_7;

  VAR_4 = FUNC_0(VAR_2, VAR_3);
  VAR_6 = VAR_4->qdisc_sleeping;
  VAR_5 = FUNC_1(VAR_6);

  FUNC_2(VAR_5);

  VAR_7 = (FUNC_4(VAR_0, &VAR_6->state) ||
         FUNC_4(VAR_1, &VAR_6->state));

  FUNC_3(VAR_5);

  if (VAR_7)
   return 1;
 }
 return 0;
}
