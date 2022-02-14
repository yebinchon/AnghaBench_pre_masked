
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfs_mount {struct devfs_dirent* dm_rootdir; int dm_lock; } ;
struct devfs_dirent {int de_flags; int de_dlist; TYPE_1__* de_dirent; } ;
struct TYPE_2__ {scalar_t__ d_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct devfs_dirent*) ;
 int FUNC_1 (struct devfs_dirent*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 struct devfs_dirent* FUNC_3 (int *) ;
 struct devfs_dirent* FUNC_4 (struct devfs_dirent*,int ) ;
 int FUNC_5 (int *,struct devfs_dirent*,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct devfs_mount*,struct devfs_dirent*,int ) ;
 int FUNC_7 (struct devfs_dirent*) ;
 struct devfs_dirent* FUNC_8 (struct devfs_dirent*) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void
FUNC_10(struct devfs_mount *VAR_5, struct devfs_dirent *VAR_6)
{
 struct devfs_dirent *VAR_7, *VAR_8, *VAR_9;

 FUNC_9(&VAR_5->dm_lock, VAR_3);

 for (;;) {
  FUNC_2(VAR_6->de_dirent->d_type == VAR_2,
      ("devfs_rmdir_empty: de is not a directory"));

  if ((VAR_6->de_flags & VAR_1) != 0 || VAR_6 == VAR_5->dm_rootdir)
   return;

  VAR_8 = FUNC_3(&VAR_6->de_dlist);
  FUNC_2(VAR_8 != ((void*)0), ("devfs_rmdir_empty: . missing"));
  VAR_9 = FUNC_4(VAR_8, VAR_4);
  FUNC_2(VAR_9 != ((void*)0), ("devfs_rmdir_empty: .. missing"));

  if (FUNC_4(VAR_9, VAR_4) != ((void*)0))
   return;

  VAR_7 = FUNC_8(VAR_6);
  FUNC_2(VAR_7 != ((void*)0), ("devfs_rmdir_empty: NULL dd"));
  FUNC_5(&VAR_6->de_dlist, VAR_8, VAR_4);
  FUNC_5(&VAR_6->de_dlist, VAR_9, VAR_4);
  FUNC_5(&VAR_7->de_dlist, VAR_6, VAR_4);
  FUNC_1(VAR_7);
  FUNC_6(VAR_5, VAR_6, VAR_0);
  FUNC_6(VAR_5, VAR_8, VAR_0);
  FUNC_6(VAR_5, VAR_9, VAR_0);
  if (FUNC_0(VAR_7)) {
   FUNC_7(VAR_7);
   return;
  }

  VAR_6 = VAR_7;
 }
}
