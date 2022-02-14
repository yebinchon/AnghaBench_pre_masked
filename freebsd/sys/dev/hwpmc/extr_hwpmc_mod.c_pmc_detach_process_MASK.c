
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct proc* p_pptr; int p_children; int p_comm; int p_pid; } ;
struct pmc {int pm_flags; int pm_targets; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct proc* FUNC_1 (int *) ;
 struct proc* FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (int ,int ,int,char*,struct pmc*,int ,struct proc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct pmc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct proc*,struct pmc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct proc *VAR_9, struct pmc *VAR_10)
{
 struct proc *VAR_11;

 FUNC_6(&VAR_7, VAR_5);

 FUNC_3(VAR_4,VAR_0,1, "detach pm=%p ri=%d proc=%p (%d, %s)", VAR_10,
     FUNC_4(VAR_10), VAR_9, VAR_9->p_pid, VAR_9->p_comm);

 if ((VAR_10->pm_flags & VAR_3) == 0)
  return FUNC_5(VAR_9, VAR_10, VAR_1);







 FUNC_7(&VAR_8);

 VAR_11 = VAR_9;

 for (;;) {
  (void) FUNC_5(VAR_9, VAR_10, VAR_1);

  if (!FUNC_0(&VAR_9->p_children))
   VAR_9 = FUNC_1(&VAR_9->p_children);
  else for (;;) {
   if (VAR_9 == VAR_11)
    goto done;
   if (FUNC_2(VAR_9, VAR_6)) {
    VAR_9 = FUNC_2(VAR_9, VAR_6);
    break;
   }
   VAR_9 = VAR_9->p_pptr;
  }
 }

 done:
 FUNC_8(&VAR_8);

 if (FUNC_0(&VAR_10->pm_targets))
  VAR_10->pm_flags &= ~VAR_2;

 return 0;
}
