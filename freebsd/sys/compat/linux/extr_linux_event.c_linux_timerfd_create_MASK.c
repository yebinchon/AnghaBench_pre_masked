
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct timerfd {int tfd_lock; TYPE_2__ tfd_sel; int tfd_callout; scalar_t__ tfd_clockid; } ;
struct thread {int* td_retval; TYPE_1__* td_proc; } ;
struct linux_timerfd_create_args {int flags; int clockid; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ clockid_t ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct thread*,struct file**,int*,int) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct file*,int,int ,struct timerfd*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__*,int ) ;
 struct timerfd* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int VAR_14 ;

int
FUNC_8(struct thread *VAR_15, struct linux_timerfd_create_args *VAR_16)
{
 struct filedesc *VAR_17;
 struct timerfd *VAR_18;
 struct file *VAR_19;
 clockid_t VAR_20;
 int VAR_21, VAR_22, VAR_23;

 if ((VAR_16->flags & ~VAR_8) != 0)
  return (VAR_3);

 VAR_23 = FUNC_5(&VAR_20, VAR_16->clockid);
 if (VAR_23 != 0)
  return (VAR_23);
 if (VAR_20 != VAR_1 && VAR_20 != VAR_0)
  return (VAR_3);

 VAR_21 = 0;
 if ((VAR_16->flags & VAR_7) != 0)
  VAR_21 |= VAR_13;

 VAR_17 = VAR_15->td_proc->p_fd;
 VAR_23 = FUNC_1(VAR_15, &VAR_19, &VAR_22, VAR_21);
 if (VAR_23 != 0)
  return (VAR_23);

 VAR_18 = FUNC_6(sizeof(*VAR_18), VAR_10, VAR_11 | VAR_12);
 VAR_18->tfd_clockid = VAR_20;
 FUNC_7(&VAR_18->tfd_lock, "timerfd", ((void*)0), VAR_9);

 FUNC_0(&VAR_18->tfd_callout, &VAR_18->tfd_lock, 0);
 FUNC_4(&VAR_18->tfd_sel.si_note, &VAR_18->tfd_lock);

 VAR_21 = VAR_5;
 if ((VAR_16->flags & VAR_6) != 0)
  VAR_21 |= VAR_4;

 FUNC_3(VAR_19, VAR_21, VAR_2, VAR_18, &VAR_14);
 FUNC_2(VAR_19, VAR_15);

 VAR_15->td_retval[0] = VAR_22;
 return (VAR_23);
}
