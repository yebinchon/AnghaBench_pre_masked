
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_cachedlookup_args {struct vnode* a_dvp; struct vnode** a_vpp; struct componentname* a_cnp; } ;
struct vnode {scalar_t__ v_type; int v_vflag; int v_mount; } ;
struct thread {int dummy; } ;
struct mqfs_node {struct mqfs_node* mn_parent; struct mqfs_info* mn_info; } ;
struct mqfs_info {int mi_lock; } ;
struct componentname {char* cn_nameptr; int cn_namelen; int cn_flags; int cn_nameiop; int cn_cred; struct thread* cn_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mqfs_node*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct vnode* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct vnode*,int ,int ,struct thread*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct vnode*) ;
 struct mqfs_node* FUNC_4 (struct vnode*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_6 (int ,struct vnode**,struct mqfs_node*) ;
 struct mqfs_node* FUNC_7 (struct mqfs_node*,char*,int,int ) ;
 int FUNC_8 (struct mqfs_node*) ;
 int FUNC_9 (struct mqfs_node*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_13(struct vop_cachedlookup_args *VAR_22)
{
 struct componentname *VAR_23;
 struct vnode *VAR_24, **VAR_25;
 struct mqfs_node *VAR_26;
 struct mqfs_node *VAR_27;
 struct mqfs_info *VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32;
 char *VAR_33;
 struct thread *VAR_34;

 VAR_23 = VAR_22->a_cnp;
 VAR_25 = VAR_22->a_vpp;
 VAR_24 = VAR_22->a_dvp;
 VAR_33 = VAR_23->cn_nameptr;
 VAR_32 = VAR_23->cn_namelen;
 VAR_34 = VAR_23->cn_thread;
 VAR_30 = VAR_23->cn_flags;
 VAR_29 = VAR_23->cn_nameiop;
 VAR_26 = FUNC_4(VAR_24);
 VAR_27 = ((void*)0);
 VAR_28 = VAR_26->mn_info;
 *VAR_25 = VAR_15;

 if (VAR_24->v_type != VAR_18)
  return (VAR_6);

 VAR_31 = FUNC_1(VAR_24, VAR_19, VAR_23->cn_cred, VAR_23->cn_thread);
 if (VAR_31)
  return (VAR_31);


 if (VAR_23->cn_namelen >= VAR_14)
  return (VAR_5);


 if (VAR_32 == 1 && VAR_33[0] == '.') {
  if ((VAR_30 & VAR_8) && VAR_29 != VAR_12)
   return (VAR_2);
  VAR_27 = VAR_26;
  *VAR_25 = VAR_24;
  FUNC_3(VAR_24);
  return (0);
 }


 if (VAR_23->cn_flags & VAR_7) {
  if (VAR_24->v_vflag & VAR_20)
   return (VAR_3);
  if ((VAR_30 & VAR_8) && VAR_29 != VAR_12)
   return (VAR_2);
  FUNC_2(VAR_24, 0);
  FUNC_0(VAR_26->mn_parent, ("non-root directory has no parent"));
  VAR_27 = VAR_26->mn_parent;
  VAR_31 = FUNC_6(VAR_24->v_mount, VAR_25, VAR_27);
  FUNC_12(VAR_24, VAR_9 | VAR_10);
  return (VAR_31);
 }


 FUNC_10(&VAR_28->mi_lock);
 VAR_27 = FUNC_7(VAR_26, VAR_33, VAR_32, VAR_23->cn_cred);
 if (VAR_27 != ((void*)0))
  FUNC_8(VAR_27);
 FUNC_11(&VAR_28->mi_lock);


 if (VAR_27 != ((void*)0)) {

  if (VAR_29 == VAR_1 && (VAR_30 & VAR_8)) {
   VAR_31 = FUNC_1(VAR_24, VAR_21, VAR_23->cn_cred, VAR_34);
   if (VAR_31) {
    FUNC_9(VAR_27);
    return (VAR_31);
   }
   if (*VAR_25 == VAR_24) {
    FUNC_3(VAR_24);
    *VAR_25 = VAR_24;
    FUNC_9(VAR_27);
    return (0);
   }
  }


  VAR_31 = FUNC_6(VAR_24->v_mount, VAR_25, VAR_27);
  FUNC_9(VAR_27);
  if (VAR_31 == 0 && VAR_23->cn_flags & VAR_13)
   FUNC_5(VAR_24, *VAR_25, VAR_23);
  return (VAR_31);
 }




 if ((VAR_29 == VAR_0 || VAR_29 == VAR_16) && (VAR_30 & VAR_11)
     && (VAR_30 & VAR_8)) {
  VAR_31 = FUNC_1(VAR_24, VAR_21, VAR_23->cn_cred, VAR_34);
  if (VAR_31)
   return (VAR_31);
  VAR_23->cn_flags |= VAR_17;
  return (VAR_4);
 }
 return (VAR_5);
}
