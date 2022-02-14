
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int dummy; } ;
struct pfs_node {scalar_t__ pn_type; struct pfs_node* pn_next; struct pfs_node* pn_nodes; } ;


 struct proc* FUNC_0 (int *) ;
 struct proc* FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct pfs_node*) ;
 int FUNC_5 (struct thread*,struct pfs_node*,struct proc*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_5, struct proc *VAR_6, struct pfs_node *VAR_7,
     struct pfs_node **VAR_8, struct proc **VAR_9)
{
 int VAR_10;

 FUNC_6(&VAR_2, VAR_0);
 FUNC_4(VAR_7);
 again:
 if (*VAR_8 == ((void*)0)) {

  *VAR_8 = VAR_7->pn_nodes;
 } else if ((*VAR_8)->pn_type != VAR_4) {

  *VAR_8 = (*VAR_8)->pn_next;
 }
 if (*VAR_8 != ((void*)0) && (*VAR_8)->pn_type == VAR_4) {

  if (*VAR_9 == ((void*)0))
   *VAR_9 = FUNC_0(&VAR_1);
  else
   *VAR_9 = FUNC_1(*VAR_9, VAR_3);

  if (*VAR_9 == ((void*)0))
   *VAR_8 = (*VAR_8)->pn_next;
  else
   FUNC_2(*VAR_9);
 }

 if ((*VAR_8) == ((void*)0))
  return (-1);

 if (*VAR_9 != ((void*)0)) {
  VAR_10 = FUNC_5(VAR_5, *VAR_8, *VAR_9);
  FUNC_3(*VAR_9);
 } else if (VAR_6 != ((void*)0)) {
  VAR_10 = FUNC_5(VAR_5, *VAR_8, VAR_6);
 } else {
  VAR_10 = 1;
 }
 if (!VAR_10)
  goto again;

 return (0);
}
