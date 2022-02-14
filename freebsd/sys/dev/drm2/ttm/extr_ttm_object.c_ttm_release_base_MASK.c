
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_object_device {int object_lock; int object_hash; } ;
struct ttm_base_object {int (* refcount_release ) (struct ttm_base_object**) ;TYPE_1__* tfile; int hash; } ;
struct TYPE_2__ {struct ttm_object_device* tdev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_base_object**) ;
 int FUNC_4 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_5(struct ttm_base_object *VAR_0)
{
 struct ttm_object_device *VAR_1 = VAR_0->tfile->tdev;

 (void)FUNC_0(&VAR_1->object_hash, &VAR_0->hash);
 FUNC_2(&VAR_1->object_lock);






 if (VAR_0->refcount_release) {
  FUNC_4(&VAR_0->tfile);
  VAR_0->refcount_release(&VAR_0);
 }
 FUNC_1(&VAR_1->object_lock);
}
