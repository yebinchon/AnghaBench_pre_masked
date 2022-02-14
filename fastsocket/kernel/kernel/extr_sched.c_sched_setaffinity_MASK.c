
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cpumask {int dummy; } ;
typedef int pid_t ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int ,struct cpumask const*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct task_struct*,int ) ;
 struct task_struct* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct task_struct*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct task_struct*,int ,int *) ;
 int FUNC_16 (struct task_struct*,int ) ;

long FUNC_17(pid_t VAR_5, const struct cpumask *VAR_6)
{
 cpumask_var_t VAR_7, VAR_8;
 struct task_struct *VAR_9;
 int VAR_10;

 FUNC_9();
 FUNC_13();

 VAR_9 = FUNC_7(VAR_5);
 if (!VAR_9) {
  FUNC_14();
  FUNC_11();
  return -VAR_3;
 }


 FUNC_10(VAR_9);
 FUNC_14();

 if (!FUNC_0(&VAR_7, VAR_4)) {
  VAR_10 = -VAR_1;
  goto out_put_task;
 }
 if (!FUNC_0(&VAR_8, VAR_4)) {
  VAR_10 = -VAR_1;
  goto out_free_cpus_allowed;
 }
 VAR_10 = -VAR_2;
 if (!FUNC_2(VAR_9) && !FUNC_1(VAR_0))
  goto out_unlock;

 VAR_10 = FUNC_15(VAR_9, 0, ((void*)0));
 if (VAR_10)
  goto out_unlock;

 FUNC_6(VAR_9, VAR_7);
 FUNC_3(VAR_8, VAR_6, VAR_7);
 again:
 VAR_10 = FUNC_16(VAR_9, VAR_8);

 if (!VAR_10) {
  FUNC_6(VAR_9, VAR_7);
  if (!FUNC_5(VAR_8, VAR_7)) {





   FUNC_4(VAR_8, VAR_7);
   goto again;
  }
 }
out_unlock:
 FUNC_8(VAR_8);
out_free_cpus_allowed:
 FUNC_8(VAR_7);
out_put_task:
 FUNC_12(VAR_9);
 FUNC_11();
 return VAR_10;
}
