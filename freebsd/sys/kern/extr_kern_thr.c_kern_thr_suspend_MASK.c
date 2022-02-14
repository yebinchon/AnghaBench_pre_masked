
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct thread {int td_pflags; int td_flags; struct proc* td_proc; } ;
struct proc {int p_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct timeval*,struct timespec*) ;
 int FUNC_3 (void*,int *,int ,char*,int) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct timeval*) ;

int
FUNC_7(struct thread *VAR_7, struct timespec *VAR_8)
{
 struct proc *VAR_9 = VAR_7->td_proc;
 struct timeval VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_7->td_pflags & VAR_6) {
  VAR_7->td_pflags &= ~VAR_6;
  return (0);
 }

 if (VAR_8 != ((void*)0)) {
  if (VAR_8->tv_sec == 0 && VAR_8->tv_nsec == 0)
   VAR_11 = VAR_3;
  else {
   FUNC_2(&VAR_10, VAR_8);
   VAR_12 = FUNC_6(&VAR_10);
  }
 }

 FUNC_0(VAR_9);
 if (VAR_11 == 0 && (VAR_7->td_flags & VAR_5) == 0)
  VAR_11 = FUNC_3((void *)VAR_7, &VAR_9->p_mtx,
    VAR_4, "lthr", VAR_12);

 if (VAR_7->td_flags & VAR_5) {
  FUNC_4(VAR_7);
  VAR_7->td_flags &= ~VAR_5;
  FUNC_5(VAR_7);
  FUNC_1(VAR_9);
  return (0);
 }
 FUNC_1(VAR_9);
 if (VAR_11 == VAR_3)
  VAR_11 = VAR_2;
 else if (VAR_11 == VAR_1) {
  if (VAR_12 != 0)
   VAR_11 = VAR_0;
 }
 return (VAR_11);
}
