
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct siginfo {int dummy; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct siginfo*,struct task_struct*) ;
 struct task_struct* FUNC_1 (struct pid*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(int VAR_2, struct siginfo *VAR_3, struct pid *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct task_struct *VAR_6;

 FUNC_2();
retry:
 VAR_6 = FUNC_1(VAR_4, VAR_1);
 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_6);
  if (FUNC_4(VAR_5 == -VAR_0))






   goto retry;
 }
 FUNC_3();

 return VAR_5;
}
