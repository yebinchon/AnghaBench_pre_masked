
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_ruleset {scalar_t__ ds_number; scalar_t__ ds_refcount; int ds_rules; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct devfs_ruleset*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct devfs_ruleset*,int ) ;

__attribute__((used)) static void
FUNC_4(struct devfs_ruleset *VAR_3)
{

 FUNC_0(VAR_3->ds_number != 0, ("reaping ruleset zero "));

 if (!FUNC_1(&VAR_3->ds_rules) || VAR_3->ds_refcount != 0)
  return;

 FUNC_2(&VAR_1, VAR_3, VAR_2);
 FUNC_3(VAR_3, VAR_0);
}
