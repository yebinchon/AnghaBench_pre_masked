
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int nsec3_keyiter_count; int neg_cache; int kcache; } ;
struct module_env {scalar_t__* modinfo; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

size_t
FUNC_2(struct module_env* VAR_0, int VAR_1)
{
 struct val_env* VAR_2 = (struct val_env*)VAR_0->modinfo[VAR_1];
 if(!VAR_2)
  return 0;
 return sizeof(*VAR_2) + FUNC_0(VAR_2->kcache) +
  FUNC_1(VAR_2->neg_cache) +
  sizeof(size_t)*2*VAR_2->nsec3_keyiter_count;
}
