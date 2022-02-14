
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int object_names; } ;
struct drm_device {int dummy; } ;


 struct drm_gem_object* FUNC_0 (int *,int ,void (*) (void*)) ;
 scalar_t__ VAR_0 ;

struct drm_gem_object *
FUNC_1(struct drm_device *VAR_1, struct drm_file *VAR_2,
        u32 VAR_3)
{
 struct drm_gem_object *VAR_4;

 VAR_4 = FUNC_0(&VAR_2->object_names, VAR_3,
     (void (*)(void *))VAR_0);

 return VAR_4;
}
