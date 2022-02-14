
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_kstack; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct thread*) ;
 int FUNC_5 (struct thread*,int) ;

struct thread *
FUNC_6(int VAR_2)
{
 struct thread *VAR_3;

 FUNC_2();

 VAR_3 = (struct thread *)FUNC_3(VAR_1, VAR_0);
 FUNC_0(VAR_3->td_kstack == 0, ("thread_alloc got thread with kstack"));
 if (!FUNC_5(VAR_3, VAR_2)) {
  FUNC_4(VAR_1, VAR_3);
  return (((void*)0));
 }
 FUNC_1(VAR_3);
 return (VAR_3);
}
