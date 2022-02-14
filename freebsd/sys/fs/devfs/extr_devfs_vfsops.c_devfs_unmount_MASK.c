
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mount {int * mnt_data; } ;
struct devfs_mount {int dm_holdcnt; int dm_lock; int dm_idx; int * dm_mount; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 struct devfs_mount* FUNC_1 (struct mount*) ;
 int VAR_2 ;
 int FUNC_2 (struct devfs_mount*) ;
 int FUNC_3 (struct devfs_mount*) ;
 int FUNC_4 (struct devfs_mount*) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mount*,int,int,int ) ;

__attribute__((used)) static int
FUNC_9(struct mount *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 struct devfs_mount *VAR_8;
 int VAR_9;
 u_int VAR_10;

 VAR_8 = FUNC_1(VAR_4);
 FUNC_0(VAR_8->dm_mount != ((void*)0),
  ("devfs_unmount unmounted devfs_mount"));
 if (VAR_5 & VAR_1)
  VAR_7 |= VAR_0;

 VAR_6 = FUNC_8(VAR_4, 1, VAR_7, VAR_2);
 if (VAR_6)
  return (VAR_6);
 FUNC_6(&VAR_8->dm_lock);
 FUNC_2(VAR_8);
 FUNC_3(VAR_8);
 VAR_8->dm_mount = ((void*)0);
 VAR_9 = --VAR_8->dm_holdcnt;
 VAR_4->mnt_data = ((void*)0);
 VAR_10 = VAR_8->dm_idx;
 FUNC_7(&VAR_8->dm_lock);
 FUNC_5(VAR_3, VAR_10);
 if (VAR_9 == 0)
  FUNC_4(VAR_8);
 return 0;
}
