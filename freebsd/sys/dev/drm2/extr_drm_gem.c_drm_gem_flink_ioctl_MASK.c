
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int name; } ;
struct drm_gem_flink {int name; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int object_names; TYPE_1__* driver; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct drm_gem_object*,int *) ;
 struct drm_gem_object* FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;

int
FUNC_3(struct drm_device *VAR_4, void *VAR_5,
      struct drm_file *VAR_6)
{
 struct drm_gem_flink *VAR_7 = VAR_5;
 struct drm_gem_object *VAR_8;
 int VAR_9;

 if (!(VAR_4->driver->driver_features & VAR_0))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7->handle);
 if (VAR_8 == ((void*)0))
  return -VAR_3;

 VAR_9 = FUNC_0(&VAR_4->object_names, VAR_8, &VAR_8->name);
 if (VAR_9 != 0) {
  if (VAR_9 == -VAR_1)
   VAR_9 = 0;
  FUNC_2(VAR_8);
 }
 if (VAR_9 == 0)
  VAR_7->name = VAR_8->name;
 return VAR_9;
}
