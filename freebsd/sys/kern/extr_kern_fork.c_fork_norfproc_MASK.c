
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int p_flag; struct filedesc* p_fd; } ;
struct filedesc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct thread*) ;
 struct filedesc* FUNC_4 (struct filedesc*,int) ;
 int FUNC_5 (struct thread*) ;
 scalar_t__ FUNC_6 (struct proc*,int ) ;
 int FUNC_7 (struct proc*,int ) ;
 int FUNC_8 (struct thread*,int *,int *,int *,int) ;

__attribute__((used)) static int
FUNC_9(struct thread *VAR_7, int VAR_8)
{
 int VAR_9;
 struct proc *VAR_10;

 FUNC_0((VAR_8 & VAR_5) == 0,
     ("fork_norfproc called with RFPROC set"));
 VAR_10 = VAR_7->td_proc;

 if (((VAR_10->p_flag & (VAR_1|VAR_2)) == VAR_1) &&
     (VAR_8 & (VAR_3 | VAR_4))) {
  FUNC_1(VAR_10);
  if (FUNC_6(VAR_10, VAR_6)) {
   FUNC_2(VAR_10);
   return (VAR_0);
  }
  FUNC_2(VAR_10);
 }

 VAR_9 = FUNC_8(VAR_7, ((void*)0), ((void*)0), ((void*)0), VAR_8);
 if (VAR_9)
  goto fail;




 if (VAR_8 & VAR_3) {
  struct filedesc *VAR_11;
  VAR_11 = FUNC_4(VAR_7->td_proc->p_fd, 0);
  FUNC_3(VAR_7);
  VAR_10->p_fd = VAR_11;
 }




 if (VAR_8 & VAR_4)
  FUNC_5(VAR_7);

fail:
 if (((VAR_10->p_flag & (VAR_1|VAR_2)) == VAR_1) &&
     (VAR_8 & (VAR_3 | VAR_4))) {
  FUNC_1(VAR_10);
  FUNC_7(VAR_10, VAR_6);
  FUNC_2(VAR_10);
 }
 return (VAR_9);
}
