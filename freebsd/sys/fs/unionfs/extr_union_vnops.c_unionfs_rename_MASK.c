
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_rename_args {struct componentname* a_tcnp; struct vnode* a_tvp; struct vnode* a_tdvp; struct componentname* a_fcnp; struct vnode* a_fvp; struct vnode* a_fdvp; } ;
struct vnode {scalar_t__ v_mount; int v_type; int * v_op; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct unionfs_mount {int dummy; } ;
struct thread {int dummy; } ;
struct componentname {int cn_flags; int cn_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct unionfs_mount* FUNC_1 (scalar_t__) ;
 struct vnode* VAR_8 ;
 int FUNC_2 (char*,...) ;

 int FUNC_3 (struct vnode*,struct vnode*,struct componentname*,struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_4 (struct vnode*,int ) ;

 struct unionfs_node* FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 struct thread* VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct unionfs_node*,int,int ,struct thread*) ;
 int FUNC_9 (struct unionfs_mount*,struct vnode*,struct unionfs_node*,struct componentname*,struct thread*) ;
 int FUNC_10 (struct vnode*,struct componentname*,struct thread*) ;
 int FUNC_11 (struct vnode*,struct componentname*,struct thread*) ;
 int VAR_10 ;
 int FUNC_12 (struct vnode*,int) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct vnode*) ;
 int FUNC_15 (struct vnode*) ;

__attribute__((used)) static int
FUNC_16(struct vop_rename_args *VAR_11)
{
 int VAR_12;
 struct vnode *VAR_13;
 struct vnode *VAR_14;
 struct componentname *VAR_15;
 struct vnode *VAR_16;
 struct vnode *VAR_17;
 struct componentname *VAR_18;
 struct vnode *VAR_19;
 struct vnode *VAR_20;
 struct thread *VAR_21;


 struct vnode *VAR_22;
 struct vnode *VAR_23;
 struct vnode *VAR_24;
 struct vnode *VAR_25;

 int VAR_26;
 struct unionfs_mount *VAR_27;
 struct unionfs_node *VAR_28;

 FUNC_2("unionfs_rename: enter\n");

 VAR_12 = 0;
 VAR_13 = VAR_11->a_fdvp;
 VAR_14 = VAR_11->a_fvp;
 VAR_15 = VAR_11->a_fcnp;
 VAR_16 = VAR_11->a_tdvp;
 VAR_17 = VAR_11->a_tvp;
 VAR_18 = VAR_11->a_tcnp;
 VAR_19 = VAR_8;
 VAR_20 = VAR_8;
 VAR_21 = VAR_9;
 VAR_22 = VAR_13;
 VAR_23 = VAR_14;
 VAR_24 = VAR_16;
 VAR_25 = VAR_17;
 VAR_26 = 0;







 if (VAR_14->v_mount != VAR_16->v_mount ||
     (VAR_17 != VAR_8 && VAR_14->v_mount != VAR_17->v_mount)) {
  if (VAR_14->v_op != &VAR_10)
   VAR_12 = VAR_2;
  else
   VAR_12 = VAR_3;
  goto unionfs_rename_abort;
 }


 if (VAR_14 == VAR_17)
  goto unionfs_rename_abort;





 FUNC_0(VAR_13);
 FUNC_0(VAR_14);
 FUNC_0(VAR_16);
 if (VAR_17 != VAR_8)
  FUNC_0(VAR_17);

 VAR_28 = FUNC_5(VAR_13);



 if (VAR_28->un_uppervp == VAR_8) {
  VAR_12 = VAR_2;
  goto unionfs_rename_abort;
 }
 VAR_22 = VAR_28->un_uppervp;
 FUNC_14(VAR_22);

 VAR_28 = FUNC_5(VAR_14);



 VAR_27 = FUNC_1(VAR_14->v_mount);
 if (VAR_28->un_uppervp == VAR_8) {
  switch (VAR_14->v_type) {
  case 128:
   if ((VAR_12 = FUNC_12(VAR_14, VAR_5)) != 0)
    goto unionfs_rename_abort;
   VAR_12 = FUNC_8(VAR_28, 1, VAR_15->cn_cred, VAR_21);
   FUNC_4(VAR_14, VAR_6);
   if (VAR_12 != 0)
    goto unionfs_rename_abort;
   break;
  case 129:
   if ((VAR_12 = FUNC_12(VAR_14, VAR_5)) != 0)
    goto unionfs_rename_abort;
   VAR_12 = FUNC_9(VAR_27, VAR_22, VAR_28, VAR_15, VAR_21);
   FUNC_4(VAR_14, VAR_6);
   if (VAR_12 != 0)
    goto unionfs_rename_abort;
   break;
  default:
   VAR_12 = VAR_2;
   goto unionfs_rename_abort;
  }

  VAR_26 = 1;
 }

 if (VAR_28->un_lowervp != VAR_8)
  VAR_15->cn_flags |= VAR_0;
 VAR_23 = VAR_28->un_uppervp;
 FUNC_14(VAR_23);

 VAR_28 = FUNC_5(VAR_16);



 if (VAR_28->un_uppervp == VAR_8) {
  VAR_12 = VAR_2;
  goto unionfs_rename_abort;
 }
 VAR_24 = VAR_28->un_uppervp;
 VAR_19 = VAR_28->un_lowervp;
 FUNC_14(VAR_24);

 if (VAR_16 == VAR_17) {
  VAR_25 = VAR_24;
  FUNC_14(VAR_25);
 } else if (VAR_17 != VAR_8) {
  VAR_28 = FUNC_5(VAR_17);



  if (VAR_28->un_uppervp == VAR_8)
   VAR_25 = VAR_8;
  else {
   if (VAR_17->v_type == 129) {
    VAR_12 = VAR_1;
    goto unionfs_rename_abort;
   }
   VAR_25 = VAR_28->un_uppervp;
   VAR_20 = VAR_28->un_lowervp;
   FUNC_14(VAR_25);
  }
 }

 if (VAR_23 == VAR_25)
  goto unionfs_rename_abort;

 if (VAR_26 != 0) {
  if ((VAR_12 = FUNC_12(VAR_13, VAR_5)) != 0)
   goto unionfs_rename_abort;
  VAR_12 = FUNC_10(VAR_13, VAR_15, VAR_21);
  FUNC_4(VAR_13, VAR_6);
  if (VAR_12 != 0)
   goto unionfs_rename_abort;


  if (VAR_17 != VAR_8 && VAR_17 != VAR_16)
   FUNC_4(VAR_17, VAR_6);
  VAR_12 = FUNC_11(VAR_16, VAR_18, VAR_21);
  if (VAR_17 != VAR_8 && VAR_17 != VAR_16)
   FUNC_12(VAR_17, VAR_5 | VAR_7);
  if (VAR_12 != 0)
   goto unionfs_rename_abort;
 }

 VAR_12 = FUNC_3(VAR_22, VAR_23, VAR_15, VAR_24, VAR_25, VAR_18);

 if (VAR_12 == 0) {
  if (VAR_25 != VAR_8 && VAR_25->v_type == 129)
   FUNC_6(VAR_16);
  if (VAR_14->v_type == 129 && VAR_13 != VAR_16)
   FUNC_6(VAR_13);
 }

 if (VAR_19 != VAR_8)
  FUNC_4(VAR_19, VAR_6);
 if (VAR_16 != VAR_24)
  FUNC_15(VAR_16);
 if (VAR_20 != VAR_8)
  FUNC_4(VAR_20, VAR_6);
 if (VAR_17 != VAR_25 && VAR_17 != VAR_8) {
  if (VAR_25 == VAR_8)
   FUNC_13(VAR_17);
  else
   FUNC_15(VAR_17);
 }
 if (VAR_13 != VAR_22)
  FUNC_15(VAR_13);
 if (VAR_14 != VAR_23)
  FUNC_15(VAR_14);

 FUNC_2("unionfs_rename: leave (%d)\n", VAR_12);

 return (VAR_12);

unionfs_rename_abort:
 FUNC_13(VAR_16);
 if (VAR_16 != VAR_24)
  FUNC_15(VAR_24);
 if (VAR_17 != VAR_8) {
  if (VAR_16 != VAR_17)
   FUNC_13(VAR_17);
  else
   FUNC_15(VAR_17);
 }
 if (VAR_17 != VAR_25 && VAR_25 != VAR_8)
  FUNC_15(VAR_25);
 if (VAR_13 != VAR_22)
  FUNC_15(VAR_22);
 if (VAR_14 != VAR_23)
  FUNC_15(VAR_23);
 FUNC_15(VAR_13);
 FUNC_15(VAR_14);

 FUNC_2("unionfs_rename: leave (%d)\n", VAR_12);

 return (VAR_12);
}
