
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {scalar_t__ tx_queue_len; struct Qdisc* qdisc; } ;
struct Qdisc {TYPE_1__* ops; int refcnt; } ;
struct TYPE_2__ {int (* attach ) (struct Qdisc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ,int *) ;
 struct netdev_queue* FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 struct Qdisc* FUNC_4 (struct net_device*,struct netdev_queue*,int *,int ) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct netdev_queue *VAR_4;
 struct Qdisc *VAR_5;

 VAR_4 = FUNC_2(VAR_3, 0);

 if (!FUNC_3(VAR_3) || VAR_3->tx_queue_len == 0) {
  FUNC_1(VAR_3, VAR_1, ((void*)0));
  VAR_3->qdisc = VAR_4->qdisc_sleeping;
  FUNC_0(&VAR_3->qdisc->refcnt);
 } else {
  VAR_5 = FUNC_4(VAR_3, VAR_4, &VAR_2, VAR_0);
  if (VAR_5) {
   VAR_5->ops->attach(VAR_5);
   VAR_3->qdisc = VAR_5;
  }
 }
}
