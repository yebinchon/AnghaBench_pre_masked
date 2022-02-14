
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int name; struct drm_device* dev; } ;
struct drm_device {int object_names; } ;


 struct drm_gem_object* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;

void FUNC_2(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_gem_object *VAR_2;

 if (VAR_0->name) {
  VAR_2 = FUNC_0(&VAR_1->object_names, VAR_0->name);
  VAR_0->name = 0;
  FUNC_1(VAR_2);
 }
}
