
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ qlen; } ;
struct teql_sched_data {TYPE_5__ q; TYPE_1__* m; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {TYPE_4__* qdisc; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
struct TYPE_8__ {scalar_t__ qlen; } ;
struct TYPE_9__ {TYPE_3__ q; } ;
struct TYPE_6__ {struct Qdisc* slaves; int dev; } ;


 struct sk_buff* FUNC_0 (TYPE_5__*) ;
 struct netdev_queue* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (TYPE_4__*) ;
 struct teql_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct Qdisc* VAR_0)
{
 struct teql_sched_data *VAR_1 = FUNC_4(VAR_0);
 struct netdev_queue *VAR_2;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(&VAR_1->q);
 VAR_2 = FUNC_1(VAR_1->m->dev, 0);
 if (VAR_3 == ((void*)0)) {
  struct net_device *VAR_4 = FUNC_3(VAR_2->qdisc);
  if (VAR_4) {
   VAR_1->m->slaves = VAR_0;
   FUNC_2(VAR_4);
  }
 }
 VAR_0->q.qlen = VAR_1->q.qlen + VAR_2->qdisc->q.qlen;
 return VAR_3;
}
