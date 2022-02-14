
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct turnstile {int * ts_blocked; int ts_lock; } ;
struct thread {size_t td_tsqueue; scalar_t__ td_priority; struct turnstile* td_blocked; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct thread* FUNC_1 (int *) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*,int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct turnstile*,struct thread*) ;

void
FUNC_7(struct thread *VAR_3, u_char VAR_4)
{
 struct turnstile *VAR_5;

 FUNC_0(FUNC_2(VAR_3));




 VAR_5 = VAR_3->td_blocked;
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_3(VAR_3, &VAR_5->ts_lock);
 FUNC_4(&VAR_5->ts_lock, VAR_0);


 if (!FUNC_6(VAR_5, VAR_3))
  return;






 FUNC_0(VAR_3->td_tsqueue == VAR_1 ||
     VAR_3->td_tsqueue == VAR_2);
 if (VAR_3 == FUNC_1(&VAR_5->ts_blocked[VAR_3->td_tsqueue]) &&
     VAR_3->td_priority < VAR_4) {
  FUNC_5(VAR_3);
 }
}
