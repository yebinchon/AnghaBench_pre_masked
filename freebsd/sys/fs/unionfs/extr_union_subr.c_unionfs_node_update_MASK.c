
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_1__* v_vnlock; } ;
struct unionfs_node_hashhead {int dummy; } ;
struct unionfs_node {int * un_path; struct vnode* un_uppervp; struct vnode* un_dvp; struct vnode* un_lowervp; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {unsigned int lk_recurse; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (struct unionfs_node_hashhead*,struct unionfs_node*,int ) ;
 int FUNC_2 (struct unionfs_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 struct vnode* FUNC_3 (struct unionfs_node*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int VAR_5 ;
 struct unionfs_node_hashhead* FUNC_6 (struct vnode*,int *) ;
 int FUNC_7 (struct vnode*,int) ;

__attribute__((used)) static void
FUNC_8(struct unionfs_node *VAR_6, struct vnode *VAR_7,
      struct thread *VAR_8)
{
 unsigned VAR_9, VAR_10;
 struct vnode *VAR_11;
 struct vnode *VAR_12;
 struct vnode *VAR_13;

 VAR_11 = FUNC_3(VAR_6);
 VAR_12 = VAR_6->un_lowervp;
 FUNC_0(VAR_12, "unionfs_node_update");
 VAR_13 = VAR_6->un_dvp;




 FUNC_4(VAR_11);
 VAR_6->un_uppervp = VAR_7;
 VAR_11->v_vnlock = VAR_7->v_vnlock;
 FUNC_5(VAR_11);
 VAR_10 = VAR_12->v_vnlock->lk_recurse;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_7(VAR_7, VAR_1 | VAR_0 | VAR_2);




 if (VAR_6->un_path != ((void*)0) && VAR_13 != VAR_3 && VAR_11->v_type == VAR_4) {
  static struct unionfs_node_hashhead *VAR_14;

  FUNC_4(VAR_13);
  VAR_14 = FUNC_6(VAR_13, VAR_6->un_path);
  FUNC_2(VAR_6, VAR_5);
  FUNC_1(VAR_14, VAR_6, VAR_5);
  FUNC_5(VAR_13);
 }
}
