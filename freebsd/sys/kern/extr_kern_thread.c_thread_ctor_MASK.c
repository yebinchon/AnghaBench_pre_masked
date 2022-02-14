
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_critnest; int td_lend_user_pri; int td_tid; int td_oncpu; int td_lastcpu; int td_state; } ;


 int FUNC_0 (int (*) (void*,int,void*,int),struct thread*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct thread*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_3, int VAR_4, void *VAR_5, int VAR_6)
{
 struct thread *VAR_7;

 VAR_7 = (struct thread *)VAR_3;
 VAR_7->td_state = VAR_2;
 VAR_7->td_lastcpu = VAR_7->td_oncpu = VAR_0;

 VAR_7->td_tid = FUNC_2();






 VAR_7->td_critnest = 1;
 VAR_7->td_lend_user_pri = VAR_1;
 FUNC_0(FUNC_4, VAR_7);



 FUNC_3(VAR_7);
 return (0);
}
