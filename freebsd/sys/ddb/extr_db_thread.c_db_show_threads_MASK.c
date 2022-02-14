
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_kstack; scalar_t__ td_tid; } ;
typedef void* jmp_buf ;
typedef int db_expr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct thread*,int) ;
 void* FUNC_2 (void*) ;
 struct thread* FUNC_3 () ;
 struct thread* FUNC_4 (struct thread*) ;
 scalar_t__ FUNC_5 (void*) ;

void
FUNC_6(db_expr_t VAR_1, bool VAR_2, db_expr_t VAR_3, char *VAR_4)
{
 jmp_buf VAR_5;
 void *VAR_6;
 struct thread *VAR_7;

 VAR_7 = FUNC_3();
 while (!VAR_0 && VAR_7 != ((void*)0)) {
  FUNC_0("  %6ld (%p) (stack %p)  ", (long)VAR_7->td_tid, VAR_7,
      (void *)VAR_7->td_kstack);
  VAR_6 = FUNC_2(VAR_5);
  if (FUNC_5(VAR_5) == 0) {
   if (FUNC_1(VAR_7, 1) != 0)
    FUNC_0("***\n");
  }
  FUNC_2(VAR_6);
  VAR_7 = FUNC_4(VAR_7);
 }
}
