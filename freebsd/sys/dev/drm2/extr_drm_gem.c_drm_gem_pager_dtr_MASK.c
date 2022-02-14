
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*) ;

void
FUNC_4(void *VAR_0)
{
 struct drm_gem_object *VAR_1;
 struct drm_device *VAR_2;

 VAR_1 = VAR_0;
 VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_2);
}
