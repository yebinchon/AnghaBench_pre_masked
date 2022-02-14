
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct sched_entity {int vruntime; scalar_t__ exec_start; } ;
struct cfs_rq {struct sched_entity* curr; } ;
struct TYPE_2__ {scalar_t__ clock; } ;


 int FUNC_0 (struct cfs_rq*,struct sched_entity*,unsigned long) ;
 int FUNC_1 (struct cfs_rq*,unsigned long) ;
 int FUNC_2 (struct task_struct*,unsigned long) ;
 int FUNC_3 (struct task_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (struct sched_entity*) ;
 TYPE_1__* FUNC_5 (struct cfs_rq*) ;
 struct task_struct* FUNC_6 (struct sched_entity*) ;
 int FUNC_7 (struct task_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct cfs_rq *VAR_0)
{
 struct sched_entity *VAR_1 = VAR_0->curr;
 u64 VAR_2 = FUNC_5(VAR_0)->clock;
 unsigned long VAR_3;

 if (FUNC_8(!VAR_1))
  return;






 VAR_3 = (unsigned long)(VAR_2 - VAR_1->exec_start);
 if (!VAR_3)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_3);
 VAR_1->exec_start = VAR_2;

 if (FUNC_4(VAR_1)) {
  struct task_struct *VAR_4 = FUNC_6(VAR_1);

  FUNC_7(VAR_4, VAR_3, VAR_1->vruntime);
  FUNC_3(VAR_4, VAR_3);
  FUNC_2(VAR_4, VAR_3);
 }

 FUNC_1(VAR_0, VAR_3);
}
