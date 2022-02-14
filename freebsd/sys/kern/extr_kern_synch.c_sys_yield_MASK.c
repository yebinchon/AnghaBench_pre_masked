
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yield_args {int dummy; } ;
struct thread {scalar_t__* td_retval; int td_pri_class; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;

int
FUNC_5(struct thread *VAR_4, struct yield_args *VAR_5)
{

 FUNC_3(VAR_4);
 if (FUNC_0(VAR_4->td_pri_class) == VAR_1)
  FUNC_2(VAR_4, VAR_0);
 FUNC_1(VAR_3 | VAR_2, ((void*)0));
 FUNC_4(VAR_4);
 VAR_4->td_retval[0] = 0;
 return (0);
}
