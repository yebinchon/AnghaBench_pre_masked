
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {unsigned long long sum_exec_runtime; } ;
struct task_struct {TYPE_1__ se; } ;
struct rq {int dummy; } ;


 unsigned long long FUNC_0 (struct task_struct*,struct rq*) ;
 struct rq* FUNC_1 (struct task_struct*,unsigned long*) ;
 int FUNC_2 (struct rq*,unsigned long*) ;

unsigned long long FUNC_3(struct task_struct *VAR_0)
{
 unsigned long VAR_1;
 struct rq *VAR_2;
 u64 VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 VAR_3 = VAR_0->se.sum_exec_runtime + FUNC_0(VAR_0, VAR_2);
 FUNC_2(VAR_2, &VAR_1);

 return VAR_3;
}
