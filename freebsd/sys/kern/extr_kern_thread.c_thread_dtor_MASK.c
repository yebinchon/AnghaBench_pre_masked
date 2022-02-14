
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_state; int td_tid; int * td_su; } ;


 int FUNC_0 (void (*) (void*,int,void*),struct thread*) ;
 int FUNC_1 (int ) ;





 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0, int VAR_1, void *VAR_2)
{
 struct thread *VAR_3;

 VAR_3 = (struct thread *)VAR_0;
 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
 FUNC_1(VAR_3->td_su == ((void*)0));

 FUNC_0(FUNC_7, VAR_3);
 FUNC_6(VAR_3->td_tid);
}
