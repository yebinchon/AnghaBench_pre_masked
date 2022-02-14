
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_epoll_pwait_args {int sigsetsize; int timeout; int maxevents; int events; int epfd; int * mask; } ;
typedef int sigset_t ;
typedef int l_sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(struct thread *VAR_1, struct linux_epoll_pwait_args *VAR_2)
{
 sigset_t VAR_3, *VAR_4;
 l_sigset_t VAR_5;
 int VAR_6;

 if (VAR_2->mask != ((void*)0)) {
  if (VAR_2->sigsetsize != sizeof(l_sigset_t))
   return (VAR_0);
  VAR_6 = FUNC_0(VAR_2->mask, &VAR_5, sizeof(l_sigset_t));
  if (VAR_6 != 0)
   return (VAR_6);
  FUNC_2(&VAR_5, &VAR_3);
  VAR_4 = &VAR_3;
 } else
  VAR_4 = ((void*)0);
 return (FUNC_1(VAR_1, VAR_2->epfd, VAR_2->events,
     VAR_2->maxevents, VAR_2->timeout, VAR_4));
}
