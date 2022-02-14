
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct siginfo {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct siginfo*,struct task_struct*) ;
 int FUNC_1 (int,struct siginfo*,struct task_struct*,int) ;
 struct task_struct* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(pid_t VAR_1, pid_t VAR_2, int VAR_3, struct siginfo *VAR_4)
{
 struct task_struct *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_3();
 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 && (VAR_1 <= 0 || FUNC_5(VAR_5) == VAR_1)) {
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);




  if (!VAR_6 && VAR_3) {
   VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, 0);





   if (FUNC_6(VAR_6 == -VAR_0))
    VAR_6 = 0;
  }
 }
 FUNC_4();

 return VAR_6;
}
