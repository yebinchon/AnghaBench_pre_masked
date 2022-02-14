
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct thread {int td_pinned; int td_priority; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,int *,char*) ;
 int FUNC_5 (int *,int *,int *) ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct thread*,int) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*,int ) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*) ;
 int FUNC_11 (struct thread*) ;

void
FUNC_12(void)
{
 struct thread *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 u_char VAR_10;

 if (FUNC_3())
  return;

 FUNC_4(VAR_0 | VAR_1, ((void*)0),
     "linux_synchronize_rcu() can sleep");

 VAR_6 = VAR_3;





 FUNC_10(VAR_6);

 FUNC_0();

 VAR_8 = FUNC_1(VAR_2);
 VAR_9 = VAR_6->td_pinned;
 VAR_10 = VAR_6->td_priority;
 VAR_7 = FUNC_7(VAR_6);
 FUNC_9(VAR_6);
 VAR_6->td_pinned = 0;
 FUNC_6(VAR_6, VAR_8);

 FUNC_5(&VAR_4,
     &VAR_5, ((void*)0));


 if (VAR_7 != 0) {
  FUNC_6(VAR_6, VAR_8);
 } else {

  if (VAR_9 != 0)
   FUNC_6(VAR_6, VAR_8);
  FUNC_9(VAR_6);
 }

 VAR_6->td_pinned = VAR_9;


 FUNC_8(VAR_6, VAR_10);
 FUNC_11(VAR_6);

 FUNC_2();
}
