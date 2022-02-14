
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc; } ;
struct net_device {int dummy; } ;
struct Qdisc {int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*,struct Qdisc*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2,
     struct netdev_queue *VAR_3,
     void *VAR_4)
{
 struct Qdisc *VAR_5 = VAR_4;
 struct Qdisc *VAR_6;

 VAR_6 = VAR_3->qdisc;
 if (VAR_6) {
  FUNC_4(FUNC_0(VAR_6));

  if (!(VAR_6->flags & VAR_0))
   FUNC_3(VAR_1, &VAR_6->state);

  FUNC_2(VAR_3->qdisc, VAR_5);
  FUNC_1(VAR_6);

  FUNC_5(FUNC_0(VAR_6));
 }
}
