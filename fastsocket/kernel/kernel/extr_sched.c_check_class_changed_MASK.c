
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct sched_class const* sched_class; } ;
struct sched_class {int (* prio_changed ) (struct rq*,struct task_struct*,int,int) ;int (* switched_to ) (struct rq*,struct task_struct*,int) ;int (* switched_from ) (struct rq*,struct task_struct*,int) ;} ;
struct rq {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct rq*,struct task_struct*,int) ;
 int FUNC_2 (struct rq*,struct task_struct*,int) ;
 int FUNC_3 (struct rq*,struct task_struct*,int,int) ;

__attribute__((used)) static inline void FUNC_4(struct rq *VAR_0, struct task_struct *VAR_1,
           const struct sched_class *VAR_2,
           int VAR_3, int VAR_4)
{
 if (VAR_2 != VAR_1->sched_class) {





  FUNC_0(VAR_1);

  if (VAR_2->switched_from)
   VAR_2->switched_from(VAR_0, VAR_1, VAR_4);
  VAR_1->sched_class->switched_to(VAR_0, VAR_1, VAR_4);
 } else
  VAR_1->sched_class->prio_changed(VAR_0, VAR_1, VAR_3, VAR_4);
}
