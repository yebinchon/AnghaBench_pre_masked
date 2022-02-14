
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfs_ruleset {int ds_rules; int ds_refcount; } ;
struct TYPE_2__ {int dr_iacts; int dr_incset; } ;
struct devfs_krule {struct devfs_ruleset* dk_ruleset; TYPE_1__ dk_rule; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct devfs_krule*,int ) ;
 struct devfs_ruleset* FUNC_2 (int ) ;
 int FUNC_3 (struct devfs_ruleset*) ;
 int VAR_2 ;
 int FUNC_4 (struct devfs_krule*,int ) ;

__attribute__((used)) static int
FUNC_5(struct devfs_krule *VAR_3)
{
 struct devfs_ruleset *VAR_4;

 if (VAR_3->dk_rule.dr_iacts & VAR_0) {
  VAR_4 = FUNC_2(VAR_3->dk_rule.dr_incset);
  FUNC_0(VAR_4 != ((void*)0), ("DRA_INCSET but bad dr_incset"));
  --VAR_4->ds_refcount;
  FUNC_3(VAR_4);
 }
 VAR_4 = VAR_3->dk_ruleset;
 FUNC_1(&VAR_4->ds_rules, VAR_3, VAR_2);
 FUNC_3(VAR_4);
 FUNC_4(VAR_3, VAR_1);
 return (0);
}
