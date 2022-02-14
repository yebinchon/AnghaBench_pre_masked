
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* cfg; scalar_t__* modinfo; TYPE_1__* mesh; } ;
struct worker {TYPE_2__ env; } ;
struct val_env {int date_override; } ;
struct TYPE_6__ {int val_date_override; } ;
struct TYPE_4__ {int mods; } ;
typedef int RES ;


 int FUNC_0 (TYPE_3__*,char*,char*) ;
 int FUNC_1 (int *,char*,char**) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(RES* VAR_0, struct worker* VAR_1, char* VAR_2)
{
 char* VAR_3;
 if(!FUNC_1(VAR_0, VAR_2, &VAR_3))
  return;
 if(!FUNC_0(VAR_1->env.cfg, VAR_2, VAR_3)) {
  (void)FUNC_4(VAR_0, "error setting option\n");
  return;
 }

 if(FUNC_5(VAR_2, "val-override-date:") == 0) {
  int VAR_4 = FUNC_2(&VAR_1->env.mesh->mods, "validator");
  struct val_env* VAR_5 = ((void*)0);
  if(VAR_4 != -1) VAR_5 = (struct val_env*)VAR_1->env.modinfo[VAR_4];
  if(VAR_5)
   VAR_5->date_override = VAR_1->env.cfg->val_date_override;
 }
 FUNC_3(VAR_0);
}
