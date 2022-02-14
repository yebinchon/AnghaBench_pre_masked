
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int exit_code; } ;
struct ptrace_context {int stop_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct ptrace_context *VAR_3,
     struct task_struct *VAR_4)
{






 VAR_4->exit_code = VAR_3->stop_code & VAR_1;
 FUNC_0(!VAR_4->exit_code);

 FUNC_4(&VAR_2);




 FUNC_2();




 if (FUNC_6(VAR_4))
  FUNC_1(VAR_4, VAR_0);
 FUNC_5(&VAR_2);
 FUNC_3();
}
