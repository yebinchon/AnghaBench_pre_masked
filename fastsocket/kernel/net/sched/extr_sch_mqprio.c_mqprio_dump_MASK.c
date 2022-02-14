
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tc_mqprio_qopt {unsigned int num_tc; int * offset; int * count; int prio_tc_map; int member_0; } ;
struct sk_buff {int len; } ;
struct netdev_qos_info {TYPE_2__* tc_to_txq; int prio_tc_map; } ;
struct net_device {unsigned int num_tx_queues; } ;
struct TYPE_10__ {scalar_t__ overlimits; scalar_t__ requeues; scalar_t__ drops; scalar_t__ backlog; scalar_t__ qlen; scalar_t__ packets; scalar_t__ bytes; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_5__ qstats; TYPE_5__ bstats; TYPE_1__ q; } ;
typedef int opt ;
struct TYPE_9__ {struct netdev_qos_info qos_data; } ;
struct TYPE_8__ {struct Qdisc* qdisc; } ;
struct TYPE_7__ {int offset; int count; } ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_mqprio_qopt*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (struct net_device*) ;
 TYPE_3__* FUNC_5 (struct net_device*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,unsigned char*) ;
 struct net_device* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*) ;
 unsigned char* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct net_device *VAR_3 = FUNC_7(VAR_1);
 struct netdev_qos_info *VAR_4 = &FUNC_3(VAR_3)->qos_data;
 unsigned char *VAR_5 = FUNC_9(VAR_2);
 struct tc_mqprio_qopt VAR_6 = { 0 };
 struct Qdisc *VAR_7;
 unsigned int VAR_8;

 VAR_1->q.qlen = 0;
 FUNC_2(&VAR_1->bstats, 0, sizeof(VAR_1->bstats));
 FUNC_2(&VAR_1->qstats, 0, sizeof(VAR_1->qstats));

 for (VAR_8 = 0; VAR_8 < VAR_3->num_tx_queues; VAR_8++) {
  VAR_7 = FUNC_5(VAR_3, VAR_8)->qdisc;
  FUNC_10(FUNC_8(VAR_7));
  VAR_1->q.qlen += VAR_7->q.qlen;
  VAR_1->bstats.bytes += VAR_7->bstats.bytes;
  VAR_1->bstats.packets += VAR_7->bstats.packets;
  VAR_1->qstats.qlen += VAR_7->qstats.qlen;
  VAR_1->qstats.backlog += VAR_7->qstats.backlog;
  VAR_1->qstats.drops += VAR_7->qstats.drops;
  VAR_1->qstats.requeues += VAR_7->qstats.requeues;
  VAR_1->qstats.overlimits += VAR_7->qstats.overlimits;
  FUNC_11(FUNC_8(VAR_7));
 }

 VAR_6.num_tc = FUNC_4(VAR_3);
 FUNC_1(VAR_6.prio_tc_map, VAR_4->prio_tc_map, sizeof(VAR_6.prio_tc_map));

 for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_3); VAR_8++) {
  VAR_6.count[VAR_8] = VAR_4->tc_to_txq[VAR_8].count;
  VAR_6.offset[VAR_8] = VAR_4->tc_to_txq[VAR_8].offset;
 }

 FUNC_0(VAR_2, VAR_0, sizeof(VAR_6), &VAR_6);

 return VAR_2->len;
nla_put_failure:
 FUNC_6(VAR_2, VAR_5);
 return -1;
}
