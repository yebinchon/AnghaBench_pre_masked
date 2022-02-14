
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_hash_item {int key; } ;
struct drm_gem_object {int on_map; struct drm_hash_item map_list; struct drm_device* dev; } ;
struct drm_gem_mm {int idxunr; int offset_hash; } ;
struct drm_device {struct drm_gem_mm* mm_private; } ;


 int FUNC_0 (int *,struct drm_hash_item*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_gem_mm *VAR_2 = VAR_1->mm_private;
 struct drm_hash_item *VAR_3 = &VAR_0->map_list;

 if (!VAR_0->on_map)
  return;

 FUNC_0(&VAR_2->offset_hash, VAR_3);
 FUNC_1(VAR_2->idxunr, VAR_3->key);
 VAR_0->on_map = 0;
}
