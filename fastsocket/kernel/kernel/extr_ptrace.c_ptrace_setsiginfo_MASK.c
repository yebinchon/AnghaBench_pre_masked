
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * last_siginfo; } ;
typedef int siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct task_struct*,unsigned long*) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_2, const siginfo_t *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = -VAR_1;

 if (FUNC_1(VAR_2, &VAR_4)) {
  VAR_5 = -VAR_0;
  if (FUNC_0(VAR_2->last_siginfo != ((void*)0))) {
   *VAR_2->last_siginfo = *VAR_3;
   VAR_5 = 0;
  }
  FUNC_2(VAR_2, &VAR_4);
 }
 return VAR_5;
}
