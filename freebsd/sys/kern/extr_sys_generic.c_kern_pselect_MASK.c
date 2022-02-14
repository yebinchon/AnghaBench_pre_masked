
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct thread {int td_flags; int td_pflags; int td_oldsigmask; } ;
typedef int sigset_t ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int,int *,int *,int *,struct timeval*,int) ;
 int FUNC_1 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

int
FUNC_4(struct thread *VAR_3, int VAR_4, fd_set *VAR_5, fd_set *VAR_6, fd_set *VAR_7,
    struct timeval *VAR_8, sigset_t *VAR_9, int VAR_10)
{
 int VAR_11;

 if (VAR_9 != ((void*)0)) {
  VAR_11 = FUNC_1(VAR_3, VAR_0, VAR_9,
      &VAR_3->td_oldsigmask, 0);
  if (VAR_11 != 0)
   return (VAR_11);
  VAR_3->td_pflags |= VAR_2;





  FUNC_2(VAR_3);
  VAR_3->td_flags |= VAR_1;
  FUNC_3(VAR_3);
 }
 VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
 return (VAR_11);
}
