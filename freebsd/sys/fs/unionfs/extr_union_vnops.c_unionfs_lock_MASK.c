
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_lock1_args {int a_flags; struct vnode* a_vp; } ;
struct vnode {int v_iflag; struct mount* v_mount; } ;
struct unionfs_node {struct vnode* un_uppervp; struct vnode* un_lowervp; } ;
struct unionfs_mount {struct vnode* um_rootvp; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct unionfs_mount* FUNC_1 (struct mount*) ;
 int VAR_8 ;
 struct vnode* VAR_9 ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_10 ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,int) ;
 int FUNC_6 (struct vnode*,int) ;
 struct unionfs_node* FUNC_7 (struct vnode*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct vnode*,int) ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct vop_lock1_args*) ;

__attribute__((used)) static int
FUNC_15(struct vop_lock1_args *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 struct mount *VAR_17;
 struct unionfs_mount *VAR_18;
 struct unionfs_node *VAR_19;
 struct vnode *VAR_20;
 struct vnode *VAR_21;
 struct vnode *VAR_22;

 FUNC_0(VAR_11->a_vp);

 VAR_12 = 0;
 VAR_15 = 1;
 VAR_16 = 0;
 VAR_13 = VAR_11->a_flags;
 VAR_20 = VAR_11->a_vp;

 if (VAR_5 == (VAR_13 & VAR_6) || !(VAR_13 & VAR_6))
  return (FUNC_6(VAR_20, VAR_13 | VAR_5));

 if ((VAR_13 & VAR_3) == 0)
  FUNC_2(VAR_20);

 VAR_17 = VAR_20->v_mount;
 if (VAR_17 == ((void*)0))
  goto unionfs_lock_null_vnode;

 VAR_18 = FUNC_1(VAR_17);
 VAR_19 = FUNC_7(VAR_20);
 if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
  goto unionfs_lock_null_vnode;
 VAR_22 = VAR_19->un_lowervp;
 VAR_21 = VAR_19->un_uppervp;

 if ((VAR_14 = FUNC_9(VAR_20, VAR_13)) == 0)
  FUNC_8("unknown lock type: 0x%x", VAR_13 & VAR_6);

 if ((VAR_20->v_iflag & VAR_10) != 0)
  VAR_13 |= VAR_4;





 if ((VAR_13 & VAR_6) == VAR_2 &&
     VAR_20 == VAR_18->um_rootvp)
  VAR_13 |= VAR_1;

 if (VAR_22 != VAR_9) {
  if (VAR_21 != VAR_9 && VAR_13 & VAR_7) {

   FUNC_13(VAR_21);
   VAR_16 = 1;
   FUNC_6(VAR_21, VAR_5);
   VAR_19 = FUNC_7(VAR_20);
   if (VAR_19 == ((void*)0)) {

    FUNC_4(VAR_20);
    FUNC_6(VAR_22, VAR_5);
    FUNC_11(VAR_21);
    return (VAR_0);
   }
  }
  FUNC_3(VAR_22, VAR_8);
  VAR_13 |= VAR_3;
  FUNC_12(VAR_22);

  FUNC_4(VAR_20);
  VAR_11->a_flags &= ~VAR_3;

  VAR_12 = FUNC_5(VAR_22, VAR_13);

  FUNC_2(VAR_20);
  VAR_19 = FUNC_7(VAR_20);
  if (VAR_19 == ((void*)0)) {

   FUNC_4(VAR_20);
   if (VAR_12 == 0)
    FUNC_6(VAR_22, VAR_5);
   FUNC_11(VAR_22);
   if (VAR_16 != 0)
    FUNC_11(VAR_21);
   return (FUNC_14(VAR_11));
  }
 }

 if (VAR_12 == 0 && VAR_21 != VAR_9) {
  if (VAR_16 && VAR_13 & VAR_7) {
   VAR_13 &= ~VAR_6;
   VAR_13 |= VAR_2;
  }
  FUNC_3(VAR_21, VAR_8);
  VAR_13 |= VAR_3;
  if (VAR_16 == 0) {
   FUNC_12(VAR_21);
   VAR_16 = 1;
  }

  FUNC_4(VAR_20);
  VAR_11->a_flags &= ~VAR_3;

  VAR_12 = FUNC_5(VAR_21, VAR_13);

  FUNC_2(VAR_20);
  VAR_19 = FUNC_7(VAR_20);
  if (VAR_19 == ((void*)0)) {

   FUNC_4(VAR_20);
   if (VAR_12 == 0)
    FUNC_6(VAR_21, VAR_5);
   FUNC_11(VAR_21);
   if (VAR_22 != VAR_9) {
    FUNC_6(VAR_22, VAR_5);
    FUNC_11(VAR_22);
   }
   return (FUNC_14(VAR_11));
  }
  if (VAR_12 != 0 && VAR_22 != VAR_9) {

   FUNC_4(VAR_20);
   FUNC_10(VAR_22, VAR_14);
   VAR_15 = 0;
  }
 }

 if (VAR_15)
  FUNC_4(VAR_20);
 if (VAR_22 != VAR_9)
  FUNC_11(VAR_22);
 if (VAR_16 != 0)
  FUNC_11(VAR_21);

 return (VAR_12);

unionfs_lock_null_vnode:
 VAR_11->a_flags |= VAR_3;
 return (FUNC_14(VAR_11));
}
