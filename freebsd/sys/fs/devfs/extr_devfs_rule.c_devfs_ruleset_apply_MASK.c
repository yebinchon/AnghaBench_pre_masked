
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_ruleset {int dummy; } ;
struct devfs_mount {scalar_t__ dm_ruleset; int dm_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct devfs_ruleset*,struct devfs_mount*) ;
 struct devfs_ruleset* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct devfs_mount *VAR_2)
{
 struct devfs_ruleset *VAR_3;

 FUNC_2(&VAR_2->dm_lock, VAR_0);

 FUNC_3(&VAR_1);
 if (VAR_2->dm_ruleset == 0) {
  FUNC_4(&VAR_1);
  return;
 }
 VAR_3 = FUNC_1(VAR_2->dm_ruleset);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3, VAR_2);
 FUNC_4(&VAR_1);
}
