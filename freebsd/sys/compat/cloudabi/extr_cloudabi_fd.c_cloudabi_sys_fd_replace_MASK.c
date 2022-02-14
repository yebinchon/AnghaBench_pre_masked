
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__* td_retval; } ;
struct cloudabi_sys_fd_replace_args {int to; int from; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1,
    struct cloudabi_sys_fd_replace_args *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_0, 0, VAR_2->from, VAR_2->to);
 VAR_1->td_retval[0] = 0;
 return (VAR_3);
}
