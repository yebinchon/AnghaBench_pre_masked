
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_clone_args {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,struct linux_clone_args*) ;
 int FUNC_1 (struct thread*,struct linux_clone_args*) ;

int
FUNC_2(struct thread *VAR_1, struct linux_clone_args *VAR_2)
{

 if (VAR_2->flags & VAR_0)
  return (FUNC_1(VAR_1, VAR_2));
 else
  return (FUNC_0(VAR_1, VAR_2));
}
