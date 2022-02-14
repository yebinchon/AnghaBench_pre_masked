
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vop_create_args {struct vnode** a_vpp; TYPE_1__* a_dvp; int a_vap; struct componentname* a_cnp; } ;
struct vnode {scalar_t__ v_type; } ;
struct unionfs_node {struct vnode* un_uppervp; } ;
struct componentname {int dummy; } ;
struct TYPE_4__ {int v_mount; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 struct vnode* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,struct vnode**,struct componentname*,int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 scalar_t__ VAR_3 ;
 struct unionfs_node* FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_5 (int ,struct vnode*,struct vnode*,TYPE_1__*,struct vnode**,struct componentname*,int ) ;
 int FUNC_6 (struct vnode*) ;

__attribute__((used)) static int
FUNC_7(struct vop_create_args *VAR_5)
{
 struct unionfs_node *VAR_6;
 struct componentname *VAR_7;
 struct vnode *VAR_8;
 struct vnode *VAR_9;
 int VAR_10;

 FUNC_1("unionfs_create: enter\n");

 FUNC_0(VAR_5->a_dvp);

 VAR_6 = FUNC_4(VAR_5->a_dvp);
 VAR_7 = VAR_5->a_cnp;
 VAR_8 = VAR_6->un_uppervp;
 VAR_10 = VAR_0;

 if (VAR_8 != VAR_2) {
  VAR_10 = FUNC_2(VAR_8, &VAR_9, VAR_7, VAR_5->a_vap);
  if (VAR_10 != 0)
   goto unionfs_create_abort;

  if (VAR_9->v_type == VAR_3)
   *(VAR_5->a_vpp) = VAR_9;
  else {
   FUNC_3(VAR_9, VAR_1);
   VAR_10 = FUNC_5(VAR_5->a_dvp->v_mount, VAR_9, VAR_2,
       VAR_5->a_dvp, VAR_5->a_vpp, VAR_7, VAR_4);
   FUNC_6(VAR_9);
  }
 }

unionfs_create_abort:
 FUNC_1("unionfs_create: leave (%d)\n", VAR_10);

 return (VAR_10);
}
