
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct thread {scalar_t__* td_retval; int td_proc; } ;
struct getdtablesize_args {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int
FUNC_4(struct thread *VAR_1, struct getdtablesize_args *VAR_2)
{




 VAR_1->td_retval[0] = FUNC_2(VAR_1);







 return (0);
}
