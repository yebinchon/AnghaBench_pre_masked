
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct proc* p_pptr; int p_children; int p_comm; int p_pid; } ;
struct pmc {int pm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct proc* FUNC_1 (int *) ;
 struct proc* FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (int ,int ,int,char*,struct pmc*,int ,struct proc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct pmc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct proc*,struct pmc*) ;
 int FUNC_6 (struct proc*,struct pmc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct proc *VAR_9, struct pmc *VAR_10)
{
 int VAR_11;
 struct proc *VAR_12;

 FUNC_7(&VAR_7, VAR_5);

 FUNC_3(VAR_4,VAR_0,1, "attach pm=%p ri=%d proc=%p (%d, %s)", VAR_10,
     FUNC_4(VAR_10), VAR_9, VAR_9->p_pid, VAR_9->p_comm);







 if ((VAR_10->pm_flags & VAR_3) != 0)
  return VAR_1;

 if ((VAR_10->pm_flags & VAR_2) == 0)
  return FUNC_5(VAR_9, VAR_10);






 FUNC_8(&VAR_8);

 VAR_12 = VAR_9;

 for (;;) {
  if ((VAR_11 = FUNC_5(VAR_9, VAR_10)) != 0)
   break;
  if (!FUNC_0(&VAR_9->p_children))
   VAR_9 = FUNC_1(&VAR_9->p_children);
  else for (;;) {
   if (VAR_9 == VAR_12)
    goto done;
   if (FUNC_2(VAR_9, VAR_6)) {
    VAR_9 = FUNC_2(VAR_9, VAR_6);
    break;
   }
   VAR_9 = VAR_9->p_pptr;
  }
 }

 if (VAR_11)
  (void) FUNC_6(VAR_12, VAR_10);

 done:
 FUNC_9(&VAR_8);
 return VAR_11;
}
