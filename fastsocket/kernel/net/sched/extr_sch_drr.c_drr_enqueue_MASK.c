
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct drr_sched {int active; } ;
struct TYPE_11__ {unsigned int bytes; int packets; } ;
struct TYPE_8__ {int drops; } ;
struct drr_class {TYPE_4__ bstats; int quantum; int deficit; int alist; TYPE_7__* qdisc; TYPE_1__ qstats; } ;
struct TYPE_13__ {int qlen; } ;
struct TYPE_12__ {unsigned int bytes; int packets; } ;
struct TYPE_9__ {int drops; } ;
struct Qdisc {TYPE_6__ q; TYPE_5__ bstats; TYPE_2__ qstats; } ;
struct TYPE_10__ {int qlen; } ;
struct TYPE_14__ {TYPE_3__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drr_class* FUNC_0 (struct sk_buff*,struct Qdisc*,int*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,TYPE_7__*) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 struct drr_sched* FUNC_6 (struct Qdisc*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2, struct Qdisc *VAR_3)
{
 struct drr_sched *VAR_4 = FUNC_6(VAR_3);
 struct drr_class *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_7);
 if (VAR_5 == ((void*)0)) {
  if (VAR_7 & VAR_1)
   VAR_3->qstats.drops++;
  FUNC_1(VAR_2);
  return VAR_7;
 }

 VAR_6 = FUNC_5(VAR_2);
 VAR_7 = FUNC_4(VAR_2, VAR_5->qdisc);
 if (FUNC_7(VAR_7 != VAR_0)) {
  if (FUNC_3(VAR_7)) {
   VAR_5->qstats.drops++;
   VAR_3->qstats.drops++;
  }
  return VAR_7;
 }

 if (VAR_5->qdisc->q.qlen == 1) {
  FUNC_2(&VAR_5->alist, &VAR_4->active);
  VAR_5->deficit = VAR_5->quantum;
 }

 VAR_5->bstats.packets++;
 VAR_5->bstats.bytes += VAR_6;
 VAR_3->bstats.packets++;
 VAR_3->bstats.bytes += VAR_6;

 VAR_3->q.qlen++;
 return VAR_7;
}
