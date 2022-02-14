
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int on_rq; } ;
struct task_struct {int sched_reset_on_fork; int policy; scalar_t__ rt_priority; int prio; int pi_lock; struct sched_class* sched_class; TYPE_4__ se; TYPE_2__* signal; scalar_t__ mm; } ;
struct sched_param {scalar_t__ sched_priority; } ;
struct sched_class {int (* set_curr_task ) (struct rq*) ;int (* put_prev_task ) (struct rq*,struct task_struct*) ;} ;
struct rq {struct task_struct* stop; } ;
struct TYPE_9__ {scalar_t__ rt_runtime; } ;
struct TYPE_11__ {TYPE_3__ rt_bandwidth; } ;
struct TYPE_8__ {TYPE_1__* rlim; } ;
struct TYPE_7__ {unsigned long rlim_cur; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct rq*,struct task_struct*,int,unsigned long) ;
 struct rq* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct rq*) ;
 int FUNC_4 (struct rq*,struct task_struct*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rq*,struct task_struct*,struct sched_class const*,int,int) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct rq*,struct task_struct*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct task_struct*,unsigned long*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct task_struct*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct task_struct*,int,struct sched_param*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct rq*,struct task_struct*) ;
 int FUNC_18 (struct rq*) ;
 int FUNC_19 (struct rq*,struct task_struct*) ;
 TYPE_5__* FUNC_20 (struct task_struct*) ;
 int FUNC_21 (TYPE_5__*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static int FUNC_24(struct task_struct *VAR_13, int VAR_14,
    struct sched_param *VAR_15, bool VAR_16)
{
 int VAR_17, VAR_18, VAR_19 = -1, VAR_20, VAR_21;
 unsigned long VAR_22;
 const struct sched_class *VAR_23;
 struct rq *VAR_24;
 int VAR_25;


 FUNC_0(FUNC_9());
recheck:

 if (VAR_14 < 0) {
  VAR_25 = VAR_13->sched_reset_on_fork;
  VAR_14 = VAR_19 = VAR_13->policy;
 } else {
  VAR_25 = !!(VAR_14 & VAR_11);
  VAR_14 &= ~VAR_11;

  if (VAR_14 != VAR_8 && VAR_14 != VAR_12 &&
    VAR_14 != VAR_10 && VAR_14 != VAR_7 &&
    VAR_14 != VAR_9)
   return -VAR_1;
 }






 if (VAR_15->sched_priority < 0 ||
     (VAR_13->mm && VAR_15->sched_priority > VAR_5-1) ||
     (!VAR_13->mm && VAR_15->sched_priority > VAR_4-1))
  return -VAR_1;
 if (FUNC_13(VAR_14) != (VAR_15->sched_priority != 0))
  return -VAR_1;




 if (VAR_16 && !FUNC_5(VAR_0)) {
  if (FUNC_13(VAR_14)) {
   unsigned long VAR_26;

   if (!FUNC_10(VAR_13, &VAR_22))
    return -VAR_3;
   VAR_26 = VAR_13->signal->rlim[VAR_6].rlim_cur;
   FUNC_23(VAR_13, &VAR_22);


   if (VAR_14 != VAR_13->policy && !VAR_26)
    return -VAR_2;


   if (VAR_15->sched_priority > VAR_13->rt_priority &&
       VAR_15->sched_priority > VAR_26)
    return -VAR_2;
  }




  if (VAR_13->policy == VAR_9 && VAR_14 != VAR_9)
   return -VAR_2;


  if (!FUNC_7(VAR_13))
   return -VAR_2;


  if (VAR_13->sched_reset_on_fork && !VAR_25)
   return -VAR_2;
 }

 if (VAR_16) {
  VAR_17 = FUNC_14(VAR_13, VAR_14, VAR_15);
  if (VAR_17)
   return VAR_17;
 }





 FUNC_15(&VAR_13->pi_lock, VAR_22);




 VAR_24 = FUNC_2(VAR_13);




 if (VAR_13 == VAR_24->stop) {
  FUNC_3(VAR_24);
  FUNC_16(&VAR_13->pi_lock, VAR_22);
  return -VAR_1;
 }


 if (FUNC_22(VAR_19 != -1 && VAR_19 != VAR_13->policy)) {
  VAR_14 = VAR_19 = -1;
  FUNC_3(VAR_24);
  FUNC_16(&VAR_13->pi_lock, VAR_22);
  goto recheck;
 }
 VAR_20 = VAR_13->se.on_rq;
 VAR_21 = FUNC_19(VAR_24, VAR_13);
 if (VAR_20)
  FUNC_8(VAR_24, VAR_13, 0);
 if (VAR_21)
  VAR_13->sched_class->put_prev_task(VAR_24, VAR_13);

 VAR_13->sched_reset_on_fork = VAR_25;

 VAR_18 = VAR_13->prio;
 VAR_23 = VAR_13->sched_class;
 FUNC_1(VAR_24, VAR_13, VAR_14, VAR_15->sched_priority);

 if (VAR_21)
  VAR_13->sched_class->set_curr_task(VAR_24);
 if (VAR_20) {
  FUNC_4(VAR_24, VAR_13, 0);

  FUNC_6(VAR_24, VAR_13, VAR_23, VAR_18, VAR_21);
 }
 FUNC_3(VAR_24);
 FUNC_16(&VAR_13->pi_lock, VAR_22);

 FUNC_12(VAR_13);

 return 0;
}
