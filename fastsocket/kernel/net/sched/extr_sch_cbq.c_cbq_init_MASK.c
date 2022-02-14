
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tc_ratespec {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_9__ {int classid; } ;
struct TYPE_13__ {int refcnt; int allot; int quantum; int avpkt; int minidle; TYPE_3__* R_tab; int ewma_log; int weight; int overlimit; int ovl_strategy; void* cpriority; void* priority2; void* priority; int * q; struct Qdisc* qdisc; TYPE_1__ common; struct TYPE_13__* sibling; } ;
struct TYPE_12__ {int function; } ;
struct cbq_sched_data {TYPE_6__ link; int now; int now_rt; int toplevel; TYPE_5__ delay_timer; int watchdog; int clhash; } ;
struct Qdisc {int handle; int dev_queue; } ;
struct TYPE_10__ {int rate; } ;
struct TYPE_11__ {TYPE_2__ rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct cbq_sched_data*,TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_6__*,struct tc_ratespec*) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 struct tc_ratespec* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ,int *,int ) ;
 int FUNC_10 (struct Qdisc*) ;
 TYPE_3__* FUNC_11 (struct tc_ratespec*,struct nlattr*) ;
 struct cbq_sched_data* FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int *,struct Qdisc*) ;

__attribute__((used)) static int FUNC_15(struct Qdisc *VAR_16, struct nlattr *VAR_17)
{
 struct cbq_sched_data *VAR_18 = FUNC_12(VAR_16);
 struct nlattr *VAR_19[VAR_4 + 1];
 struct tc_ratespec *VAR_20;
 int VAR_21;

 VAR_21 = FUNC_5(VAR_19, VAR_4, VAR_17, VAR_12);
 if (VAR_21 < 0)
  return VAR_21;

 if (VAR_19[VAR_6] == ((void*)0) || VAR_19[VAR_5] == ((void*)0))
  return -VAR_1;

 VAR_20 = FUNC_4(VAR_19[VAR_5]);

 if ((VAR_18->link.R_tab = FUNC_11(VAR_20, VAR_19[VAR_6])) == ((void*)0))
  return -VAR_1;

 VAR_21 = FUNC_8(&VAR_18->clhash);
 if (VAR_21 < 0)
  goto put_rtab;

 VAR_18->link.refcnt = 1;
 VAR_18->link.sibling = &VAR_18->link;
 VAR_18->link.common.classid = VAR_16->handle;
 VAR_18->link.qdisc = VAR_16;
 if (!(VAR_18->link.q = FUNC_9(FUNC_10(VAR_16), VAR_16->dev_queue,
         &VAR_15,
         VAR_16->handle)))
  VAR_18->link.q = &VAR_14;

 VAR_18->link.priority = VAR_9-1;
 VAR_18->link.priority2 = VAR_9-1;
 VAR_18->link.cpriority = VAR_9-1;
 VAR_18->link.ovl_strategy = VAR_10;
 VAR_18->link.overlimit = VAR_11;
 VAR_18->link.allot = FUNC_7(FUNC_10(VAR_16));
 VAR_18->link.quantum = VAR_18->link.allot;
 VAR_18->link.weight = VAR_18->link.R_tab->rate.rate;

 VAR_18->link.ewma_log = VAR_7;
 VAR_18->link.avpkt = VAR_18->link.allot/2;
 VAR_18->link.minidle = -0x7FFFFFFF;

 FUNC_14(&VAR_18->watchdog, VAR_16);
 FUNC_3(&VAR_18->delay_timer, VAR_0, VAR_2);
 VAR_18->delay_timer.function = VAR_13;
 VAR_18->toplevel = VAR_8;
 VAR_18->now = FUNC_6();
 VAR_18->now_rt = VAR_18->now;

 FUNC_1(&VAR_18->link);

 if (VAR_19[VAR_3])
  FUNC_2(&VAR_18->link, FUNC_4(VAR_19[VAR_3]));

 FUNC_0(VAR_18, &VAR_18->link);
 return 0;

put_rtab:
 FUNC_13(VAR_18->link.R_tab);
 return VAR_21;
}
