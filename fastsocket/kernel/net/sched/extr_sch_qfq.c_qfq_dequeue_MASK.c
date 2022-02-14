
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int dummy; } ;
struct qfq_sched {scalar_t__ V; int * bitmaps; } ;
struct qfq_group {scalar_t__ F; unsigned long long slot_shift; scalar_t__ S; int index; } ;
struct qfq_class {int S; scalar_t__ F; int qdisc; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,unsigned int,unsigned long long,unsigned long long) ;
 struct sk_buff* FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 struct qfq_sched* FUNC_6 (struct Qdisc*) ;
 unsigned int FUNC_7 (struct qfq_sched*,struct qfq_group*) ;
 struct qfq_group* FUNC_8 (struct qfq_sched*,int ) ;
 scalar_t__ FUNC_9 (int ,unsigned long long) ;
 struct qfq_class* FUNC_10 (struct qfq_group*) ;
 struct qfq_class* FUNC_11 (struct qfq_group*) ;
 int FUNC_12 (struct qfq_sched*,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (struct qfq_group*,struct qfq_class*) ;
 int FUNC_14 (struct qfq_sched*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_15(struct Qdisc *VAR_2)
{
 struct qfq_sched *VAR_3 = FUNC_6(VAR_2);
 struct qfq_group *VAR_4;
 struct qfq_class *VAR_5;
 struct sk_buff *VAR_6;
 unsigned int VAR_7;
 u64 VAR_8;

 if (!VAR_3->bitmaps[VAR_0])
  return ((void*)0);

 VAR_4 = FUNC_8(VAR_3, VAR_3->bitmaps[VAR_0]);

 VAR_5 = FUNC_10(VAR_4);
 VAR_6 = FUNC_4(VAR_5->qdisc);
 if (!VAR_6) {
  FUNC_0(1, "qfq_dequeue: non-workconserving leaf\n");
  return ((void*)0);
 }

 VAR_2->q.qlen--;

 VAR_8 = VAR_3->V;
 VAR_7 = FUNC_5(VAR_6);
 VAR_3->V += (u64)VAR_7 * VAR_1;
 FUNC_3("qfq dequeue: len %u F %lld now %lld\n",
   VAR_7, (unsigned long long) VAR_5->F, (unsigned long long) VAR_3->V);

 if (FUNC_13(VAR_4, VAR_5)) {
  u64 VAR_9 = VAR_4->F;

  VAR_5 = FUNC_11(VAR_4);
  if (!VAR_5)
   FUNC_1(VAR_4->index, &VAR_3->bitmaps[VAR_0]);
  else {
   u64 VAR_10 = FUNC_9(VAR_5->S, VAR_4->slot_shift);
   unsigned int VAR_11;

   if (VAR_4->S == VAR_10)
    goto skip_unblock;
   VAR_4->S = VAR_10;
   VAR_4->F = VAR_10 + (2ULL << VAR_4->slot_shift);
   FUNC_1(VAR_4->index, &VAR_3->bitmaps[VAR_0]);
   VAR_11 = FUNC_7(VAR_3, VAR_4);
   FUNC_2(VAR_4->index, &VAR_3->bitmaps[VAR_11]);
  }

  FUNC_12(VAR_3, VAR_4->index, VAR_9);
 }

skip_unblock:
 FUNC_14(VAR_3, VAR_8);

 return VAR_6;
}
