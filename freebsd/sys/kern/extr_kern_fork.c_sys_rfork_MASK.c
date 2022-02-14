
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct rfork_args {int flags; } ;
struct fork_req {int fr_flags; int* fr_pidp; int fr_flags2; } ;
typedef int fr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct fork_req*,int) ;
 int FUNC_2 (struct thread*,struct fork_req*) ;

int
FUNC_3(struct thread *VAR_8, struct rfork_args *VAR_9)
{
 struct fork_req VAR_10;
 int VAR_11, VAR_12;


 if ((VAR_9->flags & VAR_3) != 0)
  return (VAR_0);

 if ((VAR_9->flags & VAR_7) != 0 && VAR_9->flags != VAR_7)
  return (VAR_0);

 FUNC_0(VAR_9->flags);
 FUNC_1(&VAR_10, sizeof(VAR_10));
 if ((VAR_9->flags & VAR_7) != 0) {
  VAR_10.fr_flags = VAR_2 | VAR_6 | VAR_5 | VAR_4;
  VAR_10.fr_flags2 = VAR_1;
 } else {
  VAR_10.fr_flags = VAR_9->flags;
 }
 VAR_10.fr_pidp = &VAR_12;
 VAR_11 = FUNC_2(VAR_8, &VAR_10);
 if (VAR_11 == 0) {
  VAR_8->td_retval[0] = VAR_12;
  VAR_8->td_retval[1] = 0;
 }
 return (VAR_11);
}
