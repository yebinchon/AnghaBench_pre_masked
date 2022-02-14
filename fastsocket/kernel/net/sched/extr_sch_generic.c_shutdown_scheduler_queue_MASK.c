
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; int qdisc; } ;
struct net_device {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ,struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct netdev_queue *VAR_1,
         void *VAR_2)
{
 struct Qdisc *VAR_3 = VAR_1->qdisc_sleeping;
 struct Qdisc *VAR_4 = VAR_2;

 if (VAR_3) {
  FUNC_1(VAR_1->qdisc, VAR_4);
  VAR_1->qdisc_sleeping = VAR_4;

  FUNC_0(VAR_3);
 }
}
