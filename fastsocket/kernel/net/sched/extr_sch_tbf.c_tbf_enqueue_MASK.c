
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tbf_sched_data {scalar_t__ max_size; int qdisc; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int packets; int bytes; } ;
struct TYPE_5__ {int qlen; } ;
struct TYPE_4__ {int drops; } ;
struct Qdisc {TYPE_3__ bstats; TYPE_2__ q; TYPE_1__ qstats; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct tbf_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct Qdisc*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, struct Qdisc* VAR_1)
{
 struct tbf_sched_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 if (FUNC_2(VAR_0) > VAR_2->max_size) {
  if (FUNC_5(VAR_0))
   return FUNC_6(VAR_0, VAR_1);
  return FUNC_4(VAR_0, VAR_1);
 }
 VAR_3 = FUNC_1(VAR_0, VAR_2->qdisc);
 if (VAR_3 != 0) {
  if (FUNC_0(VAR_3))
   VAR_1->qstats.drops++;
  return VAR_3;
 }

 VAR_1->q.qlen++;
 VAR_1->bstats.bytes += FUNC_2(VAR_0);
 VAR_1->bstats.packets++;
 return 0;
}
