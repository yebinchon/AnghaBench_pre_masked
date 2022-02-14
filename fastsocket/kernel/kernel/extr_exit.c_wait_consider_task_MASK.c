
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_opts {int notask_error; } ;
struct task_struct {scalar_t__ exit_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct wait_opts*,struct task_struct*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct wait_opts*,struct task_struct*) ;
 int FUNC_8 (struct wait_opts*,int,struct task_struct*) ;
 int FUNC_9 (struct wait_opts*,struct task_struct*) ;

__attribute__((used)) static int FUNC_10(struct wait_opts *VAR_2, int VAR_3,
    struct task_struct *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (FUNC_6(VAR_5 < 0)) {







  if (VAR_2->notask_error)
   VAR_2->notask_error = VAR_5;
  return 0;
 }

 if (FUNC_2(!VAR_3) && FUNC_6(FUNC_4(VAR_4))) {




  VAR_2->notask_error = 0;
  return 0;
 }

 if (VAR_4->exit_state == VAR_0)
  return 0;




 if (VAR_4->exit_state == VAR_1 && !FUNC_0(VAR_4))
  return FUNC_9(VAR_2, VAR_4);





 VAR_2->notask_error = 0;

 if (FUNC_5(VAR_4, VAR_3))
  return FUNC_8(VAR_2, VAR_3, VAR_4);

 return FUNC_7(VAR_2, VAR_4);
}
