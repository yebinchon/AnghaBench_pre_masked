
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_type; int v_vflag; struct unionfs_node* v_data; int v_vnlock; } ;
struct unionfs_node {char* un_path; struct vnode* un_dvp; struct vnode* un_lowervp; struct vnode* un_uppervp; struct vnode* un_vnode; int un_hashmask; int un_hashtbl; } ;
struct unionfs_mount {struct vnode* um_lowervp; struct vnode* um_uppervp; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct componentname {int cn_lkflags; char* cn_nameptr; int cn_flags; int cn_namelen; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct unionfs_mount* FUNC_0 (struct mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct vnode* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct unionfs_node*,int ) ;
 int FUNC_3 (char*,struct mount*,int *,struct vnode**) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct vnode*,struct mount*) ;
 struct unionfs_node* FUNC_6 (int,int ,int) ;
 int FUNC_7 (char*) ;
 struct vnode* FUNC_8 (struct vnode*,struct vnode*,struct vnode*,char*) ;
 struct vnode* FUNC_9 (struct unionfs_node*,struct vnode*,char*) ;
 int VAR_13 ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct mount *VAR_14, struct vnode *VAR_15,
  struct vnode *VAR_16, struct vnode *VAR_17,
  struct vnode **VAR_18, struct componentname *VAR_19,
  struct thread *VAR_20)
{
 struct unionfs_mount *VAR_21;
 struct unionfs_node *VAR_22;
 struct vnode *VAR_23;
 int VAR_24;
 int VAR_25;
 enum vtype VAR_26;
 char *VAR_27;

 VAR_21 = FUNC_0(VAR_14);
 VAR_25 = (VAR_19 ? VAR_19->cn_lkflags : 0);
 VAR_27 = (VAR_19 ? VAR_19->cn_nameptr : ((void*)0));
 *VAR_18 = VAR_9;

 if (VAR_15 == VAR_9 && VAR_16 == VAR_9)
  FUNC_7("unionfs_nodeget: upper and lower is null");

 VAR_26 = (VAR_15 != VAR_9 ? VAR_15->v_type : VAR_16->v_type);


 if (VAR_19 && !(VAR_19->cn_flags & VAR_1))
  VAR_27 = ((void*)0);


 if (VAR_27 != ((void*)0) && VAR_17 != VAR_9 && VAR_26 == VAR_11) {
  VAR_23 = FUNC_8(VAR_15, VAR_16, VAR_17, VAR_27);
  if (VAR_23 != VAR_9) {
   FUNC_11(VAR_23);
   *VAR_18 = VAR_23;
   goto unionfs_nodeget_out;
  }
 }

 if ((VAR_15 == VAR_9 || VAR_21->um_uppervp != VAR_15) ||
     (VAR_16 == VAR_9 || VAR_21->um_lowervp != VAR_16)) {

  if (VAR_17 == VAR_9)
   return (VAR_0);
 }
 VAR_22 = FUNC_6(sizeof(struct unionfs_node),
     VAR_5, VAR_7 | VAR_8);

 VAR_24 = FUNC_3("unionfs", VAR_14, &VAR_13, &VAR_23);
 if (VAR_24 != 0) {
  FUNC_2(VAR_22, VAR_5);
  return (VAR_24);
 }
 VAR_24 = FUNC_5(VAR_23, VAR_14);
 if (VAR_24 != 0) {
  FUNC_2(VAR_22, VAR_5);
  return (VAR_24);
 }
 if (VAR_17 != VAR_9)
  FUNC_11(VAR_17);
 if (VAR_15 != VAR_9)
  FUNC_11(VAR_15);
 if (VAR_16 != VAR_9)
  FUNC_11(VAR_16);

 if (VAR_26 == VAR_11)
  VAR_22->un_hashtbl = FUNC_4(VAR_10, VAR_4,
      &(VAR_22->un_hashmask));

 VAR_22->un_vnode = VAR_23;
 VAR_22->un_uppervp = VAR_15;
 VAR_22->un_lowervp = VAR_16;
 VAR_22->un_dvp = VAR_17;
 if (VAR_15 != VAR_9)
  VAR_23->v_vnlock = VAR_15->v_vnlock;
 else
  VAR_23->v_vnlock = VAR_16->v_vnlock;

 if (VAR_27 != ((void*)0)) {
  VAR_22->un_path = (char *)
      FUNC_6(VAR_19->cn_namelen +1, VAR_6, VAR_7|VAR_8);
  FUNC_1(VAR_19->cn_nameptr, VAR_22->un_path, VAR_19->cn_namelen);
  VAR_22->un_path[VAR_19->cn_namelen] = '\0';
 }
 VAR_23->v_type = VAR_26;
 VAR_23->v_data = VAR_22;

 if ((VAR_15 != VAR_9 && VAR_21->um_uppervp == VAR_15) &&
     (VAR_16 != VAR_9 && VAR_21->um_lowervp == VAR_16))
  VAR_23->v_vflag |= VAR_12;

 if (VAR_27 != ((void*)0) && VAR_17 != VAR_9 && VAR_26 == VAR_11)
  *VAR_18 = FUNC_9(VAR_22, VAR_17, VAR_27);
 if ((*VAR_18) != VAR_9) {
  if (VAR_17 != VAR_9)
   FUNC_12(VAR_17);
  if (VAR_15 != VAR_9)
   FUNC_12(VAR_15);
  if (VAR_16 != VAR_9)
   FUNC_12(VAR_16);

  VAR_22->un_uppervp = VAR_9;
  VAR_22->un_lowervp = VAR_9;
  VAR_22->un_dvp = VAR_9;
  FUNC_12(VAR_23);
  VAR_23 = *VAR_18;
  FUNC_11(VAR_23);
 } else
  *VAR_18 = VAR_23;

unionfs_nodeget_out:
 if (VAR_25 & VAR_3)
  FUNC_10(VAR_23, VAR_25 | VAR_2);

 return (0);
}
