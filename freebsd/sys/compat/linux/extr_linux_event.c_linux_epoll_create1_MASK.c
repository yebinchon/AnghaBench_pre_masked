
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_epoll_create1_args {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int) ;

int
FUNC_1(struct thread *VAR_3, struct linux_epoll_create1_args *VAR_4)
{
 int VAR_5;

 if ((VAR_4->flags & ~(VAR_1)) != 0)
  return (VAR_0);

 VAR_5 = 0;
 if ((VAR_4->flags & VAR_1) != 0)
  VAR_5 |= VAR_2;

 return (FUNC_0(VAR_3, VAR_5));
}
