
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int,struct sched_param*) ;
 int FUNC_1 (struct task_struct*,int ) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_1, int VAR_2, struct sched_param *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_1, VAR_0);
}
