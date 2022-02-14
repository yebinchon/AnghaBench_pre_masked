
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int num_rrset_bogus; int bogus_lock; } ;
struct module_env {int need_to_validate; int cfg; void** modinfo; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct module_env*,struct val_env*,int ) ;

int
FUNC_6(struct module_env* VAR_0, int VAR_1)
{
 struct val_env* VAR_2 = (struct val_env*)FUNC_0(1,
  sizeof(struct val_env));
 if(!VAR_2) {
  FUNC_4("malloc failure");
  return 0;
 }
 VAR_0->modinfo[VAR_1] = (void*)VAR_2;
 VAR_0->need_to_validate = 1;
 FUNC_2(&VAR_2->bogus_lock);
 FUNC_3(&VAR_2->bogus_lock, &VAR_2->num_rrset_bogus,
  sizeof(VAR_2->num_rrset_bogus));



 if(!FUNC_5(VAR_0, VAR_2, VAR_0->cfg)) {
  FUNC_4("validator: could not apply configuration settings.");
  return 0;
 }

 return 1;
}
