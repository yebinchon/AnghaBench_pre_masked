
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct unpcb {struct vnode* unp_vnode; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 (struct unpcb*) ;
 int FUNC_4 (struct vnode*,struct unpcb**) ;
 int FUNC_5 (struct vnode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (struct mtx*) ;
 struct mtx* FUNC_7 (int ,struct vnode*) ;
 int FUNC_8 (struct mtx*) ;
 int VAR_1 ;
 int FUNC_9 (struct vnode*) ;

void
FUNC_10(struct vnode *VAR_2)
{
 struct unpcb *VAR_3;
 int VAR_4;
 struct mtx *VAR_5;

 FUNC_0(VAR_2, "vfs_unp_reclaim");
 FUNC_1(VAR_2->v_type == VAR_0,
     ("vfs_unp_reclaim: vp->v_type != VSOCK"));

 VAR_4 = 0;
 VAR_5 = FUNC_7(VAR_1, VAR_2);
 FUNC_6(VAR_5);
 FUNC_4(VAR_2, &VAR_3);
 if (VAR_3 == ((void*)0))
  goto done;
 FUNC_2(VAR_3);
 if (VAR_3->unp_vnode == VAR_2) {
  FUNC_5(VAR_2);
  VAR_3->unp_vnode = ((void*)0);
  VAR_4 = 1;
 }
 FUNC_3(VAR_3);
 done:
 FUNC_8(VAR_5);
 if (VAR_4)
  FUNC_9(VAR_2);
}
