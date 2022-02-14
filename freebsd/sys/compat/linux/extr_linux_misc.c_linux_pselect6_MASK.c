
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct timespec {int dummy; } ;
struct thread {scalar_t__* td_retval; } ;
struct linux_pselect6_args {int * tsp; int exceptfds; int writefds; int readfds; int nfds; int * sig; } ;
struct l_timespec {int ss_len; scalar_t__ ss; } ;
struct l_pselect6arg {int ss_len; scalar_t__ ss; } ;
typedef int sigset_t ;
typedef int lts ;
typedef int lpse6 ;
typedef int l_ss ;
typedef struct l_timespec l_sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct timeval*,struct timespec*) ;
 int FUNC_2 (struct timeval*,struct timespec*) ;
 int FUNC_3 (int *,struct l_timespec*,int) ;
 int FUNC_4 (struct l_timespec*,int *,int) ;
 scalar_t__ FUNC_5 (struct timeval*) ;
 int FUNC_6 (struct thread*,int ,int ,int ,int ,struct timeval*,int *,int ) ;
 int FUNC_7 (struct l_timespec*,int *) ;
 int FUNC_8 (struct timespec*,struct l_timespec*) ;
 int FUNC_9 (struct timeval*) ;
 int FUNC_10 (struct l_timespec*,struct timespec*) ;
 int FUNC_11 (struct timeval*) ;
 int FUNC_12 (struct timeval*,struct timeval*) ;

int
FUNC_13(struct thread *VAR_2, struct linux_pselect6_args *VAR_3)
{
 struct timeval VAR_4, VAR_5, VAR_6, *VAR_7;
 struct l_pselect6arg VAR_8;
 struct l_timespec VAR_9;
 struct timespec VAR_10;
 l_sigset_t VAR_11;
 sigset_t *VAR_12;
 sigset_t VAR_13;
 int VAR_14;

 VAR_12 = ((void*)0);
 if (VAR_3->sig != ((void*)0)) {
  VAR_14 = FUNC_3(VAR_3->sig, &VAR_8, sizeof(VAR_8));
  if (VAR_14 != 0)
   return (VAR_14);
  if (VAR_8 != sizeof(VAR_11))
   return (VAR_0);
  if (VAR_8 != 0) {
   VAR_14 = FUNC_3(FUNC_0(VAR_8), &VAR_11,
       sizeof(VAR_11));
   if (VAR_14 != 0)
    return (VAR_14);
   FUNC_7(&VAR_11, &VAR_13);
   VAR_12 = &VAR_13;
  }
 }





 if (VAR_3->tsp != ((void*)0)) {
  VAR_14 = FUNC_3(VAR_3->tsp, &VAR_9, sizeof(VAR_9));
  if (VAR_14 != 0)
   return (VAR_14);
  VAR_14 = FUNC_8(&VAR_10, &VAR_9);
  if (VAR_14 != 0)
   return (VAR_14);

  FUNC_1(&VAR_4, &VAR_10);
  if (FUNC_5(&VAR_4))
   return (VAR_0);

  FUNC_9(&VAR_5);
  VAR_7 = &VAR_4;
 } else
  VAR_7 = ((void*)0);

 VAR_14 = FUNC_6(VAR_2, VAR_3->nfds, VAR_3->readfds, VAR_3->writefds,
     VAR_3->exceptfds, VAR_7, VAR_12, VAR_1);

 if (VAR_14 == 0 && VAR_3->tsp != ((void*)0)) {
  if (VAR_2->td_retval[0] != 0) {







   FUNC_9(&VAR_6);
   FUNC_12(&VAR_6, &VAR_5);
   FUNC_12(&VAR_4, &VAR_6);
   if (VAR_4.tv_sec < 0)
    FUNC_11(&VAR_4);
  } else
   FUNC_11(&VAR_4);

  FUNC_2(&VAR_4, &VAR_10);

  VAR_14 = FUNC_10(&VAR_9, &VAR_10);
  if (VAR_14 == 0)
   VAR_14 = FUNC_4(&VAR_9, VAR_3->tsp, sizeof(VAR_9));
 }

 return (VAR_14);
}
