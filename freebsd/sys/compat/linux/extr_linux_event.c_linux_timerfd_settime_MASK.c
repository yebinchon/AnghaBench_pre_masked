
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;
struct itimerspec {struct timespec it_value; int it_interval; } ;
struct timerfd {int tfd_canceled; int tfd_lock; int tfd_callout; struct itimerspec tfd_time; } ;
struct thread {int dummy; } ;
struct linux_timerfd_settime_args {int flags; int * old_value; int fd; int new_value; } ;
struct l_itimerspec {int dummy; } ;
struct file {scalar_t__ f_type; struct timerfd* f_data; } ;
typedef int lots ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (int *,int ,int ,struct timerfd*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct l_itimerspec*,int) ;
 int FUNC_4 (struct l_itimerspec*,int *,int) ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct thread*,int ,int *,struct file**) ;
 int FUNC_7 (struct timerfd*,struct timespec*) ;
 int FUNC_8 (struct timerfd*,struct itimerspec*) ;
 int VAR_5 ;
 int FUNC_9 (struct itimerspec*,struct l_itimerspec*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct l_itimerspec*,struct itimerspec*) ;
 int FUNC_13 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct timespec*) ;
 int FUNC_16 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_17 (struct timeval*) ;

int
FUNC_18(struct thread *VAR_6, struct linux_timerfd_settime_args *VAR_7)
{
 struct l_itimerspec VAR_8;
 struct itimerspec VAR_9, VAR_10;
 struct timespec VAR_11, VAR_12;
 struct timerfd *VAR_13;
 struct timeval VAR_14;
 struct file *VAR_15;
 int VAR_16;

 if ((VAR_7->flags & ~VAR_2) != 0)
  return (VAR_1);

 VAR_16 = FUNC_3(VAR_7->new_value, &VAR_8, sizeof(VAR_8));
 if (VAR_16 != 0)
  return (VAR_16);
 VAR_16 = FUNC_9(&VAR_9, &VAR_8);
 if (VAR_16 != 0)
  return (VAR_16);

 VAR_16 = FUNC_6(VAR_6, VAR_7->fd, &VAR_4, &VAR_15);
 if (VAR_16 != 0)
  return (VAR_16);
 VAR_13 = VAR_15->f_data;
 if (VAR_15->f_type != VAR_0 || VAR_13 == ((void*)0)) {
  VAR_16 = VAR_1;
  goto out;
 }

 FUNC_10(&VAR_13->tfd_lock);
 if (!FUNC_15(&VAR_9.it_value))
  FUNC_14(&VAR_9.it_interval);
 if (VAR_7->old_value != ((void*)0))
  FUNC_8(VAR_13, &VAR_10);

 VAR_13->tfd_time = VAR_9;
 if (FUNC_15(&VAR_9.it_value)) {
  FUNC_7(VAR_13, &VAR_11);
  VAR_12 = VAR_9.it_value;
  if ((VAR_7->flags & VAR_3) == 0) {
   FUNC_13(&VAR_13->tfd_time.it_value, &VAR_11,
    &VAR_13->tfd_time.it_value);
  } else {
   FUNC_16(&VAR_12, &VAR_11, &VAR_12);
  }
  FUNC_0(&VAR_14, &VAR_12);
  FUNC_1(&VAR_13->tfd_callout, FUNC_17(&VAR_14),
   VAR_5, VAR_13);
  VAR_13->tfd_canceled = 0;
 } else {
  VAR_13->tfd_canceled = 1;
  FUNC_2(&VAR_13->tfd_callout);
 }
 FUNC_11(&VAR_13->tfd_lock);

 if (VAR_7->old_value != ((void*)0)) {
  VAR_16 = FUNC_12(&VAR_8, &VAR_10);
  if (VAR_16 == 0)
   VAR_16 = FUNC_4(&VAR_8, VAR_7->old_value, sizeof(VAR_8));
 }

out:
 FUNC_5(VAR_15, VAR_6);
 return (VAR_16);
}
