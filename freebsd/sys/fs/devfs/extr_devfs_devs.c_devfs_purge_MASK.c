
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfs_mount {int dm_lock; } ;
struct devfs_dirent {int de_flags; TYPE_1__* de_dirent; int de_dlist; } ;
struct TYPE_2__ {scalar_t__ d_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct devfs_dirent*) ;
 int FUNC_1 (struct devfs_dirent*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct devfs_dirent* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct devfs_dirent*,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct devfs_mount*,struct devfs_dirent*,int ) ;
 int FUNC_5 (struct devfs_mount*,struct devfs_dirent*) ;
 int FUNC_6 (struct devfs_dirent*) ;
 int VAR_8 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct devfs_mount *VAR_9, struct devfs_dirent *VAR_10)
{
 struct devfs_dirent *VAR_11;

 FUNC_7(&VAR_9->dm_lock, VAR_6);

 FUNC_1(VAR_10);
 for (;;) {





  VAR_11 = FUNC_2(&VAR_10->de_dlist, VAR_8);
  if (VAR_11 == ((void*)0))
   break;
  FUNC_3(&VAR_10->de_dlist, VAR_11, VAR_7);
  if (VAR_11->de_flags & VAR_4)
   FUNC_5(VAR_9, VAR_10);
  if (VAR_11->de_flags & (VAR_2 | VAR_3))
   FUNC_4(VAR_9, VAR_11, VAR_0);
  else if (VAR_11->de_dirent->d_type == VAR_5)
   FUNC_8(VAR_9, VAR_11);
  else
   FUNC_4(VAR_9, VAR_11, VAR_0);
 }
 if (FUNC_0(VAR_10))
  FUNC_6(VAR_10);
 else if ((VAR_10->de_flags & VAR_1) == 0)
  FUNC_4(VAR_9, VAR_10, VAR_0);
}
