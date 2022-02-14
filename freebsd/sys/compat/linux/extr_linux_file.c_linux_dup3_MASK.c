
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_dup3_args {intptr_t oldfd; intptr_t newfd; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,intptr_t,int,intptr_t) ;

int
FUNC_1(struct thread *VAR_4, struct linux_dup3_args *VAR_5)
{
 int VAR_6;
 intptr_t VAR_7;

 if (VAR_5->oldfd == VAR_5->newfd)
  return (VAR_0);
 if ((VAR_5->flags & ~VAR_3) != 0)
  return (VAR_0);
 if (VAR_5->flags & VAR_3)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 VAR_7 = VAR_5->newfd;
 return (FUNC_0(VAR_4, VAR_5->oldfd, VAR_6, VAR_7));
}
