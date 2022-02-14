
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_mount; } ;
struct TYPE_2__ {struct tmpfs_node* tn_parent; } ;
struct tmpfs_node {scalar_t__ tn_type; int tn_mode; TYPE_1__ tn_dir; } ;
struct tmpfs_mount {int dummy; } ;
struct tmpfs_dirent {struct tmpfs_node* td_node; } ;
struct componentname {int cn_flags; int cn_namelen; char* cn_nameptr; scalar_t__ cn_nameiop; int cn_lkflags; int cn_thread; int cn_cred; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 struct vnode* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct tmpfs_node*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 struct tmpfs_mount* FUNC_4 (int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (struct vnode*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 struct tmpfs_node* FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 int VAR_19 ;
 int FUNC_9 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_10 (int ,struct tmpfs_node*,int ,struct vnode**) ;
 struct tmpfs_dirent* FUNC_11 (struct tmpfs_node*,int *,struct componentname*) ;
 int FUNC_12 (struct tmpfs_mount*,struct tmpfs_node*) ;
 int FUNC_13 (struct tmpfs_node*) ;
 scalar_t__ FUNC_14 (struct vnode*) ;
 int VAR_20 ;
 int FUNC_15 (struct vnode*,int ,struct tmpfs_node*,int ,struct vnode**) ;
 int FUNC_16 (struct vnode*) ;

__attribute__((used)) static int
FUNC_17(struct vnode *VAR_21, struct vnode **VAR_22, struct componentname *VAR_23)
{
 struct tmpfs_dirent *VAR_24;
 struct tmpfs_node *VAR_25, *VAR_26;
 struct tmpfs_mount *VAR_27;
 int VAR_28;

 VAR_25 = FUNC_7(VAR_21);
 *VAR_22 = VAR_11;


 VAR_28 = FUNC_5(VAR_21, VAR_17, VAR_23->cn_cred, VAR_23->cn_thread);
 if (VAR_28 != 0)
  goto out;


 FUNC_2(FUNC_1(VAR_25->tn_type == VAR_16 &&
     VAR_25->tn_dir.tn_parent == VAR_25,
     !(VAR_23->cn_flags & VAR_7)));

 FUNC_3(VAR_25);
 if (VAR_25->tn_dir.tn_parent == ((void*)0)) {
  VAR_28 = VAR_4;
  goto out;
 }
 if (VAR_23->cn_flags & VAR_7) {
  VAR_27 = FUNC_4(VAR_21->v_mount);
  VAR_26 = VAR_25->tn_dir.tn_parent;
  FUNC_13(VAR_26);
  VAR_28 = FUNC_15(VAR_21, VAR_20,
      VAR_26, VAR_23->cn_lkflags, VAR_22);
  FUNC_12(VAR_27, VAR_26);
  if (VAR_28 != 0)
   goto out;
 } else if (VAR_23->cn_namelen == 1 && VAR_23->cn_nameptr[0] == '.') {
  FUNC_8(VAR_21);
  *VAR_22 = VAR_21;
  VAR_28 = 0;
 } else {
  VAR_24 = FUNC_11(VAR_25, ((void*)0), VAR_23);
  if (VAR_24 != ((void*)0) && VAR_24->td_node == ((void*)0))
   VAR_23->cn_flags |= VAR_9;
  if (VAR_24 == ((void*)0) || VAR_24->td_node == ((void*)0)) {






   if ((VAR_23->cn_flags & VAR_8) &&
       (VAR_23->cn_nameiop == VAR_0 || VAR_23->cn_nameiop == VAR_12 ||

       (VAR_23->cn_nameiop == VAR_1 &&
       VAR_23->cn_flags & VAR_2 &&
       VAR_23->cn_flags & VAR_9))) {
    VAR_28 = FUNC_5(VAR_21, VAR_19, VAR_23->cn_cred,
        VAR_23->cn_thread);
    if (VAR_28 != 0)
     goto out;





    VAR_23->cn_flags |= VAR_13;

    VAR_28 = VAR_3;
   } else
    VAR_28 = VAR_4;
  } else {
   struct tmpfs_node *VAR_29;





   VAR_29 = VAR_24->td_node;







   if ((VAR_29->tn_type != VAR_16 &&
       VAR_29->tn_type != VAR_18) &&
       !(VAR_23->cn_flags & VAR_8)) {
    VAR_28 = VAR_5;
    goto out;
   }






   if ((VAR_23->cn_flags & VAR_8) &&
       (VAR_23->cn_nameiop == VAR_1 ||
       VAR_23->cn_nameiop == VAR_12)) {
    VAR_28 = FUNC_5(VAR_21, VAR_19, VAR_23->cn_cred,
        VAR_23->cn_thread);
    if (VAR_28 != 0)
     goto out;


    VAR_28 = FUNC_10(VAR_21->v_mount, VAR_29,
        VAR_23->cn_lkflags, VAR_22);
    if (VAR_28 != 0)
     goto out;

    if ((VAR_25->tn_mode & VAR_14) &&
      FUNC_5(VAR_21, VAR_15, VAR_23->cn_cred,
      VAR_23->cn_thread) && FUNC_5(*VAR_22, VAR_15,
      VAR_23->cn_cred, VAR_23->cn_thread)) {
     VAR_28 = VAR_6;
     FUNC_16(*VAR_22);
     *VAR_22 = ((void*)0);
     goto out;
    }
    VAR_23->cn_flags |= VAR_13;
   } else {
    VAR_28 = FUNC_10(VAR_21->v_mount, VAR_29,
        VAR_23->cn_lkflags, VAR_22);
    if (VAR_28 != 0)
     goto out;
   }
  }
 }






 if ((VAR_23->cn_flags & VAR_10) != 0 && FUNC_14(VAR_21))
  FUNC_9(VAR_21, *VAR_22, VAR_23);

out:




 FUNC_2(FUNC_0(VAR_28 == 0, *VAR_22 != VAR_11 && FUNC_6(*VAR_22)));

 return (VAR_28);
}
