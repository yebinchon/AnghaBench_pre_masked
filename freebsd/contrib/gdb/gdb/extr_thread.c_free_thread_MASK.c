
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {struct thread_info* private; scalar_t__ step_resume_breakpoint; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct thread_info*) ;

__attribute__((used)) static void
FUNC_2 (struct thread_info *VAR_0)
{


  if (VAR_0->step_resume_breakpoint)
    FUNC_0 (VAR_0->step_resume_breakpoint);



  if (VAR_0->private)
    FUNC_1 (VAR_0->private);

  FUNC_1 (VAR_0);
}
