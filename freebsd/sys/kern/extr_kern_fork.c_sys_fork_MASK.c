
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct fork_req {int fr_flags; int* fr_pidp; } ;
struct fork_args {int dummy; } ;
typedef int fr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fork_req*,int) ;
 int FUNC_1 (struct thread*,struct fork_req*) ;

int
FUNC_2(struct thread *VAR_2, struct fork_args *VAR_3)
{
 struct fork_req VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.fr_flags = VAR_0 | VAR_1;
 VAR_4.fr_pidp = &VAR_6;
 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5 == 0) {
  VAR_2->td_retval[0] = VAR_6;
  VAR_2->td_retval[1] = 0;
 }
 return (VAR_5);
}
