
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_mm {int idxunr; int offset_hash; } ;
struct drm_device {int object_names; struct drm_gem_mm* mm_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_gem_mm*,int ) ;

void
FUNC_4(struct drm_device *VAR_1)
{
 struct drm_gem_mm *VAR_2 = VAR_1->mm_private;

 VAR_1->mm_private = ((void*)0);
 FUNC_2(&VAR_2->offset_hash);
 FUNC_0(VAR_2->idxunr);
 FUNC_3(VAR_2, VAR_0);
 FUNC_1(&VAR_1->object_names);
}
