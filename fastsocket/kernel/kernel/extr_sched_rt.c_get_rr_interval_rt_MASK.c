
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ policy; } ;
struct rq {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

unsigned int FUNC_0(struct rq *VAR_2, struct task_struct *VAR_3)
{



 if (VAR_3->policy == VAR_0)
  return VAR_1;
 else
  return 0;
}
