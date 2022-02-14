
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_walker {int stop; unsigned int count; unsigned int skip; scalar_t__ (* fn ) (struct Qdisc*,unsigned int,struct qdisc_walker*) ;} ;
struct net_device {unsigned int num_tx_queues; } ;
struct Qdisc {int dummy; } ;


 struct net_device* FUNC_0 (struct Qdisc*) ;
 scalar_t__ FUNC_1 (struct Qdisc*,unsigned int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0, struct qdisc_walker *VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;

 if (VAR_1->stop)
  return;

 VAR_1->count = VAR_1->skip;
 for (VAR_3 = VAR_1->skip; VAR_3 < VAR_2->num_tx_queues; VAR_3++) {
  if (VAR_1->fn(VAR_0, VAR_3 + 1, VAR_1) < 0) {
   VAR_1->stop = 1;
   break;
  }
  VAR_1->count++;
 }
}
