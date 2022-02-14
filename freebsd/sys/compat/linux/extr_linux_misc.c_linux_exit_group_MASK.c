
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; } ;
struct linux_exit_group_args {int error_code; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct thread*,int ,int ) ;
 int VAR_0 ;

int
FUNC_2(struct thread *VAR_1, struct linux_exit_group_args *VAR_2)
{

 FUNC_0(VAR_0, "thread(%d) (%d)", VAR_1->td_tid,
     VAR_2->error_code);






 FUNC_1(VAR_1, VAR_2->error_code, 0);

}
