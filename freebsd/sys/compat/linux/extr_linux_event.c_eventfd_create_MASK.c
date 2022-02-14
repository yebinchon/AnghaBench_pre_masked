
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct thread {int* td_retval; TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int si_note; } ;
struct eventfd {int efd_flags; int efd_lock; TYPE_2__ efd_sel; int efd_count; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct thread*,struct file**,int*,int) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct file*,int,int ,struct eventfd*,int *) ;
 int FUNC_3 (int *,int *) ;
 struct eventfd* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_12, uint32_t VAR_13, int VAR_14)
{
 struct filedesc *VAR_15;
 struct eventfd *VAR_16;
 struct file *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_18 = 0;
 if ((VAR_14 & VAR_4) != 0)
  VAR_18 |= VAR_10;

 VAR_15 = VAR_12->td_proc->p_fd;
 VAR_20 = FUNC_0(VAR_12, &VAR_17, &VAR_19, VAR_18);
 if (VAR_20 != 0)
  return (VAR_20);

 VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_7, VAR_8 | VAR_9);
 VAR_16->efd_flags = VAR_14;
 VAR_16->efd_count = VAR_13;
 FUNC_5(&VAR_16->efd_lock, "eventfd", ((void*)0), VAR_6);

 FUNC_3(&VAR_16->efd_sel.si_note, &VAR_16->efd_lock);

 VAR_18 = VAR_2 | VAR_3;
 if ((VAR_14 & VAR_5) != 0)
  VAR_18 |= VAR_1;

 FUNC_2(VAR_17, VAR_18, VAR_0, VAR_16, &VAR_11);
 FUNC_1(VAR_17, VAR_12);

 VAR_12->td_retval[0] = VAR_19;
 return (VAR_20);
}
