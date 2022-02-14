
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rq {struct task_struct* curr; } ;



__attribute__((used)) static inline int FUNC_0(struct rq *VAR_0, struct task_struct *VAR_1)
{
 return VAR_0->curr == VAR_1;
}
