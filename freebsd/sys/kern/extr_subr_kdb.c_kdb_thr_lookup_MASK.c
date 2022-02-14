
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_tid; } ;
typedef scalar_t__ lwpid_t ;


 struct thread* FUNC_0 () ;
 struct thread* FUNC_1 (struct thread*) ;

struct thread *
FUNC_2(lwpid_t VAR_0)
{
 struct thread *VAR_1;

 VAR_1 = FUNC_0();
 while (VAR_1 != ((void*)0) && VAR_1->td_tid != VAR_0)
  VAR_1 = FUNC_1(VAR_1);
 return (VAR_1);
}
