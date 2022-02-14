
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int on_rq; } ;
struct task_struct {scalar_t__ policy; struct sched_entity se; } ;
struct rq {struct task_struct* idle; struct task_struct* curr; } ;
struct cfs_rq {scalar_t__ nr_running; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sched_entity*) ;
 scalar_t__ FUNC_2 (struct sched_entity*) ;
 int FUNC_3 (struct sched_entity**,struct sched_entity**) ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (struct sched_entity*) ;
 int FUNC_7 (struct sched_entity*) ;
 struct cfs_rq* FUNC_8 (struct task_struct*) ;
 scalar_t__ FUNC_9 (struct task_struct*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct cfs_rq*) ;
 int FUNC_13 (struct sched_entity*,struct sched_entity*) ;

__attribute__((used)) static void FUNC_14(struct rq *VAR_7, struct task_struct *VAR_8, int VAR_9)
{
 struct task_struct *VAR_10 = VAR_7->curr;
 struct sched_entity *VAR_11 = &VAR_10->se, *VAR_12 = &VAR_8->se;
 struct cfs_rq *VAR_13 = FUNC_8(VAR_10);
 int VAR_14 = VAR_13->nr_running >= VAR_6;
 int VAR_15 = 0;

 if (FUNC_11(VAR_11 == VAR_12))
  return;







 if (FUNC_11(FUNC_10(FUNC_1(VAR_12))))
  return;

 if (FUNC_5(VAR_1) && VAR_14 && !(VAR_9 & VAR_5)) {
  FUNC_7(VAR_12);
  VAR_15 = 1;
 }
 if (FUNC_9(VAR_10))
  return;





 if (FUNC_11(VAR_8->policy != VAR_3))
  return;


 if (FUNC_11(VAR_10->policy == VAR_2))
  goto preempt;

 if (!FUNC_5(VAR_4))
  return;

 FUNC_12(VAR_13);
 FUNC_3(&VAR_11, &VAR_12);
 FUNC_0(!VAR_12);
 if (FUNC_13(VAR_11, VAR_12) == 1) {




  if (!VAR_15)
   FUNC_7(VAR_12);
  goto preempt;
 }

 return;

preempt:
 FUNC_4(VAR_10);
 if (FUNC_11(!VAR_11->on_rq || VAR_10 == VAR_7->idle))
  return;

 if (FUNC_5(VAR_0) && VAR_14 && FUNC_2(VAR_11))
  FUNC_6(VAR_11);
}
