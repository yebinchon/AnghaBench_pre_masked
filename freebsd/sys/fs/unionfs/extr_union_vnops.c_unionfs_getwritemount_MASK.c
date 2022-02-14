
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_getwritemount_args {int a_mpp; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_iflag; TYPE_1__* v_mount; } ;
struct TYPE_4__ {struct vnode* un_dvp; } ;
struct TYPE_3__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 struct vnode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_6 (struct vnode*) ;

__attribute__((used)) static int
FUNC_7(struct vop_getwritemount_args *VAR_6)
{
 int VAR_7;
 struct vnode *VAR_8;
 struct vnode *VAR_9;

 FUNC_2("unionfs_getwritemount: enter\n");

 VAR_7 = 0;
 VAR_9 = VAR_6->a_vp;

 if (VAR_9 == VAR_3 || (VAR_9->v_mount->mnt_flag & VAR_2))
  return (VAR_0);

 FUNC_0(VAR_9);

 VAR_8 = FUNC_1(VAR_9);
 if (VAR_8 == VAR_3 && VAR_5 == VAR_9->v_type)
  VAR_8 = FUNC_1(FUNC_6(VAR_9)->un_dvp);

 if (VAR_8 != VAR_3)
  VAR_7 = FUNC_5(VAR_8, VAR_6->a_mpp);
 else {
  FUNC_3(VAR_9);
  if (VAR_9->v_iflag & VAR_4)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0;
  FUNC_4(VAR_9);
 }

 FUNC_2("unionfs_getwritemount: leave (%d)\n", VAR_7);

 return (VAR_7);
}
