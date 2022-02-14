
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_display_mode*,struct drm_display_mode const*) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*) ;

struct drm_display_mode *FUNC_2(struct drm_device *VAR_0,
         const struct drm_display_mode *VAR_1)
{
 struct drm_display_mode *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, VAR_1);

 return VAR_2;
}
