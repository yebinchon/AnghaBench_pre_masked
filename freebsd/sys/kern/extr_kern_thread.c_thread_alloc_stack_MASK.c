
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_kstack; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int) ;

int
FUNC_3(struct thread *VAR_0, int VAR_1)
{

 FUNC_0(VAR_0->td_kstack == 0,
     ("thread_alloc_stack called on a thread with kstack"));
 if (!FUNC_2(VAR_0, VAR_1))
  return (0);
 FUNC_1(VAR_0);
 return (1);
}
