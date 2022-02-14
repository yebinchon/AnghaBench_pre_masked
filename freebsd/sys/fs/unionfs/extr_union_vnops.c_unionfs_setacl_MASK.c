
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_setacl_args {int a_cred; int a_aclp; int a_type; TYPE_2__* a_vp; struct thread* a_td; } ;
struct vnode {scalar_t__ v_type; } ;
struct unionfs_node {struct vnode* un_uppervp; struct vnode* un_lowervp; } ;
struct thread {int dummy; } ;
struct TYPE_5__ {TYPE_1__* v_mount; } ;
struct TYPE_4__ {int mnt_flag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 struct vnode* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,int ,int ,int ,struct thread*) ;
 scalar_t__ VAR_3 ;
 struct unionfs_node* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct unionfs_node*,int,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct vop_setacl_args *VAR_4)
{
 int VAR_5;
 struct unionfs_node *VAR_6;
 struct vnode *VAR_7;
 struct vnode *VAR_8;
 struct thread *VAR_9;

 FUNC_1("unionfs_setacl: enter\n");

 FUNC_0(VAR_4->a_vp);

 VAR_5 = VAR_0;
 VAR_6 = FUNC_3(VAR_4->a_vp);
 VAR_7 = VAR_6->un_uppervp;
 VAR_8 = VAR_6->un_lowervp;
 VAR_9 = VAR_4->a_td;

 if (VAR_4->a_vp->v_mount->mnt_flag & VAR_1)
  return (VAR_0);

 if (VAR_7 == VAR_2 && VAR_8->v_type == VAR_3) {
  if ((VAR_5 = FUNC_4(VAR_6, 1, VAR_4->a_cred, VAR_9)) != 0)
   return (VAR_5);
  VAR_7 = VAR_6->un_uppervp;
 }

 if (VAR_7 != VAR_2)
  VAR_5 = FUNC_2(VAR_7, VAR_4->a_type, VAR_4->a_aclp, VAR_4->a_cred, VAR_9);

 FUNC_1("unionfs_setacl: leave (%d)\n", VAR_5);

 return (VAR_5);
}
