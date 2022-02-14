
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_thread_exit_args {int scope; int lock; } ;
struct cloudabi_sys_lock_unlock_args {int scope; int lock; } ;


 int FUNC_0 (struct thread*,struct cloudabi_sys_lock_unlock_args*) ;
 int FUNC_1 (struct thread*,int ,int ) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

int
FUNC_4(struct thread *VAR_0,
    struct cloudabi_sys_thread_exit_args *VAR_1)
{
 struct cloudabi_sys_lock_unlock_args VAR_2 = {
  .lock = VAR_1->lock,
  .scope = VAR_1->scope,
 };

 FUNC_3(VAR_0);


 FUNC_0(VAR_0, &VAR_2);





 FUNC_2(VAR_0);
 FUNC_1(VAR_0, 0, 0);

}
