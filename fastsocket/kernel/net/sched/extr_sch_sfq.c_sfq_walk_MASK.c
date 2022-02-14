
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfq_sched_data {scalar_t__* ht; } ;
struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,unsigned int,struct qdisc_walker*) ;} ;
struct Qdisc {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct sfq_sched_data* FUNC_0 (struct Qdisc*) ;
 scalar_t__ FUNC_1 (struct Qdisc*,unsigned int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_2, struct qdisc_walker *VAR_3)
{
 struct sfq_sched_data *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;

 if (VAR_3->stop)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4->ht[VAR_5] == VAR_0 ||
      VAR_3->count < VAR_3->skip) {
   VAR_3->count++;
   continue;
  }
  if (VAR_3->fn(VAR_2, VAR_5 + 1, VAR_3) < 0) {
   VAR_3->stop = 1;
   break;
  }
  VAR_3->count++;
 }
}
