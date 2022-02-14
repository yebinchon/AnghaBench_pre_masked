
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; } ;
struct rq {struct task_struct* stop; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct task_struct *FUNC_0(struct rq *VAR_1)
{
 struct task_struct *VAR_2 = VAR_1->stop;

 if (VAR_2 && VAR_2->state == VAR_0)
  return VAR_2;

 return ((void*)0);
}
