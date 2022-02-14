
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int p_flag; } ;
struct pfs_node {int * pn_vis; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct thread*,struct proc*) ;
 int FUNC_2 (struct thread*,struct proc*,struct pfs_node*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_2, struct pfs_node *VAR_3, struct proc *VAR_4)
{
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return (0);

 FUNC_0(VAR_4, VAR_0);

 VAR_5 = ((VAR_4->p_flag & VAR_1) == 0);
 if (VAR_5)
  VAR_5 = (FUNC_1(VAR_2, VAR_4) == 0);
 if (VAR_5 && VAR_3->pn_vis != ((void*)0))
  VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_3);
 if (!VAR_5)
  return (0);
 return (1);
}
