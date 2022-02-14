
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xstats ;
struct tc_hfsc_stats {int rtwork; int work; int period; int level; } ;
struct TYPE_6__ {int qlen; } ;
struct hfsc_class {TYPE_3__ qstats; int rate_est; int bstats; int cl_cumul; int cl_total; int cl_vtperiod; int level; TYPE_2__* qdisc; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_5__ {TYPE_1__ q; } ;


 int FUNC_0 (struct gnet_dump*,struct tc_hfsc_stats*,int) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;

__attribute__((used)) static int
FUNC_4(struct Qdisc *VAR_0, unsigned long VAR_1,
 struct gnet_dump *VAR_2)
{
 struct hfsc_class *VAR_3 = (struct hfsc_class *)VAR_1;
 struct tc_hfsc_stats VAR_4;

 VAR_3->qstats.qlen = VAR_3->qdisc->q.qlen;
 VAR_4.level = VAR_3->level;
 VAR_4.period = VAR_3->cl_vtperiod;
 VAR_4.work = VAR_3->cl_total;
 VAR_4.rtwork = VAR_3->cl_cumul;

 if (FUNC_1(VAR_2, &VAR_3->bstats) < 0 ||
     FUNC_3(VAR_2, &VAR_3->rate_est) < 0 ||
     FUNC_2(VAR_2, &VAR_3->qstats) < 0)
  return -1;

 return FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
}
