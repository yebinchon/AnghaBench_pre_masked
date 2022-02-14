
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; } ;
struct drm_gem_object {int on_map; TYPE_1__ map_list; struct drm_device* dev; } ;
struct drm_gem_mm {int idxunr; int offset_hash; } ;
struct drm_device {struct drm_gem_mm* mm_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_gem_mm *VAR_2 = VAR_1->mm_private;
 int VAR_3;

 if (VAR_0->on_map)
  return 0;

 VAR_0->map_list.key = FUNC_1(VAR_2->idxunr);
 VAR_3 = FUNC_2(&VAR_2->offset_hash, &VAR_0->map_list);
 if (VAR_3) {
  FUNC_0("failed to add to map hash\n");
  FUNC_3(VAR_2->idxunr, VAR_0->map_list.key);
  return VAR_3;
 }
 VAR_0->on_map = 1;

 return 0;
}
