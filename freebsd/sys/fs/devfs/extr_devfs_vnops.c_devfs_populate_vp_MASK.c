
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_iflag; struct devfs_dirent* v_data; int v_mount; } ;
struct devfs_mount {int dm_lock; } ;
struct devfs_dirent {int de_flags; } ;


 int FUNC_0 (struct vnode*,char*) ;
 scalar_t__ FUNC_1 (struct devfs_mount*) ;
 int FUNC_2 (struct devfs_mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 struct devfs_mount* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,int ) ;
 int FUNC_7 (struct devfs_mount*) ;
 int FUNC_8 (struct devfs_mount*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_12(struct vnode *VAR_4)
{
 struct devfs_dirent *VAR_5;
 struct devfs_mount *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4, "devfs_populate_vp");

 VAR_6 = FUNC_4(VAR_4->v_mount);
 VAR_7 = FUNC_5(VAR_4);

 FUNC_9(&VAR_6->dm_lock);
 FUNC_2(VAR_6);


 FUNC_6(VAR_4, 0);
 FUNC_7(VAR_6);

 FUNC_10(&VAR_6->dm_lock);
 FUNC_11(VAR_4, VAR_7 | VAR_2);
 FUNC_9(&VAR_6->dm_lock);
 if (FUNC_1(VAR_6)) {
  FUNC_10(&VAR_6->dm_lock);
  FUNC_8(VAR_6);
  return (VAR_1);
 }
 if ((VAR_4->v_iflag & VAR_3) != 0) {
  FUNC_10(&VAR_6->dm_lock);
  return (VAR_1);
 }
 VAR_5 = VAR_4->v_data;
 FUNC_3(VAR_5 != ((void*)0),
     ("devfs_populate_vp: vp->v_data == NULL but vnode not doomed"));
 if ((VAR_5->de_flags & VAR_0) != 0) {
  FUNC_10(&VAR_6->dm_lock);
  return (VAR_1);
 }

 return (0);
}
