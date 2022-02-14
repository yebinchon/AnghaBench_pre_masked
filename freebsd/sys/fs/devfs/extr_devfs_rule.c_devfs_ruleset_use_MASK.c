
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_ruleset {int ds_refcount; } ;
struct devfs_mount {scalar_t__ dm_ruleset; } ;
typedef scalar_t__ devfs_rsnum ;


 struct devfs_ruleset* FUNC_0 (scalar_t__) ;
 struct devfs_ruleset* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct devfs_ruleset*) ;

__attribute__((used)) static int
FUNC_3(devfs_rsnum VAR_0, struct devfs_mount *VAR_1)
{
 struct devfs_ruleset *VAR_2, *VAR_3;

 if (VAR_1->dm_ruleset != 0) {
  VAR_2 = FUNC_0(VAR_1->dm_ruleset);
  --VAR_2->ds_refcount;
  FUNC_2(VAR_2);
 }

 if (VAR_0 == 0) {
  VAR_1->dm_ruleset = 0;
  return (0);
 }

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_1(VAR_0);

 ++VAR_3->ds_refcount;
 VAR_1->dm_ruleset = VAR_0;

 return (0);
}
