
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_open {int size; int handle; int name; } ;
struct drm_gem_object {int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int object_names; TYPE_1__* driver; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_file*,struct drm_gem_object*,int *) ;
 struct drm_gem_object* FUNC_1 (int *,int ,void (*) (void*)) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct drm_gem_object*) ;

int
FUNC_3(struct drm_device *VAR_4, void *VAR_5,
     struct drm_file *VAR_6)
{
 struct drm_gem_open *VAR_7 = VAR_5;
 struct drm_gem_object *VAR_8;
 int VAR_9;
 u32 VAR_10;

 if (!(VAR_4->driver->driver_features & VAR_0))
  return -VAR_1;

 VAR_8 = FUNC_1(&VAR_4->object_names, VAR_7->name,
     (void (*)(void *))VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_6, VAR_8, &VAR_10);
 FUNC_2(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7->handle = VAR_10;
 VAR_7->size = VAR_8->size;

 return 0;
}
