
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {struct val_env* nsec3_maxiter; struct val_env* nsec3_keysize; int neg_cache; int kcache; int bogus_lock; } ;
struct module_env {int ** modinfo; int * anchors; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct val_env*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct module_env* VAR_0, int VAR_1)
{
 struct val_env* VAR_2;
 if(!VAR_0 || !VAR_0->modinfo[VAR_1])
  return;
 VAR_2 = (struct val_env*)VAR_0->modinfo[VAR_1];
 FUNC_3(&VAR_2->bogus_lock);
 FUNC_0(VAR_0->anchors);
 VAR_0->anchors = ((void*)0);
 FUNC_2(VAR_2->kcache);
 FUNC_4(VAR_2->neg_cache);
 FUNC_1(VAR_2->nsec3_keysize);
 FUNC_1(VAR_2->nsec3_maxiter);
 FUNC_1(VAR_2);
 VAR_0->modinfo[VAR_1] = ((void*)0);
}
