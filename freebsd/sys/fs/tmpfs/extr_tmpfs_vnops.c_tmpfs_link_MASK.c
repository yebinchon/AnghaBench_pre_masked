
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_link_args {struct componentname* a_cnp; struct vnode* a_vp; struct vnode* a_tdvp; } ;
struct vnode {int v_mount; } ;
struct tmpfs_node {scalar_t__ tn_links; int tn_flags; int tn_status; } ;
struct tmpfs_dirent {int dummy; } ;
struct componentname {int cn_flags; int cn_namelen; int cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vnode*) ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 int FUNC_4 (int ,struct tmpfs_node*,int ,int ,struct tmpfs_dirent**) ;
 int FUNC_5 (struct vnode*,struct tmpfs_dirent*) ;
 int FUNC_6 (struct vnode*,struct componentname*) ;
 int FUNC_7 (struct vnode*) ;

__attribute__((used)) static int
FUNC_8(struct vop_link_args *VAR_8)
{
 struct vnode *VAR_9 = VAR_8->a_tdvp;
 struct vnode *VAR_10 = VAR_8->a_vp;
 struct componentname *VAR_11 = VAR_8->a_cnp;

 int VAR_12;
 struct tmpfs_dirent *VAR_13;
 struct tmpfs_node *VAR_14;

 FUNC_0(FUNC_2(VAR_9));
 FUNC_0(VAR_11->cn_flags & VAR_3);
 FUNC_0(VAR_9 != VAR_10);
 VAR_14 = FUNC_3(VAR_10);



 FUNC_0(VAR_14->tn_links <= VAR_6);
 if (VAR_14->tn_links == VAR_6) {
  VAR_12 = VAR_1;
  goto out;
 }


 if (VAR_14->tn_flags & (VAR_4 | VAR_0)) {
  VAR_12 = VAR_2;
  goto out;
 }


 VAR_12 = FUNC_4(FUNC_1(VAR_10->v_mount), VAR_14,
     VAR_11->cn_nameptr, VAR_11->cn_namelen, &VAR_13);
 if (VAR_12 != 0)
  goto out;


 if (VAR_11->cn_flags & VAR_5)
  FUNC_6(VAR_9, VAR_11);
 FUNC_5(VAR_9, VAR_13);


 VAR_14->tn_status |= VAR_7;
 FUNC_7(VAR_10);

 VAR_12 = 0;

out:
 return VAR_12;
}
