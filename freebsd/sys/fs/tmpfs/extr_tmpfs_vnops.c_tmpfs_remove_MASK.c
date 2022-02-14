
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_remove_args {TYPE_1__* a_cnp; struct vnode* a_vp; struct vnode* a_dvp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct tmpfs_node {int tn_flags; int tn_status; } ;
struct tmpfs_mount {int dummy; } ;
struct tmpfs_dirent {int dummy; } ;
struct TYPE_3__ {int cn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct tmpfs_mount* FUNC_1 (int ) ;
 int FUNC_2 (struct vnode*) ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 struct tmpfs_node* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,struct tmpfs_dirent*) ;
 struct tmpfs_dirent* FUNC_6 (struct tmpfs_node*,struct tmpfs_node*,TYPE_1__*) ;
 int FUNC_7 (struct vnode*,TYPE_1__*) ;
 int FUNC_8 (struct tmpfs_mount*,struct tmpfs_dirent*) ;

__attribute__((used)) static int
FUNC_9(struct vop_remove_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_dvp;
 struct vnode *VAR_11 = VAR_9->a_vp;

 int VAR_12;
 struct tmpfs_dirent *VAR_13;
 struct tmpfs_mount *VAR_14;
 struct tmpfs_node *VAR_15;
 struct tmpfs_node *VAR_16;

 FUNC_0(FUNC_2(VAR_10));
 FUNC_0(FUNC_2(VAR_11));

 if (VAR_11->v_type == VAR_8) {
  VAR_12 = VAR_2;
  goto out;
 }

 VAR_15 = FUNC_3(VAR_10);
 VAR_16 = FUNC_4(VAR_11);
 VAR_14 = FUNC_1(VAR_11->v_mount);
 VAR_13 = FUNC_6(VAR_15, VAR_16, VAR_9->a_cnp);
 FUNC_0(VAR_13 != ((void*)0));


 if ((VAR_16->tn_flags & (VAR_4 | VAR_0 | VAR_5)) ||
     (VAR_15->tn_flags & VAR_0)) {
  VAR_12 = VAR_3;
  goto out;
 }



 FUNC_5(VAR_10, VAR_13);
 if (VAR_9->a_cnp->cn_flags & VAR_1)
  FUNC_7(VAR_10, VAR_9->a_cnp);




 FUNC_8(VAR_14, VAR_13);

 VAR_16->tn_status |= VAR_6 | VAR_7;
 VAR_12 = 0;

out:

 return VAR_12;
}
