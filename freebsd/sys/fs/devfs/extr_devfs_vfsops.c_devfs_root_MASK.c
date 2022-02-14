
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; } ;
struct mount {int dummy; } ;
struct devfs_mount {int dm_rootdir; int dm_lock; } ;


 int VAR_0 ;
 struct devfs_mount* FUNC_0 (struct mount*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct mount*,int ,struct vnode**) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_2, int VAR_3, struct vnode **VAR_4)
{
 int VAR_5;
 struct vnode *VAR_6;
 struct devfs_mount *VAR_7;

 VAR_7 = FUNC_0(VAR_2);
 FUNC_2(&VAR_7->dm_lock);
 VAR_5 = FUNC_1(VAR_7->dm_rootdir, VAR_2, VAR_0, &VAR_6);
 if (VAR_5)
  return (VAR_5);
 VAR_6->v_vflag |= VAR_1;
 *VAR_4 = VAR_6;
 return (0);
}
