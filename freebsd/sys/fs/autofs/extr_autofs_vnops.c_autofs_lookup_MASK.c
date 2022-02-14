
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_lookup_args {struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {struct autofs_node* v_data; struct mount* v_mount; } ;
struct mount {int dummy; } ;
struct componentname {int cn_flags; int cn_namelen; char* cn_nameptr; scalar_t__ cn_nameiop; int cn_lkflags; int cn_thread; } ;
struct autofs_node {int * an_parent; } ;
struct autofs_mount {int dummy; } ;


 int FUNC_0 (struct autofs_mount*) ;
 int FUNC_1 (struct autofs_mount*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 struct autofs_mount* FUNC_4 (struct mount*) ;
 int FUNC_5 (struct autofs_node*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct autofs_node*,char*,int,struct autofs_node**) ;
 int FUNC_8 (struct autofs_node*,struct mount*,int ,struct vnode**) ;
 int FUNC_9 (struct vnode*,char*,int,struct vnode**) ;
 int VAR_6 ;
 int FUNC_10 (struct vnode*,int ,int *,int ,struct vnode**) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

__attribute__((used)) static int
FUNC_13(struct vop_lookup_args *VAR_7)
{
 struct vnode *VAR_8, *VAR_9, **VAR_10;
 struct mount *VAR_11;
 struct autofs_mount *VAR_12;
 struct autofs_node *VAR_13, *VAR_14;
 struct componentname *VAR_15;
 int VAR_16;

 VAR_8 = VAR_7->a_dvp;
 VAR_10 = VAR_7->a_vpp;
 VAR_11 = VAR_8->v_mount;
 VAR_12 = FUNC_4(VAR_11);
 VAR_13 = VAR_8->v_data;
 VAR_15 = VAR_7->a_cnp;

 if (VAR_15->cn_flags & VAR_4) {
  FUNC_3(VAR_13->an_parent != ((void*)0), ("NULL parent"));







  VAR_16 = FUNC_10(VAR_8, VAR_6,
      VAR_13->an_parent, VAR_15->cn_lkflags, VAR_10);
  if (VAR_16 != 0) {
   FUNC_2("vn_vget_ino_gen() failed with error %d",
       VAR_16);
   return (VAR_16);
  }
  return (VAR_16);
 }

 if (VAR_15->cn_namelen == 1 && VAR_15->cn_nameptr[0] == '.') {
  FUNC_12(VAR_8);
  *VAR_10 = VAR_8;

  return (0);
 }

 if (FUNC_5(VAR_13, VAR_15->cn_nameptr, VAR_15->cn_namelen) == 0 &&
     FUNC_6(VAR_15->cn_thread) == 0) {
  VAR_16 = FUNC_9(VAR_8,
      VAR_15->cn_nameptr, VAR_15->cn_namelen, &VAR_9);
  if (VAR_16 != 0)
   return (VAR_16);

  if (VAR_9 != ((void*)0)) {





   FUNC_11(VAR_9);
   return (VAR_3);
  }
 }

 FUNC_0(VAR_12);
 VAR_16 = FUNC_7(VAR_13, VAR_15->cn_nameptr, VAR_15->cn_namelen, &VAR_14);
 if (VAR_16 != 0) {
  if ((VAR_15->cn_flags & VAR_5) && VAR_15->cn_nameiop == VAR_0) {
   FUNC_1(VAR_12);
   return (VAR_1);
  }

  FUNC_1(VAR_12);
  return (VAR_2);
 }




 FUNC_1(VAR_12);

 VAR_16 = FUNC_8(VAR_14, VAR_11, VAR_15->cn_lkflags, VAR_10);
 if (VAR_16 != 0) {
  if ((VAR_15->cn_flags & VAR_5) && VAR_15->cn_nameiop == VAR_0)
   return (VAR_1);

  return (VAR_16);
 }

 return (0);
}
