
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; } ;
struct thread {scalar_t__* td_retval; } ;
struct linux_ppoll_args {int ssize; int * tsp; int nfds; int fds; int * sset; } ;
struct l_timespec {int dummy; } ;
typedef int sigset_t ;
typedef int lts ;
typedef int l_ss ;
typedef struct l_timespec l_sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct l_timespec*,int) ;
 int FUNC_1 (struct l_timespec*,int *,int) ;
 int FUNC_2 (struct thread*,int ,int ,struct timespec*,int *) ;
 int FUNC_3 (struct l_timespec*,int *) ;
 int FUNC_4 (struct timespec*,struct l_timespec*) ;
 int FUNC_5 (struct timespec*) ;
 int FUNC_6 (struct l_timespec*,struct timespec*) ;
 int FUNC_7 (struct timespec*) ;
 int FUNC_8 (struct timespec*,struct timespec*,struct timespec*) ;

int
FUNC_9(struct thread *VAR_1, struct linux_ppoll_args *VAR_2)
{
 struct timespec VAR_3, VAR_4;
 struct l_timespec VAR_5;
 struct timespec VAR_6, *VAR_7;
 l_sigset_t VAR_8;
 sigset_t *VAR_9;
 sigset_t VAR_10;
 int VAR_11;

 if (VAR_2->sset != ((void*)0)) {
  if (VAR_2->ssize != sizeof(VAR_8))
   return (VAR_0);
  VAR_11 = FUNC_0(VAR_2->sset, &VAR_8, sizeof(VAR_8));
  if (VAR_11)
   return (VAR_11);
  FUNC_3(&VAR_8, &VAR_10);
  VAR_9 = &VAR_10;
 } else
  VAR_9 = ((void*)0);
 if (VAR_2->tsp != ((void*)0)) {
  VAR_11 = FUNC_0(VAR_2->tsp, &VAR_5, sizeof(VAR_5));
  if (VAR_11)
   return (VAR_11);
  VAR_11 = FUNC_4(&VAR_6, &VAR_5);
  if (VAR_11 != 0)
   return (VAR_11);

  FUNC_5(&VAR_3);
  VAR_7 = &VAR_6;
 } else
  VAR_7 = ((void*)0);

 VAR_11 = FUNC_2(VAR_1, VAR_2->fds, VAR_2->nfds, VAR_7, VAR_9);

 if (VAR_11 == 0 && VAR_2->tsp != ((void*)0)) {
  if (VAR_1->td_retval[0]) {
   FUNC_5(&VAR_4);
   FUNC_8(&VAR_4, &VAR_3, &VAR_4);
   FUNC_8(&VAR_6, &VAR_4, &VAR_6);
   if (VAR_6.tv_sec < 0)
    FUNC_7(&VAR_6);
  } else
   FUNC_7(&VAR_6);

  VAR_11 = FUNC_6(&VAR_5, &VAR_6);
  if (VAR_11 == 0)
   VAR_11 = FUNC_1(&VAR_5, VAR_2->tsp, sizeof(VAR_5));
 }

 return (VAR_11);
}
