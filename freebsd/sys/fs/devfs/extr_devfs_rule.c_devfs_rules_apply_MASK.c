
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_ruleset {int dummy; } ;
struct devfs_mount {scalar_t__ dm_ruleset; int dm_lock; } ;
struct devfs_dirent {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct devfs_ruleset*,struct devfs_mount*,struct devfs_dirent*,int ) ;
 struct devfs_ruleset* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct devfs_mount *VAR_3, struct devfs_dirent *VAR_4)
{
 struct devfs_ruleset *VAR_5;

 FUNC_3(&VAR_3->dm_lock, VAR_0);

 if (VAR_3->dm_ruleset == 0)
  return;
 FUNC_4(&VAR_2);
 VAR_5 = FUNC_2(VAR_3->dm_ruleset);
 FUNC_0(VAR_5 != ((void*)0), ("mount-point has NULL ruleset"));
 FUNC_1(VAR_5, VAR_3, VAR_4, VAR_1);
 FUNC_5(&VAR_2);
}
