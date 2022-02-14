
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_file {int object_names; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* gem_close_object ) (struct drm_gem_object*,struct drm_file*) ;} ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*,struct drm_file*) ;
 int FUNC_3 (struct drm_gem_object*,struct drm_file*) ;

int
FUNC_4(struct drm_file *VAR_1, u32 VAR_2)
{
 struct drm_device *VAR_3;
 struct drm_gem_object *VAR_4;

 VAR_4 = FUNC_0(&VAR_1->object_names, VAR_2);
 if (VAR_4 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_3 = VAR_4->dev;





 if (VAR_3->driver->gem_close_object)
  VAR_3->driver->gem_close_object(VAR_4, VAR_1);
 FUNC_1(VAR_4);

 return 0;
}
