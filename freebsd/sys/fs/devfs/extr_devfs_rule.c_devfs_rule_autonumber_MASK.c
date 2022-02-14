
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfs_ruleset {int ds_number; int ds_rules; } ;
struct TYPE_2__ {int dr_id; } ;
struct devfs_krule {TYPE_1__ dk_rule; } ;
typedef scalar_t__ devfs_rnum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct devfs_krule* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct devfs_ruleset *VAR_2, devfs_rnum *VAR_3)
{
 struct devfs_krule *VAR_4;


 VAR_4 = FUNC_1(&VAR_2->ds_rules, VAR_1);
 if (VAR_4 == ((void*)0))
  *VAR_3 = 100;
 else {
  *VAR_3 = FUNC_4(VAR_4->dk_rule.dr_id) + 100;

  if (*VAR_3 < FUNC_4(VAR_4->dk_rule.dr_id))
   return (VAR_0);
 }
 FUNC_0(FUNC_2(FUNC_3(VAR_2->ds_number, *VAR_3)) == ((void*)0),
     ("autonumbering resulted in an already existing rule"));
 return (0);
}
