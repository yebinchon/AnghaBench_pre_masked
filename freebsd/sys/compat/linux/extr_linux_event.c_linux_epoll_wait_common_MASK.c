
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct thread {scalar_t__* td_retval; int td_proc; int td_flags; int td_pflags; } ;
struct kevent_copyops {int * member_2; int member_1; struct epoll_copyout_args* member_0; } ;
struct file {scalar_t__ f_type; } ;
struct epoll_event {int dummy; } ;
struct epoll_copyout_args {int error; scalar_t__ count; int p; struct epoll_event* leventlist; } ;
typedef int sigset_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int ,struct file**) ;
 int FUNC_3 (struct thread*,struct file*,int ,int,struct kevent_copyops*,struct timespec*) ;
 int FUNC_4 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_8, int VAR_9, struct epoll_event *VAR_10,
    int VAR_11, int VAR_12, sigset_t *VAR_13)
{
 struct epoll_copyout_args VAR_14;
 struct kevent_copyops VAR_15 = { &VAR_14,
     VAR_7,
     ((void*)0)};
 struct timespec VAR_16, *VAR_17;
 cap_rights_t VAR_18;
 struct file *VAR_19;
 sigset_t VAR_20;
 int VAR_21;

 if (VAR_11 <= 0 || VAR_11 > VAR_3)
  return (VAR_2);

 VAR_21 = FUNC_2(VAR_8, VAR_9,
     FUNC_0(&VAR_18, VAR_0), &VAR_19);
 if (VAR_21 != 0)
  return (VAR_21);
 if (VAR_19->f_type != VAR_1) {
  VAR_21 = VAR_2;
  goto leave1;
 }
 if (VAR_13 != ((void*)0)) {
  VAR_21 = FUNC_4(VAR_8, VAR_4, VAR_13,
      &VAR_20, 0);
  if (VAR_21 != 0)
   goto leave1;
  VAR_8->td_pflags |= VAR_6;





  FUNC_5(VAR_8);
  VAR_8->td_flags |= VAR_5;
  FUNC_6(VAR_8);
 }


 VAR_14.leventlist = VAR_10;
 VAR_14.p = VAR_8->td_proc;
 VAR_14.count = 0;
 VAR_14.error = 0;

 if (VAR_12 != -1) {
  if (VAR_12 < 0) {
   VAR_21 = VAR_2;
   goto leave0;
  }

  VAR_16.tv_sec = VAR_12 / 1000;
  VAR_16.tv_nsec = (VAR_12 % 1000) * 1000000;
  VAR_17 = &VAR_16;
 } else {
  VAR_17 = ((void*)0);
 }

 VAR_21 = FUNC_3(VAR_8, VAR_19, 0, VAR_11, &VAR_15, VAR_17);
 if (VAR_21 == 0 && VAR_14.error != 0)
  VAR_21 = VAR_14.error;





 if (VAR_21 == 0)
  VAR_8->td_retval[0] = VAR_14.count;

leave0:
 if (VAR_13 != ((void*)0))
  VAR_21 = FUNC_4(VAR_8, VAR_4, &VAR_20,
      ((void*)0), 0);
leave1:
 FUNC_1(VAR_19, VAR_8);
 return (VAR_21);
}
