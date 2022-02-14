
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct nfsnode {scalar_t__ n_attrstamp; TYPE_1__* n_accesscache; } ;
struct TYPE_2__ {scalar_t__ stamp; } ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 int VAR_0 ;
 struct nfsnode* FUNC_4 (struct vnode*) ;

void
FUNC_5(struct vnode *VAR_1)
{
 struct nfsnode *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_2(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->n_accesscache[VAR_3].stamp = 0;
 FUNC_0(VAR_1);
 VAR_2->n_attrstamp = 0;
 FUNC_1(VAR_1);
 FUNC_3(VAR_2);
}
