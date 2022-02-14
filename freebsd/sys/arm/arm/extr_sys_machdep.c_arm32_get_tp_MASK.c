
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {void** td_retval; } ;
typedef void* register_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_1, void *VAR_2)
{




 VAR_1->td_retval[0] = *(register_t *)VAR_0;

 return (0);
}
