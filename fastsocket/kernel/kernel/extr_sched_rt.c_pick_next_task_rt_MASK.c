
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rq {int post_schedule; } ;


 struct task_struct* FUNC_0 (struct rq*) ;
 int FUNC_1 (struct rq*,struct task_struct*) ;
 int FUNC_2 (struct rq*) ;

__attribute__((used)) static struct task_struct *FUNC_3(struct rq *VAR_0)
{
 struct task_struct *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1)
  FUNC_1(VAR_0, VAR_1);
 return VAR_1;
}
