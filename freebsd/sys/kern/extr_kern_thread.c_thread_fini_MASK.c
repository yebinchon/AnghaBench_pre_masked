
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_sleepqueue; int td_turnstile; int td_rlqe; } ;


 int FUNC_0 (void (*) (void*,int),struct thread*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct thread*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0, int VAR_1)
{
 struct thread *VAR_2;

 VAR_2 = (struct thread *)VAR_0;
 FUNC_0(FUNC_6, VAR_2);
 FUNC_1(VAR_2->td_rlqe);
 FUNC_4(VAR_2->td_turnstile);
 FUNC_3(VAR_2->td_sleepqueue);
 FUNC_5(VAR_2);
 FUNC_2(VAR_2);
}
