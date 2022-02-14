
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sfq_sched_data {int max_depth; int* next; size_t tail; int* ht; size_t* hash; TYPE_4__* qs; scalar_t__ quantum; int * allot; TYPE_1__* dep; } ;
struct TYPE_7__ {unsigned int backlog; int drops; } ;
struct TYPE_6__ {int qlen; } ;
struct Qdisc {TYPE_3__ qstats; TYPE_2__ q; } ;
typedef int sfq_index ;
struct TYPE_8__ {struct sk_buff* prev; } ;
struct TYPE_5__ {int next; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,TYPE_4__*) ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 struct sfq_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct sfq_sched_data*,int) ;

__attribute__((used)) static unsigned int FUNC_5(struct Qdisc *VAR_1)
{
 struct sfq_sched_data *VAR_2 = FUNC_3(VAR_1);
 sfq_index VAR_3 = VAR_2->max_depth;
 struct sk_buff *VAR_4;
 unsigned int VAR_5;




 if (VAR_3 > 1) {
  sfq_index VAR_6 = VAR_2->dep[VAR_3 + VAR_0].next;
  VAR_4 = VAR_2->qs[VAR_6].prev;
  VAR_5 = FUNC_2(VAR_4);
  FUNC_0(VAR_4, &VAR_2->qs[VAR_6]);
  FUNC_1(VAR_4);
  FUNC_4(VAR_2, VAR_6);
  VAR_1->q.qlen--;
  VAR_1->qstats.drops++;
  VAR_1->qstats.backlog -= VAR_5;
  return VAR_5;
 }

 if (VAR_3 == 1) {

  VAR_3 = VAR_2->next[VAR_2->tail];
  VAR_2->next[VAR_2->tail] = VAR_2->next[VAR_3];
  VAR_2->allot[VAR_2->next[VAR_3]] += VAR_2->quantum;
  VAR_4 = VAR_2->qs[VAR_3].prev;
  VAR_5 = FUNC_2(VAR_4);
  FUNC_0(VAR_4, &VAR_2->qs[VAR_3]);
  FUNC_1(VAR_4);
  FUNC_4(VAR_2, VAR_3);
  VAR_1->q.qlen--;
  VAR_2->ht[VAR_2->hash[VAR_3]] = VAR_0;
  VAR_1->qstats.drops++;
  VAR_1->qstats.backlog -= VAR_5;
  return VAR_5;
 }

 return 0;
}
