
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; int td_flags; struct proc* td_proc; } ;
struct proc {int p_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int,char*,int) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

int
FUNC_4(struct thread *VAR_5, int VAR_6)
{
 struct proc *VAR_7;

 VAR_7 = VAR_5->td_proc;






 if ((VAR_5->td_pflags & VAR_4) == 0)
  return (VAR_0);






 FUNC_0(VAR_7);
 FUNC_2(VAR_5);
 VAR_5->td_flags |= VAR_3;
 FUNC_3(VAR_5);
 return (FUNC_1(&VAR_5->td_flags, &VAR_7->p_mtx, VAR_2 | VAR_1, "suspkt",
     VAR_6));
}
