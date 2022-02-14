
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_object_device {int object_lock; } ;
struct ttm_base_object {int refcount; TYPE_1__* tfile; } ;
struct TYPE_2__ {struct ttm_object_device* tdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_base_object*) ;

void FUNC_4(struct ttm_base_object **VAR_0)
{
 struct ttm_base_object *VAR_1 = *VAR_0;
 struct ttm_object_device *VAR_2 = VAR_1->tfile->tdev;

 *VAR_0 = ((void*)0);






 FUNC_1(&VAR_2->object_lock);
 if (FUNC_0(&VAR_1->refcount))
  FUNC_3(VAR_1);
 FUNC_2(&VAR_2->object_lock);
}
