
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_quad_t ;
struct TYPE_2__ {int bo_bsize; } ;
struct vnode {TYPE_1__ v_bufobj; } ;
struct nfsnode {int n_size; } ;
typedef int off_t ;
typedef scalar_t__ daddr_t ;


 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 struct nfsnode* FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_0, daddr_t VAR_1)
{
 struct nfsnode *VAR_2;
 u_quad_t VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_2(VAR_0);
 FUNC_0(VAR_2);
 VAR_3 = VAR_2->n_size;
 FUNC_1(VAR_2);

 VAR_4 = VAR_0->v_bufobj.bo_bsize;
 VAR_5 = VAR_4;
 if ((off_t)VAR_1 * VAR_4 >= VAR_3)
  VAR_5 = 0;
 else if ((off_t)(VAR_1 + 1) * VAR_4 > VAR_3)
  VAR_5 = VAR_3 - (off_t)VAR_1 * VAR_4;
 return (VAR_5);
}
