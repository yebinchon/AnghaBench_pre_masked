
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct nfsnode {int n_excl; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vnode*) ;
 struct nfsnode* FUNC_3 (struct vnode*) ;
 int FUNC_4 (int *,int,int *) ;

bool
FUNC_5(struct vnode *VAR_2)
{
 struct nfsnode *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2, "ncl_excl_start");
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == VAR_0)
  return (0);
 FUNC_1(VAR_4 == VAR_1,
     ("ncl_excl_start: wrong vnode lock %d", VAR_4));

 VAR_3 = FUNC_3(VAR_2);
 FUNC_4(&VAR_3->n_excl, VAR_0, ((void*)0));
 return (1);
}
