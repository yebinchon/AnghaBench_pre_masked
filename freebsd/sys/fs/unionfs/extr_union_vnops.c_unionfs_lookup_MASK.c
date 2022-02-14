
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct vop_cachedlookup_args {struct vnode** a_vpp; struct vnode* a_dvp; struct componentname* a_cnp; } ;
struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct vattr {int va_flags; } ;
struct unionfs_node {struct vnode* un_dvp; struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct thread {int dummy; } ;
struct componentname {scalar_t__ cn_nameiop; scalar_t__ cn_flags; char* cn_nameptr; int cn_lkflags; int cn_namelen; int cn_cred; } ;
struct TYPE_3__ {int mnt_flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_1__*) ;
 struct vnode* VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (struct vnode*,struct vattr*,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,struct vnode**,struct componentname*) ;
 int FUNC_6 (struct vnode*,int ) ;
 scalar_t__ VAR_21 ;
 struct unionfs_node* FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,struct vnode*,struct componentname*) ;
 struct thread* VAR_22 ;
 int FUNC_9 (int ,struct vnode*,struct unionfs_node*,struct componentname*,struct thread*) ;
 int FUNC_10 (TYPE_1__*,struct vnode*,struct vnode*,struct vnode*,struct vnode**,struct componentname*,struct thread*) ;
 int FUNC_11 (struct vnode*,int) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct vnode*) ;

