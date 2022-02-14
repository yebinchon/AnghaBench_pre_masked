
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gnet_dump {int dummy; } ;
struct cbq_sched_data {scalar_t__ now; } ;
struct TYPE_8__ {scalar_t__ undertime; int avgidle; } ;
struct TYPE_7__ {int qlen; } ;
struct cbq_class {scalar_t__ undertime; TYPE_4__ xstats; TYPE_3__ qstats; int rate_est; int bstats; int avgidle; TYPE_2__* q; } ;
struct Qdisc {int dummy; } ;
struct TYPE_5__ {int qlen; } ;
struct TYPE_6__ {TYPE_1__ q; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gnet_dump*,TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;
 struct cbq_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_5(struct Qdisc *VAR_1, unsigned long VAR_2,
 struct gnet_dump *VAR_3)
{
 struct cbq_sched_data *VAR_4 = FUNC_4(VAR_1);
 struct cbq_class *VAR_5 = (struct cbq_class*)VAR_2;

 VAR_5->qstats.qlen = VAR_5->q->q.qlen;
 VAR_5->xstats.avgidle = VAR_5->avgidle;
 VAR_5->xstats.undertime = 0;

 if (VAR_5->undertime != VAR_0)
  VAR_5->xstats.undertime = VAR_5->undertime - VAR_4->now;

 if (FUNC_1(VAR_3, &VAR_5->bstats) < 0 ||
     FUNC_3(VAR_3, &VAR_5->rate_est) < 0 ||
     FUNC_2(VAR_3, &VAR_5->qstats) < 0)
  return -1;

 return FUNC_0(VAR_3, &VAR_5->xstats, sizeof(VAR_5->xstats));
}
