
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_mount {int dm_ruleset; } ;
typedef int devfs_rid ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static devfs_rid
FUNC_3(devfs_rid VAR_0, struct devfs_mount *VAR_1)
{

 if (FUNC_2(VAR_0) == 0)
  return (FUNC_0(VAR_1->dm_ruleset, FUNC_1(VAR_0)));
 else
  return (VAR_0);
}
