
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct siginfo {int dummy; } ;


 int FUNC_0 (int,struct siginfo*,struct task_struct*) ;
 int FUNC_1 (int,struct siginfo*,struct task_struct*,int) ;

int FUNC_2(int VAR_0, struct siginfo *VAR_1, struct task_struct *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (!VAR_3 && VAR_0)
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 1);

 return VAR_3;
}
