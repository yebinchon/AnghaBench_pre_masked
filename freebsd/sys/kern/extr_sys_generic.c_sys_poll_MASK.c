
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct thread {int dummy; } ;
struct poll_args {int timeout; int nfds; int fds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ,int ,struct timespec*,int *) ;

int
FUNC_1(struct thread *VAR_2, struct poll_args *VAR_3)
{
 struct timespec VAR_4, *VAR_5;

 if (VAR_3->timeout != VAR_1) {
  if (VAR_3->timeout < 0)
   return (VAR_0);
  VAR_4.tv_sec = VAR_3->timeout / 1000;
  VAR_4.tv_nsec = (VAR_3->timeout % 1000) * 1000000;
  VAR_5 = &VAR_4;
 } else
  VAR_5 = ((void*)0);

 return (FUNC_0(VAR_2, VAR_3->fds, VAR_3->nfds, VAR_5, ((void*)0)));
}
