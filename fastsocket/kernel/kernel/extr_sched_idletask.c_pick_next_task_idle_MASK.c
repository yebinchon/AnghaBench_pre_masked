
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rq {struct task_struct* idle; } ;


 int FUNC_0 (struct rq*) ;
 int VAR_0 ;
 int FUNC_1 (struct rq*,int ) ;

__attribute__((used)) static struct task_struct *FUNC_2(struct rq *VAR_1)
{
 FUNC_1(VAR_1, VAR_0);

 FUNC_0(VAR_1);
 return VAR_1->idle;
}
