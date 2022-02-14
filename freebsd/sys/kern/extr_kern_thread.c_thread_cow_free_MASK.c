
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_limit; int * td_ucred; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct thread *VAR_0)
{

 if (VAR_0->td_ucred != ((void*)0))
  FUNC_0(VAR_0->td_ucred);
 if (VAR_0->td_limit != ((void*)0))
  FUNC_1(VAR_0->td_limit);
}
