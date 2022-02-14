
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct thread {int td_pflags; struct proc* td_proc; } ;
struct proc {int p_flag; struct vmspace* p_vmspace; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 scalar_t__ FUNC_3 (struct proc*,int ) ;

int
FUNC_4(struct thread *VAR_5, struct vmspace **VAR_6)
{
 struct proc *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5 == VAR_4, ("non-current thread %p", VAR_5));
 VAR_8 = 0;
 VAR_7 = VAR_5->td_proc;
 if ((VAR_7->p_flag & VAR_1) != 0) {
  FUNC_1(VAR_7);
  if (FUNC_3(VAR_7, VAR_2) != 0)
   VAR_8 = VAR_0;
  FUNC_2(VAR_7);
 }
 FUNC_0(VAR_8 != 0 || (VAR_5->td_pflags & VAR_3) == 0,
     ("nested execve"));
 *VAR_6 = VAR_7->p_vmspace;
 return (VAR_8);
}
