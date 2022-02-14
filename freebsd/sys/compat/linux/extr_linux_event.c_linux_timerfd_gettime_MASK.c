
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd {int tfd_lock; } ;
struct thread {int dummy; } ;
struct linux_timerfd_gettime_args {int old_value; int fd; } ;
struct l_itimerspec {int dummy; } ;
struct itimerspec {int dummy; } ;
struct file {scalar_t__ f_type; struct timerfd* f_data; } ;
typedef int lots ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct l_itimerspec*,int ,int) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int ,int *,struct file**) ;
 int FUNC_3 (struct timerfd*,struct itimerspec*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct l_itimerspec*,struct itimerspec*) ;

int
FUNC_7(struct thread *VAR_3, struct linux_timerfd_gettime_args *VAR_4)
{
 struct l_itimerspec VAR_5;
 struct itimerspec VAR_6;
 struct timerfd *VAR_7;
 struct file *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_4->fd, &VAR_2, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_7 = VAR_8->f_data;
 if (VAR_8->f_type != VAR_0 || VAR_7 == ((void*)0)) {
  VAR_9 = VAR_1;
  goto out;
 }

 FUNC_4(&VAR_7->tfd_lock);
 FUNC_3(VAR_7, &VAR_6);
 FUNC_5(&VAR_7->tfd_lock);

 VAR_9 = FUNC_6(&VAR_5, &VAR_6);
 if (VAR_9 == 0)
  VAR_9 = FUNC_0(&VAR_5, VAR_4->old_value, sizeof(VAR_5));

out:
 FUNC_1(VAR_8, VAR_3);
 return (VAR_9);
}
