
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; int td_dbgflags; struct proc* td_proc; } ;
struct proc {int p_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 scalar_t__ FUNC_2 (struct proc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_6, bool VAR_7)
{
 struct proc *VAR_8;
 int VAR_9;





 if ((VAR_6->td_flags & VAR_5) == 0)
  return (0);
 VAR_9 = 0;
 VAR_8 = VAR_6->td_proc;
 FUNC_0(VAR_8);
 if (VAR_8->p_flag & VAR_2)
  VAR_9 = VAR_0;
 else if (FUNC_2(VAR_8) ||
     ((VAR_8->p_flag & VAR_3) && (VAR_6->td_dbgflags & VAR_4)))
  VAR_9 = VAR_7 ? FUNC_3(0) : VAR_1;
 FUNC_1(VAR_8);
 return (VAR_9);
}
