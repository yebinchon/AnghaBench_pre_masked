
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_eventfd2_args {int flags; int initval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,int ,int) ;

int
FUNC_1(struct thread *VAR_4, struct linux_eventfd2_args *VAR_5)
{

 if ((VAR_5->flags & ~(VAR_2|VAR_3|VAR_1)) != 0)
  return (VAR_0);

 return (FUNC_0(VAR_4, VAR_5->initval, VAR_5->flags));
}
