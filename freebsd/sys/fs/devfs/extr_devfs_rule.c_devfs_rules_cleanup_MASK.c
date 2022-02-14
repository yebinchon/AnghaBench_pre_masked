
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_ruleset {int ds_refcount; } ;
struct devfs_mount {scalar_t__ dm_ruleset; int dm_lock; } ;


 int VAR_0 ;
 struct devfs_ruleset* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct devfs_ruleset*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct devfs_mount *VAR_1)
{
 struct devfs_ruleset *VAR_2;

 FUNC_2(&VAR_1->dm_lock, VAR_0);
 if (VAR_1->dm_ruleset != 0) {
  VAR_2 = FUNC_0(VAR_1->dm_ruleset);
  --VAR_2->ds_refcount;
  FUNC_1(VAR_2);
 }
}
