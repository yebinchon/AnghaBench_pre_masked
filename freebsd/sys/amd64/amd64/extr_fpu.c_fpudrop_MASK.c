
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pcb; } ;


 int FUNC_0 (struct thread*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 struct thread* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 struct thread* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;

void
FUNC_6(void)
{
 struct thread *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_1(VAR_3 == VAR_1, ("fpudrop: fpcurthread != curthread"));
 FUNC_0(VAR_3);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_4(VAR_3->td_pcb, VAR_0);
 FUNC_5();
}
