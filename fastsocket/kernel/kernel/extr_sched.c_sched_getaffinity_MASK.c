
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int cpus_allowed; } ;
struct rq {int dummy; } ;
struct cpumask {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpumask*,int *,int ) ;
 struct task_struct* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*) ;
 struct rq* FUNC_7 (struct task_struct*,unsigned long*) ;
 int FUNC_8 (struct rq*,unsigned long*) ;

long FUNC_9(pid_t VAR_2, struct cpumask *VAR_3)
{
 struct task_struct *VAR_4;
 unsigned long VAR_5;
 struct rq *VAR_6;
 int VAR_7;

 FUNC_2();
 FUNC_4();

 VAR_7 = -VAR_0;
 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  goto out_unlock;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7)
  goto out_unlock;

 VAR_6 = FUNC_7(VAR_4, &VAR_5);
 FUNC_0(VAR_3, &VAR_4->cpus_allowed, VAR_1);
 FUNC_8(VAR_6, &VAR_5);

out_unlock:
 FUNC_5();
 FUNC_3();

 return VAR_7;
}
