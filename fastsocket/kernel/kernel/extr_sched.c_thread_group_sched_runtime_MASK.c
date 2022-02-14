
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct task_struct {int dummy; } ;
struct task_cputime {unsigned long long sum_exec_runtime; } ;
struct rq {int dummy; } ;


 unsigned long long FUNC_0 (struct task_struct*,struct rq*) ;
 struct rq* FUNC_1 (struct task_struct*,unsigned long*) ;
 int FUNC_2 (struct rq*,unsigned long*) ;
 int FUNC_3 (struct task_struct*,struct task_cputime*) ;

unsigned long long FUNC_4(struct task_struct *VAR_0)
{
 struct task_cputime VAR_1;
 unsigned long VAR_2;
 struct rq *VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 FUNC_3(VAR_0, &VAR_1);
 VAR_4 = VAR_1.sum_exec_runtime + FUNC_0(VAR_0, VAR_3);
 FUNC_2(VAR_3, &VAR_2);

 return VAR_4;
}
