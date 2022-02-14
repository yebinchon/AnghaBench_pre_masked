
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct nfsnode {int n_excl; } ;


 int VAR_0 ;
 struct nfsnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (int *,int ,int *) ;

void
FUNC_2(struct vnode *VAR_1, bool VAR_2)
{
 struct nfsnode *VAR_3;

 if (!VAR_2)
  return;
 VAR_3 = FUNC_0(VAR_1);
 FUNC_1(&VAR_3->n_excl, VAR_0, ((void*)0));
}