__attribute__((used)) static int
FUNC_15(struct vop_cachedlookup_args *VAR_23)
{
 int VAR_24;
 int VAR_25;
 int VAR_26 , VAR_27, VAR_28;
 u_long VAR_29;
 u_long VAR_30, VAR_31;
 struct unionfs_node *VAR_32;
 struct vnode *VAR_33, *VAR_34, *VAR_35, *VAR_36, *VAR_37, *VAR_38, *VAR_39;
 struct vattr VAR_40;
 struct componentname *VAR_41;
 struct thread *VAR_42;

 VAR_24 = 0;
 VAR_25 = 0;
 VAR_26 = VAR_27 = VAR_28 = VAR_3;
 VAR_41 = VAR_23->a_cnp;
 VAR_29 = VAR_41->cn_nameiop;
 VAR_30 = VAR_41->cn_flags;
 VAR_33 = VAR_23->a_dvp;
 VAR_32 = FUNC_7(VAR_33);
 VAR_34 = VAR_32->un_uppervp;
 VAR_35 = VAR_32->un_lowervp;
 VAR_36 = VAR_37 = VAR_38 = VAR_17;
 VAR_42 = VAR_22;
 *(VAR_23->a_vpp) = VAR_17;

 FUNC_2("unionfs_lookup: enter: nameiop=%ld, flags=%lx, path=%s\n", VAR_29, VAR_30, VAR_41->cn_nameptr);

 if (VAR_33->v_type != VAR_20)
  return (VAR_4);




 if ((VAR_30 & VAR_7) &&
     (VAR_33->v_mount->mnt_flag & VAR_16) &&
     VAR_14 != VAR_29)
  return (VAR_5);




 if (VAR_30 & VAR_6) {
  if (VAR_14 != VAR_29 && VAR_34 == VAR_17)
   return (VAR_5);

  if (VAR_34 != VAR_17) {
   VAR_39 = VAR_34;
   if (VAR_35 != VAR_17)
    FUNC_6(VAR_35, VAR_10);
  }
  else
   VAR_39 = VAR_35;

  VAR_26 = FUNC_5(VAR_39, &VAR_36, VAR_41);

  if (VAR_39 == VAR_34 && VAR_35 != VAR_17) {
   FUNC_6(VAR_34, VAR_10);
   FUNC_11(VAR_33, VAR_9 | VAR_11);
  }

  if (VAR_26 == 0) {





   if (VAR_29 == VAR_0 || VAR_29 == VAR_19 ||
       (VAR_41->cn_lkflags & VAR_13))
    FUNC_6(VAR_36, VAR_10);
   FUNC_14(VAR_36);

   FUNC_6(VAR_33, VAR_10);
   *(VAR_23->a_vpp) = VAR_32->un_dvp;
   FUNC_13(VAR_32->un_dvp);

   if (VAR_29 == VAR_0 || VAR_29 == VAR_19)
    FUNC_11(VAR_32->un_dvp, VAR_9 | VAR_11);
   else if (VAR_41->cn_lkflags & VAR_13)
    FUNC_11(VAR_32->un_dvp, VAR_41->cn_lkflags |
        VAR_11);

   FUNC_11(VAR_33, VAR_9 | VAR_11);
  } else if (VAR_26 == VAR_3 && (VAR_30 & VAR_15) != 0)
   FUNC_8(VAR_33, VAR_17, VAR_41);

  FUNC_2("unionfs_lookup: leave (%d)\n", VAR_26);

  return (VAR_26);
 }




 if (VAR_34 != VAR_17) {
  VAR_27 = FUNC_5(VAR_34, &VAR_37, VAR_41);

  if (VAR_27 == 0) {
   if (VAR_34 == VAR_37) {
    FUNC_14(VAR_37);
    *(VAR_23->a_vpp) = VAR_33;
    FUNC_13(VAR_33);

    FUNC_2("unionfs_lookup: leave (%d)\n", VAR_27);

    return (VAR_27);
   }
   if (VAR_29 == VAR_0 || VAR_29 == VAR_19 ||
       (VAR_41->cn_lkflags & VAR_13))
    FUNC_6(VAR_37, VAR_10);
  }


  if (VAR_27 == VAR_3 || VAR_27 == VAR_2)
   if (VAR_41->cn_flags & VAR_8)
    VAR_24 = 1;
  if (VAR_24 == 0 && VAR_35 != VAR_17)
   if (!FUNC_3(VAR_34, &VAR_40, VAR_41->cn_cred) &&
       (VAR_40.va_flags & VAR_18))
    VAR_24 = 1;



 }




 if (VAR_35 != VAR_17 && !(VAR_30 & VAR_1) && VAR_24 == 0) {

  VAR_41->cn_nameiop = VAR_14;
  VAR_31 = VAR_41->cn_flags;
  VAR_41->cn_flags = VAR_30;

  VAR_28 = FUNC_5(VAR_35, &VAR_38, VAR_41);

  VAR_41->cn_nameiop = VAR_29;
  if (VAR_34 != VAR_17 && (VAR_27 == 0 || VAR_27 == VAR_2))
   VAR_41->cn_flags = VAR_31;

  if (VAR_28 == 0) {
   if (VAR_35 == VAR_38) {
    if (VAR_37 != VAR_17)
     FUNC_14(VAR_37);
    FUNC_14(VAR_38);
    *(VAR_23->a_vpp) = VAR_33;
    FUNC_13(VAR_33);

    FUNC_2("unionfs_lookup: leave (%d)\n", VAR_28);

    return (VAR_28);
   }
   if (VAR_41->cn_lkflags & VAR_13)
    FUNC_6(VAR_38, VAR_10);
  }
 }




 if (VAR_37 == VAR_17 && VAR_38 == VAR_17) {
  FUNC_2("unionfs_lookup: leave (%d)\n",
      (VAR_34 != VAR_17 ? VAR_27 : VAR_28));
  return (VAR_34 != VAR_17 ? VAR_27 : VAR_28);
 }




 if (VAR_37 != VAR_17 && VAR_38 != VAR_17 && VAR_37->v_type != VAR_38->v_type) {
  FUNC_14(VAR_38);
  VAR_38 = VAR_17;
 }




 if (VAR_27 != 0 && VAR_27 != VAR_2 && VAR_34 != VAR_17 &&
     VAR_28 == 0 && VAR_38 != VAR_17 && VAR_38->v_type == VAR_20 &&
     !(VAR_33->v_mount->mnt_flag & VAR_16) &&
     (1 < VAR_41->cn_namelen || '.' != *(VAR_41->cn_nameptr))) {

  VAR_26 = FUNC_10(VAR_33->v_mount, VAR_17, VAR_38, VAR_33, &VAR_36,
      VAR_41, VAR_42);
  if (VAR_26 != 0)
   goto unionfs_lookup_out;

  if (VAR_12 == (VAR_41->cn_lkflags & VAR_13))
   FUNC_6(VAR_36, VAR_10);
  if (VAR_9 != FUNC_4(VAR_36)) {
   FUNC_11(VAR_36, VAR_9 | VAR_11);
   VAR_25 = 1;
  }
  VAR_26 = FUNC_9(FUNC_0(VAR_33->v_mount),
      VAR_34, FUNC_7(VAR_36), VAR_41, VAR_42);
  if (VAR_25 != 0)
   FUNC_6(VAR_36, VAR_10);
  if (VAR_26 != 0) {
   FUNC_1("unionfs_lookup: Unable to create shadow dir.");
   if ((VAR_41->cn_lkflags & VAR_13) == VAR_9)
    FUNC_12(VAR_36);
   else
    FUNC_14(VAR_36);
   goto unionfs_lookup_out;
  }
  if ((VAR_41->cn_lkflags & VAR_13) == VAR_12)
   FUNC_11(VAR_36, VAR_12 | VAR_11);
 }



 else {
  if (VAR_37 != VAR_17)
   VAR_26 = VAR_27;
  else
   VAR_26 = VAR_28;
  if (VAR_26 != 0)
   goto unionfs_lookup_out;



  if (VAR_37 != VAR_17 && VAR_37->v_type == VAR_21) {
   VAR_36 = VAR_37;
   FUNC_13(VAR_36);
   if (VAR_41->cn_lkflags & VAR_13)
    FUNC_11(VAR_36, VAR_41->cn_lkflags | VAR_11);
  }
  else if (VAR_38 != VAR_17 && VAR_38->v_type == VAR_21) {
   VAR_36 = VAR_38;
   FUNC_13(VAR_36);
   if (VAR_41->cn_lkflags & VAR_13)
    FUNC_11(VAR_36, VAR_41->cn_lkflags | VAR_11);
  }



  else
   VAR_26 = FUNC_10(VAR_33->v_mount, VAR_37, VAR_38,
       VAR_33, &VAR_36, VAR_41, VAR_42);
  if (VAR_26 != 0) {
   FUNC_1("unionfs_lookup: Unable to create unionfs vnode.");
   goto unionfs_lookup_out;
  }
  if ((VAR_29 == VAR_0 || VAR_29 == VAR_19) &&
      (VAR_41->cn_lkflags & VAR_13) == 0)
   FUNC_11(VAR_36, VAR_9 | VAR_11);
 }

 *(VAR_23->a_vpp) = VAR_36;

 if ((VAR_30 & VAR_15) && VAR_36->v_type != VAR_21)
  FUNC_8(VAR_33, VAR_36, VAR_41);

unionfs_lookup_out:
 if (VAR_37 != VAR_17)
  FUNC_14(VAR_37);
 if (VAR_38 != VAR_17)
  FUNC_14(VAR_38);

 if (VAR_26 == VAR_3 && (VAR_30 & VAR_15) != 0)
  FUNC_8(VAR_33, VAR_17, VAR_41);

 FUNC_2("unionfs_lookup: leave (%d)\n", VAR_26);

 return (VAR_26);
}
