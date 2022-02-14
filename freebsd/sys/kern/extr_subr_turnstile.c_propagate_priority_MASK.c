
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct turnstile {int ts_lock; TYPE_2__* ts_lockobj; struct thread* ts_owner; } ;
struct thread {int td_priority; int td_tid; struct turnstile* td_blocked; int td_state; int td_name; TYPE_1__* td_proc; } ;
struct TYPE_4__ {int lo_name; } ;
struct TYPE_3__ {scalar_t__ p_magic; int p_pid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;
 scalar_t__ FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*,int *) ;
 int FUNC_7 (struct thread*,int ) ;
 struct thread* VAR_3 ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (struct thread*,int) ;
 int FUNC_14 (struct thread*,int ) ;
 int FUNC_15 (struct thread*) ;
 int FUNC_16 (struct turnstile*,struct thread*) ;

__attribute__((used)) static void
FUNC_17(struct thread *VAR_4)
{
 struct turnstile *VAR_5;
 int VAR_6;

 FUNC_7(VAR_4, VAR_0);
 VAR_6 = VAR_4->td_priority;
 VAR_5 = VAR_4->td_blocked;
 FUNC_6(VAR_4, &VAR_5->ts_lock);






 FUNC_9(&VAR_5->ts_lock);
 for (;;) {
  VAR_4 = VAR_5->ts_owner;

  if (VAR_4 == ((void*)0)) {




   FUNC_10(&VAR_5->ts_lock);
   return;
  }

  FUNC_14(VAR_4, VAR_1);
  FUNC_10(&VAR_5->ts_lock);
  FUNC_1(VAR_4->td_proc != ((void*)0));
  FUNC_1(VAR_4->td_proc->p_magic == VAR_2);







  if (FUNC_3(VAR_4)) {
   FUNC_12(
  "Sleeping thread (tid %d, pid %d) owns a non-sleepable lock\n",
       VAR_4->td_tid, VAR_4->td_proc->p_pid);
   FUNC_8(VAR_4);
   FUNC_11("sleeping thread");
  }





  if (VAR_4->td_priority <= VAR_6) {
   FUNC_15(VAR_4);
   return;
  }




  FUNC_13(VAR_4, VAR_6);





  if (FUNC_2(VAR_4) || FUNC_5(VAR_4)) {
   FUNC_1(VAR_4->td_blocked == ((void*)0));
   FUNC_15(VAR_4);
   return;
  }






  FUNC_0(VAR_4 != VAR_3, ("Deadlock detected"));





  FUNC_0(FUNC_4(VAR_4), (
      "thread %d(%s):%d holds %s but isn't blocked on a lock\n",
      VAR_4->td_tid, VAR_4->td_name, VAR_4->td_state,
      VAR_5->ts_lockobj->lo_name));




  VAR_5 = VAR_4->td_blocked;
  FUNC_1(VAR_5 != ((void*)0));
  FUNC_6(VAR_4, &VAR_5->ts_lock);

  if (!FUNC_16(VAR_5, VAR_4)) {
   FUNC_10(&VAR_5->ts_lock);
   return;
  }

 }
}
