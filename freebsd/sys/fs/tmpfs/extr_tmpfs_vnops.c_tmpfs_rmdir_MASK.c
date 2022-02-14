
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_rmdir_args {TYPE_2__* a_cnp; struct vnode* a_vp; struct vnode* a_dvp; } ;
struct vnode {int v_mount; } ;
struct TYPE_4__ {struct tmpfs_node* tn_parent; } ;
struct tmpfs_node {scalar_t__ tn_size; int tn_flags; int tn_status; int tn_links; TYPE_1__ tn_dir; } ;
struct tmpfs_mount {int dummy; } ;
struct tmpfs_dirent {int dummy; } ;
struct TYPE_5__ {int cn_flags; int cn_namelen; int cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct tmpfs_dirent*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct tmpfs_node*) ;
 int VAR_8 ;
 int FUNC_3 (struct tmpfs_node*) ;
 struct tmpfs_mount* FUNC_4 (int ) ;
 int FUNC_5 (struct vnode*) ;
 struct tmpfs_node* FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,struct tmpfs_dirent*) ;
 struct tmpfs_dirent* FUNC_9 (struct tmpfs_node*,struct tmpfs_node*,TYPE_2__*) ;
 int FUNC_10 (struct vnode*,TYPE_2__*) ;
 int FUNC_11 (struct tmpfs_mount*,struct tmpfs_dirent*) ;
 int FUNC_12 (struct vnode*) ;
 scalar_t__ FUNC_13 (struct vnode*) ;

__attribute__((used)) static int
FUNC_14(struct vop_rmdir_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_dvp;
 struct vnode *VAR_11 = VAR_9->a_vp;

 int VAR_12;
 struct tmpfs_dirent *VAR_13;
 struct tmpfs_mount *VAR_14;
 struct tmpfs_node *VAR_15;
 struct tmpfs_node *VAR_16;

 FUNC_0(FUNC_5(VAR_10));
 FUNC_0(FUNC_5(VAR_11));

 VAR_14 = FUNC_4(VAR_10->v_mount);
 VAR_15 = FUNC_6(VAR_10);
 VAR_16 = FUNC_6(VAR_11);



  if (VAR_16->tn_size > 0) {
   VAR_12 = VAR_2;
   goto out;
  }

 if ((VAR_15->tn_flags & VAR_0)
     || (VAR_16->tn_flags & (VAR_5 | VAR_4 | VAR_0))) {
  VAR_12 = VAR_3;
  goto out;
 }



 FUNC_0(VAR_16->tn_dir.tn_parent == VAR_15);



 VAR_13 = FUNC_9(VAR_15, VAR_16, VAR_9->a_cnp);
 FUNC_0(FUNC_1(VAR_13,
     VAR_9->a_cnp->cn_nameptr,
     VAR_9->a_cnp->cn_namelen));


 if ((VAR_15->tn_flags & VAR_0) != 0 ||
     (VAR_16->tn_flags & (VAR_5 | VAR_4 | VAR_0)) != 0) {
  VAR_12 = VAR_3;
  goto out;
 }



 FUNC_8(VAR_10, VAR_13);
 if (VAR_9->a_cnp->cn_flags & VAR_1)
  FUNC_10(VAR_10, VAR_9->a_cnp);


 FUNC_2(VAR_16);
 VAR_16->tn_links--;
 VAR_16->tn_dir.tn_parent = ((void*)0);
 VAR_16->tn_status |= VAR_6 | VAR_7 |
     VAR_8;

 FUNC_3(VAR_16);

 FUNC_2(VAR_15);
 VAR_15->tn_links--;
 VAR_15->tn_status |= VAR_6 | VAR_7 |
     VAR_8;
 FUNC_3(VAR_15);

 if (FUNC_13(VAR_10)) {
  FUNC_7(VAR_10);
  FUNC_7(VAR_11);
 }




 FUNC_11(VAR_14, VAR_13);




 VAR_15->tn_status |= VAR_7;
 FUNC_12(VAR_10);

 VAR_12 = 0;

out:
 return VAR_12;
}
