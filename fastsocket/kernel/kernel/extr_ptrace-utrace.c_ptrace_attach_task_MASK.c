
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct task_struct {int exit_state; } ;


 scalar_t__ FUNC_0 (struct utrace_engine*) ;
 int FUNC_1 (struct utrace_engine*) ;
 int FUNC_2 (int) ;
 struct utrace_engine* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,struct utrace_engine*,int) ;
 int FUNC_5 (struct utrace_engine*) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_0, int VAR_1)
{
 struct utrace_engine *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);




 VAR_3 = FUNC_4(VAR_0, VAR_2, VAR_1);
 FUNC_2(VAR_3 && !VAR_0->exit_state);
 FUNC_5(VAR_2);
 return 0;
}
