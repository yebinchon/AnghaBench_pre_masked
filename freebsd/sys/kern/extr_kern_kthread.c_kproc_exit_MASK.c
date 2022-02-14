
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 struct thread* VAR_0 ;
 int FUNC_2 (struct thread*,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct proc*,int ,int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct proc*) ;

void
FUNC_7(int VAR_3)
{
 struct thread *VAR_4;
 struct proc *VAR_5;

 VAR_4 = VAR_0;
 VAR_5 = VAR_4->td_proc;





 FUNC_4(&VAR_2);
 FUNC_0(VAR_5);
 FUNC_3(VAR_5, VAR_1, 1);
 FUNC_1(VAR_5);
 FUNC_5(&VAR_2);




 FUNC_6(VAR_5);


 FUNC_2(VAR_4, VAR_3, 0);
}
