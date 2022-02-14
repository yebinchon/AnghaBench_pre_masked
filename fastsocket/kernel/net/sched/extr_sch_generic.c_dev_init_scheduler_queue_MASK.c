
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; struct Qdisc* qdisc; } ;
struct net_device {int dummy; } ;
struct Qdisc {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct net_device *VAR_0,
         struct netdev_queue *VAR_1,
         void *VAR_2)
{
 struct Qdisc *VAR_3 = VAR_2;

 VAR_1->qdisc = VAR_3;
 VAR_1->qdisc_sleeping = VAR_3;
}
