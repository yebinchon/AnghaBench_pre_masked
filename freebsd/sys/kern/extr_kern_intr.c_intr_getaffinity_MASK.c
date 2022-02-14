
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_3__* td_cpuset; } ;
struct proc {int dummy; } ;
struct intr_event {int ie_lock; TYPE_2__* ie_thread; int ie_cpu; } ;
typedef int lwpid_t ;
typedef int cpuset_t ;
struct TYPE_6__ {int cs_mask; } ;
struct TYPE_5__ {TYPE_1__* it_thread; } ;
struct TYPE_4__ {int td_tid; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;



 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct proc*) ;
 int * VAR_4 ;
 int FUNC_4 (int ,int ,struct proc**,struct thread**,int *) ;
 struct intr_event* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(int VAR_5, int VAR_6, void *VAR_7)
{
 struct intr_event *VAR_8;
 struct thread *VAR_9;
 struct proc *VAR_10;
 cpuset_t *VAR_11;
 lwpid_t VAR_12;
 int VAR_13;

 VAR_11 = VAR_7;
 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 == ((void*)0))
  return (VAR_2);

 VAR_13 = 0;
 FUNC_2(VAR_11);
 switch (VAR_6) {
 case 129:
 case 130:
  FUNC_6(&VAR_8->ie_lock);
  if (VAR_8->ie_cpu == VAR_3)
   FUNC_0(VAR_4, VAR_11);
  else
   FUNC_1(VAR_8->ie_cpu, VAR_11);
  FUNC_7(&VAR_8->ie_lock);
  break;
 case 128:
  FUNC_6(&VAR_8->ie_lock);
  if (VAR_8->ie_thread == ((void*)0)) {
   FUNC_7(&VAR_8->ie_lock);
   FUNC_0(VAR_4, VAR_11);
  } else {
   VAR_12 = VAR_8->ie_thread->it_thread->td_tid;
   FUNC_7(&VAR_8->ie_lock);
   VAR_13 = FUNC_4(VAR_0, VAR_12, &VAR_10, &VAR_9, ((void*)0));
   if (VAR_13 != 0)
    return (VAR_13);
   FUNC_0(&VAR_9->td_cpuset->cs_mask, VAR_11);
   FUNC_3(VAR_10);
  }
 default:
  return (VAR_1);
 }
 return (0);
}
