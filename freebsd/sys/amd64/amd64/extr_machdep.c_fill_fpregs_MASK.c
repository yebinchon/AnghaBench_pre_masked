
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct fpreg {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct thread*) ;
 struct thread* VAR_0 ;
 int FUNC_3 (int ,struct fpreg*) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;

int
FUNC_6(struct thread *VAR_1, struct fpreg *VAR_2)
{

 FUNC_0(VAR_1 == VAR_0 || FUNC_2(VAR_1) ||
     FUNC_1(VAR_1->td_proc),
     ("not suspended thread %p", VAR_1));
 FUNC_4(VAR_1);
 FUNC_3(FUNC_5(VAR_1), VAR_2);
 return (0);
}
