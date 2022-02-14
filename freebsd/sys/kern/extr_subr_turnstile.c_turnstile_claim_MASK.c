
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct turnstile_chain {int tc_lock; } ;
struct turnstile {int ts_lock; int ts_lockobj; } ;
struct thread {scalar_t__ td_priority; TYPE_1__* td_proc; struct turnstile* td_turnstile; } ;
struct TYPE_2__ {scalar_t__ p_magic; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 struct turnstile_chain* FUNC_1 (int ) ;
 int FUNC_2 (struct thread*,int *) ;
 struct thread* VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct thread*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 struct thread* FUNC_9 (struct turnstile*) ;
 int FUNC_10 (struct turnstile*,struct thread*) ;

void
FUNC_11(struct turnstile *VAR_4)
{
 struct thread *VAR_5, *VAR_6;
 struct turnstile_chain *VAR_7;

 FUNC_3(&VAR_4->ts_lock, VAR_0);
 FUNC_0(VAR_4 != VAR_2->td_turnstile);

 VAR_6 = VAR_2;
 FUNC_4(&VAR_3);
 FUNC_10(VAR_4, VAR_6);
 FUNC_5(&VAR_3);

 VAR_5 = FUNC_9(VAR_4);
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_5->td_proc->p_magic == VAR_1);
 FUNC_2(VAR_5, &VAR_4->ts_lock);




 FUNC_7(VAR_6);
 if (VAR_5->td_priority < VAR_6->td_priority)
  FUNC_6(VAR_6, VAR_5->td_priority);
 FUNC_8(VAR_6);
 VAR_7 = FUNC_1(VAR_4->ts_lockobj);
 FUNC_5(&VAR_4->ts_lock);
 FUNC_5(&VAR_7->tc_lock);
}
