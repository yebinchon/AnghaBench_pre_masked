
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_tid; } ;
typedef scalar_t__ db_expr_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct thread* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct thread*) ;

void
FUNC_6(db_expr_t VAR_1, bool VAR_2, db_expr_t VAR_3, char *VAR_4)
{
 struct thread *VAR_5;
 int VAR_6;

 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_1, 0);
  if (VAR_5 != ((void*)0)) {
   VAR_6 = FUNC_5(VAR_5);
   if (VAR_6 != 0) {
    FUNC_4("unable to switch to thread %ld\n",
        (long)VAR_5->td_tid);
    return;
   }
   VAR_0 = FUNC_0();
  } else {
   FUNC_4("%d: invalid thread\n", (int)VAR_1);
   return;
  }
 }

 FUNC_3();
 FUNC_2(FUNC_0());
}
