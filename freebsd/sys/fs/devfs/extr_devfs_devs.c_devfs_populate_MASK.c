
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_mount {unsigned int dm_generation; int dm_lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct devfs_mount*,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct devfs_mount *VAR_2)
{
 unsigned VAR_3;

 FUNC_1(&VAR_2->dm_lock, VAR_0);
 VAR_3 = VAR_1;
 if (VAR_2->dm_generation == VAR_3)
  return;
 while (FUNC_0(VAR_2, 0))
  continue;
 VAR_2->dm_generation = VAR_3;
}
