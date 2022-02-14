
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {unsigned int num_tx_queues; } ;
struct TYPE_6__ {scalar_t__ overlimits; scalar_t__ requeues; scalar_t__ drops; scalar_t__ backlog; scalar_t__ qlen; scalar_t__ packets; scalar_t__ bytes; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_3__ qstats; TYPE_3__ bstats; TYPE_1__ q; } ;
struct TYPE_5__ {struct Qdisc* qdisc_sleeping; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_1 (struct net_device*,unsigned int) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_0, struct sk_buff *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_0);
 struct Qdisc *VAR_3;
 unsigned int VAR_4;

 VAR_0->q.qlen = 0;
 FUNC_0(&VAR_0->bstats, 0, sizeof(VAR_0->bstats));
 FUNC_0(&VAR_0->qstats, 0, sizeof(VAR_0->qstats));

 for (VAR_4 = 0; VAR_4 < VAR_2->num_tx_queues; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_4)->qdisc_sleeping;
  FUNC_4(FUNC_3(VAR_3));
  VAR_0->q.qlen += VAR_3->q.qlen;
  VAR_0->bstats.bytes += VAR_3->bstats.bytes;
  VAR_0->bstats.packets += VAR_3->bstats.packets;
  VAR_0->qstats.qlen += VAR_3->qstats.qlen;
  VAR_0->qstats.backlog += VAR_3->qstats.backlog;
  VAR_0->qstats.drops += VAR_3->qstats.drops;
  VAR_0->qstats.requeues += VAR_3->qstats.requeues;
  VAR_0->qstats.overlimits += VAR_3->qstats.overlimits;
  FUNC_5(FUNC_3(VAR_3));
 }
 return 0;
}
