
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_quad_t ;
struct vop_advlockasync_args {struct vnode* a_vp; } ;
struct vnode {int v_lockf; int v_mount; } ;
struct TYPE_4__ {int nm_flag; } ;
struct TYPE_3__ {int n_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vop_advlockasync_args*,int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct vop_advlockasync_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 u_quad_t VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_4))
  return (VAR_0);
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 if (VAR_6)
  return (VAR_6);
 if ((FUNC_3(VAR_4->v_mount)->nm_flag & VAR_2) != 0) {
  VAR_5 = FUNC_4(VAR_4)->n_size;
  FUNC_1(VAR_4, 0);
  VAR_6 = FUNC_5(VAR_3, &(VAR_4->v_lockf), VAR_5);
 } else {
  FUNC_1(VAR_4, 0);
  VAR_6 = VAR_0;
 }
 return (VAR_6);
}
