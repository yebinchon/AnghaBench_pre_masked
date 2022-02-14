
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {scalar_t__ td_tid; TYPE_1__* td_proc; } ;
typedef int pid_t ;
typedef int lwpid_t ;
typedef int db_expr_t ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct thread*,int) ;
 int FUNC_6 (int) ;
 struct thread* FUNC_7 (int) ;
 struct thread* FUNC_8 (int ) ;
 struct thread* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(db_expr_t VAR_3, bool VAR_4, db_expr_t VAR_5, char *VAR_6)
{
 struct thread *VAR_7;
 db_expr_t VAR_8;
 pid_t VAR_9;
 int VAR_10;




 VAR_8 = VAR_0;
 VAR_0 = 10;
 VAR_4 = FUNC_0(&VAR_3);
 VAR_10 = FUNC_3();
 if (VAR_10 == VAR_2) {
  if (!FUNC_0(&VAR_5)) {
   FUNC_2("Count missing\n");
   FUNC_1();
   VAR_0 = VAR_8;
   return;
  }
 } else {
  FUNC_6(VAR_10);
  VAR_5 = -1;
 }
 FUNC_4();
 VAR_0 = VAR_8;

 if (VAR_4) {
  VAR_7 = FUNC_8((lwpid_t)VAR_3);
  if (VAR_7 == ((void*)0))
   VAR_7 = FUNC_7((pid_t)VAR_3);
  if (VAR_7 == ((void*)0)) {
   FUNC_2("Thread %d not found\n", (int)VAR_3);
   return;
  }
 } else
  VAR_7 = VAR_1;
 if (VAR_7->td_proc != ((void*)0))
  VAR_9 = VAR_7->td_proc->p_pid;
 else
  VAR_9 = -1;
 FUNC_2("Tracing pid %d tid %ld td %p\n", VAR_9, (long)VAR_7->td_tid, VAR_7);
 FUNC_5(VAR_7, VAR_5);
}
