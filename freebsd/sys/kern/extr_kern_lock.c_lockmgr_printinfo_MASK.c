
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct thread {int td_tid; TYPE_2__* td_proc; } ;
struct TYPE_3__ {char* lo_name; } ;
struct lock {int lk_lock; TYPE_1__ lock_object; } ;
struct TYPE_4__ {int p_pid; char* p_comm; } ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 uintptr_t VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct lock const*) ;
 struct thread* FUNC_2 (struct lock const*) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(const struct lock *VAR_6)
{
 struct thread *VAR_7;
 uintptr_t VAR_8;

 if (VAR_6->lk_lock == VAR_5)
  FUNC_3("lock type %s: UNLOCKED\n", VAR_6->lock_object.lo_name);
 else if (VAR_6->lk_lock & VAR_3)
  FUNC_3("lock type %s: SHARED (count %ju)\n",
      VAR_6->lock_object.lo_name,
      (uintmax_t)FUNC_0(VAR_6->lk_lock));
 else {
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7 == (struct thread *)VAR_2)
   FUNC_3("lock type %s: EXCL by KERNPROC\n",
       VAR_6->lock_object.lo_name);
  else
   FUNC_3("lock type %s: EXCL by thread %p "
       "(pid %d, %s, tid %d)\n", VAR_6->lock_object.lo_name,
       VAR_7, VAR_7->td_proc->p_pid, VAR_7->td_proc->p_comm,
       VAR_7->td_tid);
 }

 VAR_8 = VAR_6->lk_lock;
 if (VAR_8 & VAR_1)
  FUNC_3(" with exclusive waiters pending\n");
 if (VAR_8 & VAR_4)
  FUNC_3(" with shared waiters pending\n");
 if (VAR_8 & VAR_0)
  FUNC_3(" with exclusive spinners pending\n");

 FUNC_1(VAR_6);
}
