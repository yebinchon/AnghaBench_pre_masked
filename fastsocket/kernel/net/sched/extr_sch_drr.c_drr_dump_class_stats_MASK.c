
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xstats ;
struct tc_drr_stats {int deficit; } ;
struct gnet_dump {int dummy; } ;
struct drr_class {TYPE_2__* qdisc; int rate_est; int bstats; int deficit; } ;
struct Qdisc {int dummy; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct TYPE_5__ {TYPE_3__ qstats; TYPE_1__ q; } ;


 int FUNC_0 (struct gnet_dump*,struct tc_drr_stats*,int) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;
 int FUNC_4 (struct tc_drr_stats*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_0, unsigned long VAR_1,
    struct gnet_dump *VAR_2)
{
 struct drr_class *VAR_3 = (struct drr_class *)VAR_1;
 struct tc_drr_stats VAR_4;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 if (VAR_3->qdisc->q.qlen) {
  VAR_4.deficit = VAR_3->deficit;
  VAR_3->qdisc->qstats.qlen = VAR_3->qdisc->q.qlen;
 }

 if (FUNC_1(VAR_2, &VAR_3->bstats) < 0 ||
     FUNC_3(VAR_2, &VAR_3->rate_est) < 0 ||
     FUNC_2(VAR_2, &VAR_3->qdisc->qstats) < 0)
  return -1;

 return FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
}
