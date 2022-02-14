
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_global {int kobj_ref; } ;
struct drm_global_reference {struct ttm_bo_global* object; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ttm_bo_global*) ;

void FUNC_2(struct drm_global_reference *VAR_0)
{
 struct ttm_bo_global *VAR_1 = VAR_0->object;

 if (FUNC_0(&VAR_1->kobj_ref))
  FUNC_1(VAR_1);
}
