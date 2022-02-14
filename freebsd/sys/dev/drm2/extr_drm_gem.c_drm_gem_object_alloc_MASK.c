
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int vm_obj; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ (* gem_init_object ) (struct drm_gem_object*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_device*,struct drm_gem_object*,size_t) ;
 int FUNC_1 (struct drm_gem_object*,int ) ;
 struct drm_gem_object* FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (int ) ;

struct drm_gem_object *
FUNC_5(struct drm_device *VAR_3, size_t VAR_4)
{
 struct drm_gem_object *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
 if (!VAR_5)
  goto free;

 if (FUNC_0(VAR_3, VAR_5, VAR_4) != 0)
  goto free;

 if (VAR_3->driver->gem_init_object != ((void*)0) &&
     VAR_3->driver->gem_init_object(VAR_5) != 0) {
  goto dealloc;
 }
 return VAR_5;
dealloc:
 FUNC_4(VAR_5->vm_obj);
free:
 FUNC_1(VAR_5, VAR_0);
 return ((void*)0);
}
