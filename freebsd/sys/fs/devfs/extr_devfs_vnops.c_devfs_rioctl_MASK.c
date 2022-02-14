
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_ioctl_args {int a_td; int a_data; int a_command; struct vnode* a_vp; } ;
struct vnode {int v_iflag; int v_mount; } ;
struct devfs_mount {int dm_lock; } ;


 scalar_t__ FUNC_0 (struct devfs_mount*) ;
 int FUNC_1 (struct devfs_mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct devfs_mount* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct devfs_mount*) ;
 int FUNC_5 (struct devfs_mount*,int ,int ,int ) ;
 int FUNC_6 (struct devfs_mount*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_10(struct vop_ioctl_args *VAR_5)
{
 struct vnode *VAR_6;
 struct devfs_mount *VAR_7;
 int VAR_8;

 VAR_6 = VAR_5->a_vp;
 FUNC_9(VAR_6, VAR_3 | VAR_2);
 if (VAR_6->v_iflag & VAR_4) {
  FUNC_3(VAR_6, 0);
  return (VAR_0);
 }
 VAR_7 = FUNC_2(VAR_6->v_mount);
 FUNC_7(&VAR_7->dm_lock);
 FUNC_3(VAR_6, 0);
 FUNC_1(VAR_7);
 FUNC_4(VAR_7);
 if (FUNC_0(VAR_7)) {
  FUNC_8(&VAR_7->dm_lock);
  FUNC_6(VAR_7);
  return (VAR_1);
 }
 VAR_8 = FUNC_5(VAR_7, VAR_5->a_command, VAR_5->a_data, VAR_5->a_td);
 FUNC_8(&VAR_7->dm_lock);
 return (VAR_8);
}
