
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_sel; scalar_t__ td_kstack; int * td_rlqe; int td_turnstile; int td_sleepqueue; } ;


 int FUNC_0 (int (*) (void*,int,int),struct thread*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct thread*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_0, int VAR_1, int VAR_2)
{
 struct thread *VAR_3;

 VAR_3 = (struct thread *)VAR_0;

 VAR_3->td_sleepqueue = FUNC_1();
 VAR_3->td_turnstile = FUNC_2();
 VAR_3->td_rlqe = ((void*)0);
 FUNC_0(FUNC_4, VAR_3);
 FUNC_3(VAR_3);
 VAR_3->td_kstack = 0;
 VAR_3->td_sel = ((void*)0);
 return (0);
}
