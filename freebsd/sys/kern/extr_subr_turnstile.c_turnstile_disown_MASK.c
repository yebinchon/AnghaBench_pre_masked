
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct turnstile {int ts_lock; struct thread* ts_owner; int * ts_blocked; int ts_pending; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct turnstile*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct thread*,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int VAR_5 ;
 int FUNC_9 (struct thread*) ;

void
FUNC_10(struct turnstile *VAR_6)
{
 struct thread *VAR_7;
 u_char VAR_8;

 FUNC_1(VAR_6 != ((void*)0));
 FUNC_3(&VAR_6->ts_lock, VAR_0);
 FUNC_1(VAR_6->ts_owner == VAR_3);
 FUNC_1(FUNC_2(&VAR_6->ts_pending));
 FUNC_1(!FUNC_2(&VAR_6->ts_blocked[VAR_1]) ||
     !FUNC_2(&VAR_6->ts_blocked[VAR_2]));







 FUNC_4(&VAR_4);
 VAR_6->ts_owner = ((void*)0);
 FUNC_0(VAR_6, VAR_5);
 FUNC_5(&VAR_4);






 VAR_7 = VAR_3;
 FUNC_7(VAR_7);
 FUNC_5(&VAR_6->ts_lock);
 FUNC_4(&VAR_4);
 VAR_8 = FUNC_9(VAR_7);
 FUNC_5(&VAR_4);
 FUNC_6(VAR_7, VAR_8);
 FUNC_8(VAR_7);
}
