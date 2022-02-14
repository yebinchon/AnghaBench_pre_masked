
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_mount {int dm_rootdir; int dm_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct devfs_mount*,int) ;
 int FUNC_1 (struct devfs_mount*,int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct devfs_mount *VAR_1)
{

 FUNC_2(&VAR_1->dm_lock, VAR_0);
 while (FUNC_0(VAR_1, 1))
  continue;
 FUNC_1(VAR_1, VAR_1->dm_rootdir);
}
