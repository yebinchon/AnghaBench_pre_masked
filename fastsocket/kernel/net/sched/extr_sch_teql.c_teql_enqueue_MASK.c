
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ qlen; } ;
struct teql_sched_data {TYPE_3__ q; } ;
struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ tx_queue_len; } ;
struct TYPE_4__ {int drops; } ;
struct TYPE_5__ {int packets; int bytes; } ;
struct Qdisc {TYPE_1__ qstats; TYPE_2__ bstats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct teql_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_1, struct Qdisc* VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_2);
 struct teql_sched_data *VAR_4 = FUNC_4(VAR_2);

 if (VAR_4->q.qlen < VAR_3->tx_queue_len) {
  FUNC_0(&VAR_4->q, VAR_1);
  VAR_2->bstats.bytes += FUNC_3(VAR_1);
  VAR_2->bstats.packets++;
  return 0;
 }

 FUNC_1(VAR_1);
 VAR_2->qstats.drops++;
 return VAR_0;
}
