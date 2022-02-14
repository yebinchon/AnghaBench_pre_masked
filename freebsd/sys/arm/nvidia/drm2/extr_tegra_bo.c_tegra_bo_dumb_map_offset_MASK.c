
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int key; } ;
struct drm_gem_object {TYPE_1__ map_list; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_5 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_6 (struct drm_gem_object*) ;

__attribute__((used)) static int
FUNC_7(struct drm_file *VAR_2,
    struct drm_device *VAR_3, uint32_t VAR_4, uint64_t *VAR_5)
{
 struct drm_gem_object *VAR_6;
 int VAR_7;

 FUNC_1(VAR_3);
 VAR_6 = FUNC_5(VAR_3, VAR_2, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_3->dev, "Object not found\n");
  FUNC_2(VAR_3);
  return (-VAR_1);
 }
 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 != 0)
  goto fail;

 *VAR_5 = FUNC_0(VAR_6->map_list.key) |
     VAR_0;

 FUNC_6(VAR_6);
 FUNC_2(VAR_3);
 return (0);

fail:
 FUNC_6(VAR_6);
 FUNC_2(VAR_3);
 return (VAR_7);
}
