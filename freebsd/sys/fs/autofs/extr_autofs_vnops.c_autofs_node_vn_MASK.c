
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_iflag; struct autofs_node* v_data; int v_vflag; int v_type; } ;
struct mount {int dummy; } ;
struct autofs_node {int an_vnode_lock; struct vnode* an_vnode; int * an_parent; int an_mount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct vnode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,struct mount*,int *,struct vnode**) ;
 int FUNC_6 (struct vnode*,struct mount*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*,int,int ) ;
 int FUNC_11 (struct vnode*,int) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct autofs_node *VAR_8, struct mount *VAR_9, int VAR_10,
    struct vnode **VAR_11)
{
 struct vnode *VAR_12;
 int VAR_13;

 FUNC_0(VAR_8->an_mount);

 FUNC_7(&VAR_8->an_vnode_lock);

 VAR_12 = VAR_8->an_vnode;
 if (VAR_12 != ((void*)0)) {
  VAR_13 = FUNC_10(VAR_12, VAR_10 | VAR_2, VAR_7);
  if (VAR_13 != 0) {
   FUNC_2("vget failed with error %d", VAR_13);
   FUNC_8(&VAR_8->an_vnode_lock);
   return (VAR_13);
  }
  if (VAR_12->v_iflag & VAR_4) {



   FUNC_1("doomed vnode");
   FUNC_8(&VAR_8->an_vnode_lock);
   FUNC_12(VAR_12);

   return (VAR_0);
  }

  *VAR_11 = VAR_12;
  FUNC_8(&VAR_8->an_vnode_lock);
  return (0);
 }

 VAR_13 = FUNC_5("autofs", VAR_9, &VAR_6, &VAR_12);
 if (VAR_13 != 0) {
  FUNC_8(&VAR_8->an_vnode_lock);
  return (VAR_13);
 }

 VAR_13 = FUNC_11(VAR_12, VAR_1 | VAR_2);
 if (VAR_13 != 0) {
  FUNC_8(&VAR_8->an_vnode_lock);
  FUNC_9(VAR_12);
  return (VAR_13);
 }

 VAR_12->v_type = VAR_3;
 if (VAR_8->an_parent == ((void*)0))
  VAR_12->v_vflag |= VAR_5;
 VAR_12->v_data = VAR_8;

 FUNC_4(VAR_12);

 VAR_13 = FUNC_6(VAR_12, VAR_9);
 if (VAR_13 != 0) {
  FUNC_1("insmntque() failed with error %d", VAR_13);
  FUNC_8(&VAR_8->an_vnode_lock);
  return (VAR_13);
 }

 FUNC_3(VAR_8->an_vnode == ((void*)0), ("lost race"));
 VAR_8->an_vnode = VAR_12;

 FUNC_8(&VAR_8->an_vnode_lock);

 *VAR_11 = VAR_12;
 return (0);
}
