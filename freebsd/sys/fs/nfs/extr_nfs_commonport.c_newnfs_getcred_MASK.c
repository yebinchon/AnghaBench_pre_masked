
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int td_ucred; } ;


 struct ucred* FUNC_0 (int ) ;
 struct thread* VAR_0 ;
 int FUNC_1 (struct ucred*) ;

struct ucred *
FUNC_2(void)
{
 struct ucred *VAR_1;
 struct thread *VAR_2 = VAR_0;

 VAR_1 = FUNC_0(VAR_2->td_ucred);
 FUNC_1(VAR_1);
 return (VAR_1);
}
