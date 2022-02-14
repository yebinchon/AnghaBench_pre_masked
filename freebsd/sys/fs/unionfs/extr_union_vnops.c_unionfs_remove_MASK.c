
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_remove_args {struct vnode* a_vp; struct componentname* a_cnp; struct vnode* a_dvp; } ;
struct vnode {scalar_t__ v_type; int v_mount; int * v_op; } ;
struct unionfs_node {char* un_path; struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct unionfs_mount {scalar_t__ um_whitemode; } ;
struct thread {int dummy; } ;
struct componentname {char* cn_nameptr; int cn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct unionfs_mount* FUNC_1 (int ) ;
 struct vnode* VAR_8 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_4 (struct vnode*,int ) ;
 scalar_t__ VAR_10 ;
 struct unionfs_node* FUNC_5 (struct vnode*) ;
 struct thread* VAR_11 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct vnode*,struct componentname*,struct thread*,char*) ;
 int FUNC_8 (struct vnode*,struct vnode**,struct componentname*,struct componentname*,struct thread*,char*,int ,int ) ;
 int VAR_12 ;
 int FUNC_9 (struct vnode*,int) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct vop_remove_args *VAR_13)
{
 int VAR_14;
 char *VAR_15;
 struct unionfs_node *VAR_16;
 struct unionfs_node *VAR_17;
 struct unionfs_mount *VAR_18;
 struct vnode *VAR_19;
 struct vnode *VAR_20;
 struct vnode *VAR_21;
 struct vnode *VAR_22;
 struct componentname *VAR_23;
 struct componentname VAR_24;
 struct thread *VAR_25;

 FUNC_2("unionfs_remove: enter\n");

 FUNC_0(VAR_13->a_dvp);

 VAR_14 = 0;
 VAR_16 = FUNC_5(VAR_13->a_dvp);
 VAR_19 = VAR_16->un_uppervp;
 VAR_23 = VAR_13->a_cnp;
 VAR_25 = VAR_11;

 if (VAR_13->a_vp->v_op != &VAR_12) {
  if (VAR_13->a_vp->v_type != VAR_10)
   return (VAR_2);
  VAR_18 = ((void*)0);
  VAR_22 = VAR_20 = VAR_21 = VAR_8;

  FUNC_4(VAR_13->a_vp, VAR_6);
  VAR_14 = FUNC_8(VAR_19, &VAR_22, VAR_23, &VAR_24, VAR_25,
      VAR_23->cn_nameptr, FUNC_6(VAR_23->cn_nameptr), VAR_0);
  if (VAR_14 != 0 && VAR_14 != VAR_3) {
   FUNC_9(VAR_13->a_vp, VAR_5 | VAR_7);
   return (VAR_14);
  }

  if (VAR_14 == 0 && VAR_22 == VAR_13->a_vp) {

   VAR_20 = VAR_22;
   FUNC_11(VAR_22);
   VAR_15 = ((void*)0);
  } else {

   if (VAR_22 != VAR_8) {
    if (VAR_19 == VAR_22)
     FUNC_11(VAR_22);
    else
     FUNC_10(VAR_22);
   }
   FUNC_9(VAR_13->a_vp, VAR_5 | VAR_7);
   VAR_21 = VAR_13->a_vp;
   VAR_15 = VAR_13->a_cnp->cn_nameptr;
  }
 } else {
  VAR_18 = FUNC_1(VAR_13->a_vp->v_mount);
  VAR_17 = FUNC_5(VAR_13->a_vp);
  VAR_20 = VAR_17->un_uppervp;
  VAR_21 = VAR_17->un_lowervp;
  VAR_15 = VAR_17->un_path;
 }

 if (VAR_19 == VAR_8)
  return (VAR_4);

 if (VAR_20 != VAR_8) {




  if (VAR_18 == ((void*)0) || VAR_18->um_whitemode == VAR_9 ||
      VAR_21 != VAR_8)
   VAR_23->cn_flags |= VAR_1;
  VAR_14 = FUNC_3(VAR_19, VAR_20, VAR_23);
 } else if (VAR_21 != VAR_8)
  VAR_14 = FUNC_7(VAR_19, VAR_23, VAR_25, VAR_15);

 FUNC_2("unionfs_remove: leave (%d)\n", VAR_14);

 return (VAR_14);
}
