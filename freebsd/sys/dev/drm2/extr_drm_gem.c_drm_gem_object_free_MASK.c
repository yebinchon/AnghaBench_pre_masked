
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* gem_free_object ) (struct drm_gem_object*) ;} ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_gem_object*) ;

void
FUNC_2(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_1);
 if (VAR_1->driver->gem_free_object != ((void*)0))
  VAR_1->driver->gem_free_object(VAR_0);
}
