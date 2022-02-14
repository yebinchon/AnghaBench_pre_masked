
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_errno; int* td_retval; int td_pflags; } ;


 int VAR_0 ;

int
FUNC_0(struct thread *VAR_1, int VAR_2)
{

 if (VAR_2 <= 0)
  return (VAR_2);
 VAR_1->td_errno = VAR_2;
 VAR_1->td_pflags |= VAR_0;
 VAR_1->td_retval[0] = VAR_2;
 return (0);
}
