
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_rename_args {struct componentname* a_tcnp; struct vnode* a_tvp; struct vnode* a_tdvp; struct componentname* a_fcnp; struct vnode* a_fvp; struct vnode* a_fdvp; } ;
struct vnode {struct mount* v_mount; } ;
struct TYPE_3__ {struct tmpfs_node* tn_parent; } ;
struct tmpfs_node {int tn_flags; scalar_t__ tn_type; scalar_t__ tn_size; int tn_status; int tn_links; TYPE_1__ tn_dir; } ;
struct tmpfs_mount {int dummy; } ;
struct TYPE_4__ {char* td_name; } ;
struct tmpfs_dirent {TYPE_2__ ud; struct tmpfs_node* td_node; } ;
struct mount {int dummy; } ;
struct componentname {int cn_flags; int cn_namelen; char* cn_nameptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct tmpfs_node*) ;
 int FUNC_4 (struct tmpfs_mount*) ;
 int VAR_19 ;
 int FUNC_5 (struct tmpfs_node*) ;
 int VAR_20 ;
 int FUNC_6 (struct tmpfs_node*) ;
 int FUNC_7 (struct tmpfs_mount*) ;
 int FUNC_8 (struct tmpfs_node*) ;
 scalar_t__ VAR_21 ;
 struct tmpfs_mount* FUNC_9 (struct mount*) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*,int ) ;
 struct tmpfs_node* FUNC_12 (struct vnode*) ;
 struct tmpfs_node* FUNC_13 (struct vnode*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (struct vnode*) ;
 int FUNC_16 (struct vnode*) ;
 int FUNC_17 (char*,int ) ;
 char* FUNC_18 (int,int ,int ) ;
 int FUNC_19 (struct vnode*,struct tmpfs_dirent*) ;
 int FUNC_20 (struct vnode*,struct tmpfs_dirent*) ;
 struct tmpfs_dirent* FUNC_21 (struct tmpfs_node*,struct tmpfs_node*,struct componentname*) ;
 int FUNC_22 (struct vnode*,struct componentname*) ;
 int FUNC_23 (struct vnode*,struct componentname*) ;
 int FUNC_24 (struct tmpfs_dirent*,char*,int) ;
 int FUNC_25 (struct tmpfs_mount*,struct tmpfs_dirent*) ;
 int FUNC_26 (struct vnode*,struct vnode**,struct vnode*,struct vnode**,struct componentname*,struct componentname*) ;
 scalar_t__ FUNC_27 (struct vnode*) ;
 int FUNC_28 (struct mount*,int ) ;
 int FUNC_29 (struct mount*) ;
 scalar_t__ FUNC_30 (struct vnode*,int) ;
 int FUNC_31 (struct vnode*) ;
 int FUNC_32 (struct vnode*) ;

__attribute__((used)) static int
FUNC_33(struct vop_rename_args *VAR_22)
{
 struct vnode *VAR_23 = VAR_22->a_fdvp;
 struct vnode *VAR_24 = VAR_22->a_fvp;
 struct componentname *VAR_25 = VAR_22->a_fcnp;
 struct vnode *VAR_26 = VAR_22->a_tdvp;
 struct vnode *VAR_27 = VAR_22->a_tvp;
 struct componentname *VAR_28 = VAR_22->a_tcnp;
 struct mount *VAR_29 = ((void*)0);
 char *VAR_30;
 struct tmpfs_dirent *VAR_31;
 struct tmpfs_mount *VAR_32;
 struct tmpfs_node *VAR_33;
 struct tmpfs_node *VAR_34;
 struct tmpfs_node *VAR_35;
 struct tmpfs_node *VAR_36;
 int VAR_37;

 FUNC_2(FUNC_10(VAR_26));
 FUNC_2(FUNC_1(VAR_27 != ((void*)0), FUNC_10(VAR_27)));
 FUNC_2(VAR_25->cn_flags & VAR_9);
 FUNC_2(VAR_28->cn_flags & VAR_9);





 if (VAR_24->v_mount != VAR_26->v_mount ||
     (VAR_27 != ((void*)0) && VAR_24->v_mount != VAR_27->v_mount)) {
  VAR_37 = VAR_8;
  goto out;
 }


 if (VAR_24 == VAR_27) {
  VAR_37 = 0;
  goto out;
 }





 if (VAR_23 != VAR_26 && VAR_23 != VAR_27) {
  if (FUNC_30(VAR_23, VAR_13 | VAR_14) != 0) {
   VAR_29 = VAR_26->v_mount;
   VAR_37 = FUNC_28(VAR_29, 0);
   if (VAR_37 != 0) {
    VAR_29 = ((void*)0);
    goto out;
   }
   VAR_37 = FUNC_26(VAR_23, &VAR_24, VAR_26, &VAR_27,
       VAR_25, VAR_28);
   if (VAR_37 != 0) {
    FUNC_29(VAR_29);
    return (VAR_37);
   }
   FUNC_0(VAR_23,
       "tmpfs_rename: fdvp not locked");
   FUNC_0(VAR_26,
       "tmpfs_rename: tdvp not locked");
   if (VAR_27 != ((void*)0))
    FUNC_0(VAR_27,
        "tmpfs_rename: tvp not locked");
   if (VAR_24 == VAR_27) {
    VAR_37 = 0;
    goto out_locked;
   }
  }
 }

 VAR_32 = FUNC_9(VAR_26->v_mount);
 VAR_36 = FUNC_12(VAR_26);
 VAR_35 = (VAR_27 == ((void*)0)) ? ((void*)0) : FUNC_13(VAR_27);
 VAR_33 = FUNC_12(VAR_23);
 VAR_34 = FUNC_13(VAR_24);
 VAR_31 = FUNC_21(VAR_33, VAR_34, VAR_25);





 if (VAR_31 == ((void*)0)) {
  if ((VAR_25->cn_flags & VAR_11) != 0 ||
      (VAR_25->cn_namelen == 1 && VAR_25->cn_nameptr[0] == '.'))
   VAR_37 = VAR_2;
  else
   VAR_37 = VAR_4;
  goto out_locked;
 }
 FUNC_2(VAR_31->td_node == VAR_34);
 if (VAR_27 != ((void*)0)) {
  FUNC_2(VAR_35 != ((void*)0));

  if ((VAR_35->tn_flags & (VAR_18 | VAR_10 | VAR_0)) ||
      (VAR_36->tn_flags & (VAR_0 | VAR_10))) {
   VAR_37 = VAR_7;
   goto out_locked;
  }

  if (VAR_34->tn_type == VAR_21 && VAR_35->tn_type == VAR_21) {
   if (VAR_35->tn_size > 0) {
    VAR_37 = VAR_6;
    goto out_locked;
   }
  } else if (VAR_34->tn_type == VAR_21 && VAR_35->tn_type != VAR_21) {
   VAR_37 = VAR_5;
   goto out_locked;
  } else if (VAR_34->tn_type != VAR_21 && VAR_35->tn_type == VAR_21) {
   VAR_37 = VAR_3;
   goto out_locked;
  } else {
   FUNC_2(VAR_34->tn_type != VAR_21 &&
    VAR_35->tn_type != VAR_21);
  }
 }

 if ((VAR_34->tn_flags & (VAR_18 | VAR_10 | VAR_0))
     || (VAR_33->tn_flags & (VAR_0 | VAR_10))) {
  VAR_37 = VAR_7;
  goto out_locked;
 }





 if (VAR_25->cn_namelen != VAR_28->cn_namelen ||
     FUNC_14(VAR_25->cn_nameptr, VAR_28->cn_nameptr, VAR_25->cn_namelen) != 0) {
  VAR_30 = FUNC_18(VAR_28->cn_namelen, VAR_16, VAR_17);
 } else
  VAR_30 = ((void*)0);





 if (VAR_33 != VAR_36) {




  if (VAR_31->td_node->tn_type == VAR_21) {
   struct tmpfs_node *VAR_38;






   VAR_38 = VAR_36;





   FUNC_4(VAR_32);
   FUNC_5(VAR_38);
   while (VAR_38 != VAR_38->tn_dir.tn_parent) {
    struct tmpfs_node *VAR_39;

    if (VAR_38 == VAR_34) {
     FUNC_6(VAR_38);
     FUNC_7(VAR_32);
     VAR_37 = VAR_2;
     if (VAR_30 != ((void*)0))
          FUNC_17(VAR_30, VAR_16);
     goto out_locked;
    }
    VAR_39 = VAR_38->tn_dir.tn_parent;
    FUNC_6(VAR_38);
    if (VAR_39 == ((void*)0)) {
     VAR_38 = ((void*)0);
     break;
    }
    FUNC_5(VAR_39);
    if (VAR_39->tn_dir.tn_parent == ((void*)0)) {
     FUNC_6(VAR_39);
     VAR_38 = ((void*)0);
     break;
    }
    VAR_38 = VAR_39;
   }
   FUNC_7(VAR_32);
   if (VAR_38 == ((void*)0)) {
    VAR_37 = VAR_2;
    if (VAR_30 != ((void*)0))
         FUNC_17(VAR_30, VAR_16);
    goto out_locked;
   }
   FUNC_6(VAR_38);


   FUNC_8(VAR_34);
   FUNC_5(VAR_31->td_node);
   VAR_31->td_node->tn_dir.tn_parent = VAR_36;
   FUNC_6(VAR_31->td_node);






   FUNC_5(VAR_36);
   FUNC_3(VAR_36);
   VAR_36->tn_links++;
   FUNC_6(VAR_36);

   FUNC_5(VAR_33);
   FUNC_3(VAR_33);
   VAR_33->tn_links--;
   FUNC_6(VAR_33);
  }
 }





 FUNC_20(VAR_23, VAR_31);

 if (VAR_25->cn_flags & VAR_1)
  FUNC_22(VAR_23, VAR_25);
 if (VAR_28->cn_flags & VAR_12)
  FUNC_23(VAR_26, VAR_28);





 if (VAR_30 != ((void*)0)) {
  FUNC_2(VAR_28->cn_namelen <= VAR_15);

  FUNC_17(VAR_31->ud.td_name, VAR_16);
  VAR_31->ud.td_name = VAR_30;
  FUNC_24(VAR_31, VAR_28->cn_nameptr, VAR_28->cn_namelen);

  VAR_34->tn_status |= VAR_19;
  VAR_36->tn_status |= VAR_20;
 }





 if (VAR_27 != ((void*)0)) {
  struct tmpfs_dirent *VAR_40;


  VAR_40 = FUNC_21(VAR_36, VAR_35, VAR_28);
  FUNC_20(VAR_26, VAR_40);






  FUNC_25(FUNC_9(VAR_27->v_mount), VAR_40);
 }

 FUNC_19(VAR_26, VAR_31);

 if (FUNC_27(VAR_24)) {
  FUNC_15(VAR_24);
  if (VAR_27 != ((void*)0))
   FUNC_15(VAR_27);
  FUNC_16(VAR_26);
 }

 VAR_37 = 0;

out_locked:
 if (VAR_23 != VAR_26 && VAR_23 != VAR_27)
  FUNC_11(VAR_23, 0);

out:





 if (VAR_26 == VAR_27)
  FUNC_32(VAR_26);
 else
  FUNC_31(VAR_26);
 if (VAR_27 != ((void*)0))
  FUNC_31(VAR_27);


 FUNC_32(VAR_23);
 FUNC_32(VAR_24);

 if (VAR_29 != ((void*)0))
  FUNC_29(VAR_29);

 return (VAR_37);
}
