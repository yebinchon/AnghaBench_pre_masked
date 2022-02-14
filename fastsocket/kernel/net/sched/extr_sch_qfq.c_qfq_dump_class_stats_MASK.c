
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xstats ;
struct tc_qfq_stats {int weight; int lmax; } ;
struct qfq_class {int inv_w; TYPE_2__* qdisc; int rate_est; int bstats; int lmax; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_6__ {int qlen; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_5__ {TYPE_3__ qstats; TYPE_1__ q; } ;


 int VAR_0 ;
 int FUNC_0 (struct gnet_dump*,struct tc_qfq_stats*,int) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;
 int FUNC_4 (struct tc_qfq_stats*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_1, unsigned long VAR_2,
    struct gnet_dump *VAR_3)
{
 struct qfq_class *VAR_4 = (struct qfq_class *)VAR_2;
 struct tc_qfq_stats VAR_5;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_4->qdisc->qstats.qlen = VAR_4->qdisc->q.qlen;

 VAR_5.weight = VAR_0/VAR_4->inv_w;
 VAR_5.lmax = VAR_4->lmax;

 if (FUNC_1(VAR_3, &VAR_4->bstats) < 0 ||
     FUNC_3(VAR_3, &VAR_4->rate_est) < 0 ||
     FUNC_2(VAR_3, &VAR_4->qdisc->qstats) < 0)
  return -1;

 return FUNC_0(VAR_3, &VAR_5, sizeof(VAR_5));
}
