
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfork_args {int dummy; } ;
struct thread {int* td_retval; } ;
struct fork_req {int fr_flags; int* fr_pidp; } ;
typedef int fr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fork_req*,int) ;
 int FUNC_1 (struct thread*,struct fork_req*) ;

int
FUNC_2(struct thread *VAR_4, struct vfork_args *VAR_5)
{
 struct fork_req VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.fr_flags = VAR_0 | VAR_3 | VAR_2 | VAR_1;
 VAR_6.fr_pidp = &VAR_8;
 VAR_7 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_7 == 0) {
  VAR_4->td_retval[0] = VAR_8;
  VAR_4->td_retval[1] = 0;
 }
 return (VAR_7);
}
