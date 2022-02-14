
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int vruntime; } ;
struct task_struct {struct sched_entity se; } ;
struct rq {int lock; int curr; } ;
struct cfs_rq {scalar_t__ min_vruntime; struct sched_entity* curr; } ;


 int FUNC_0 (struct task_struct*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sched_entity*,struct sched_entity*) ;
 int FUNC_2 (struct cfs_rq*,struct sched_entity*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ VAR_1 ;
 struct cfs_rq* FUNC_10 (int ) ;
 struct rq* FUNC_11 () ;
 int FUNC_12 (struct cfs_rq*) ;
 int FUNC_13 (struct rq*) ;

__attribute__((used)) static void FUNC_14(struct task_struct *VAR_2)
{
 struct cfs_rq *VAR_3;
 struct sched_entity *VAR_4 = &VAR_2->se, *VAR_5;
 int VAR_6 = FUNC_6();
 struct rq *VAR_7 = FUNC_11();
 unsigned long VAR_8;

 FUNC_7(&VAR_7->lock, VAR_8);

 FUNC_13(VAR_7);

 VAR_3 = FUNC_10(VAR_0);
 VAR_5 = VAR_3->curr;







 FUNC_3();
 FUNC_0(VAR_2, VAR_6);
 FUNC_4();

 FUNC_12(VAR_3);

 if (VAR_5)
  VAR_4->vruntime = VAR_5->vruntime;
 FUNC_2(VAR_3, VAR_4, 1);

 if (VAR_1 && VAR_5 && FUNC_1(VAR_5, VAR_4)) {




  FUNC_9(VAR_5->vruntime, VAR_4->vruntime);
  FUNC_5(VAR_7->curr);
 }

 VAR_4->vruntime -= VAR_3->min_vruntime;

 FUNC_8(&VAR_7->lock, VAR_8);
}
