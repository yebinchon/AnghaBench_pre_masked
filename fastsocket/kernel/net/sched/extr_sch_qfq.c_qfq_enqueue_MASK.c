
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qfq_sched {int dummy; } ;
struct TYPE_12__ {int packets; int bytes; } ;
struct TYPE_10__ {int drops; } ;
struct TYPE_9__ {int classid; } ;
struct qfq_class {scalar_t__ lmax; TYPE_8__* qdisc; TYPE_4__ bstats; TYPE_2__ qstats; int inv_w; TYPE_1__ common; } ;
struct TYPE_14__ {int qlen; } ;
struct TYPE_13__ {int packets; int bytes; } ;
struct TYPE_11__ {int drops; } ;
struct Qdisc {TYPE_6__ q; TYPE_5__ bstats; TYPE_3__ qstats; } ;
struct TYPE_15__ {int qlen; } ;
struct TYPE_16__ {TYPE_7__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct sk_buff*,TYPE_8__*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct qfq_sched* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct qfq_sched*,struct qfq_class*,scalar_t__) ;
 struct qfq_class* FUNC_7 (struct sk_buff*,struct Qdisc*,int*) ;
 int FUNC_8 (struct qfq_sched*,struct qfq_class*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_2, struct Qdisc *VAR_3)
{
 struct qfq_sched *VAR_4 = FUNC_5(VAR_3);
 struct qfq_class *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_7(VAR_2, VAR_3, &VAR_6);
 if (VAR_5 == ((void*)0)) {
  if (VAR_6 & VAR_1)
   VAR_3->qstats.drops++;
  FUNC_0(VAR_2);
  return VAR_6;
 }
 FUNC_2("qfq_enqueue: cl = %x\n", VAR_5->common.classid);

 if (FUNC_9(VAR_5->lmax < FUNC_4(VAR_2))) {
  FUNC_2("qfq: increasing maxpkt from %u to %u for class %u",
     VAR_5->lmax, FUNC_4(VAR_2), VAR_5->common.classid);
  FUNC_8(VAR_4, VAR_5, VAR_5->inv_w,
         FUNC_4(VAR_2), 0);
 }

 VAR_6 = FUNC_3(VAR_2, VAR_5->qdisc);
 if (FUNC_9(VAR_6 != VAR_0)) {
  FUNC_2("qfq_enqueue: enqueue failed %d\n", VAR_6);
  if (FUNC_1(VAR_6)) {
   VAR_5->qstats.drops++;
   VAR_3->qstats.drops++;
  }
  return VAR_6;
 }

 VAR_5->bstats.bytes += FUNC_4(VAR_2);
 VAR_5->bstats.packets++;
 VAR_3->bstats.bytes += FUNC_4(VAR_2);
 VAR_3->bstats.packets++;
 ++VAR_3->q.qlen;


 if (VAR_5->qdisc->q.qlen != 1)
  return VAR_6;


 FUNC_6(VAR_4, VAR_5, FUNC_4(VAR_2));

 return VAR_6;
}
