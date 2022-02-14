
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct futex_lock {int dummy; } ;
struct cloudabi_sys_lock_unlock_args {int lock; int scope; } ;


 int FUNC_0 (struct thread*,int ,int ,struct futex_lock**) ;
 int FUNC_1 (struct futex_lock*) ;
 int FUNC_2 (struct futex_lock*,struct thread*,int ) ;

int
FUNC_3(struct thread *VAR_0,
    struct cloudabi_sys_lock_unlock_args *VAR_1)
{
 struct futex_lock *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->lock, VAR_1->scope, &VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);
 VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_1->lock);
 FUNC_1(VAR_2);
 return (VAR_3);
}
