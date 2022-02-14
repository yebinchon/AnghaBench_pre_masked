
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_device {int dummy; } ;


 struct drm_display_mode* VAR_0 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,struct drm_display_mode const*) ;
 int FUNC_1 (struct drm_display_mode const*) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_display_mode const*) ;

struct drm_display_mode *FUNC_3(struct drm_device *VAR_2,
        int VAR_3, int VAR_4, int VAR_5,
        bool VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  const struct drm_display_mode *VAR_8 = &VAR_0[VAR_7];
  if (VAR_3 != VAR_8->hdisplay)
   continue;
  if (VAR_4 != VAR_8->vdisplay)
   continue;
  if (VAR_5 != FUNC_1(VAR_8))
   continue;
  if (VAR_6 != FUNC_2(VAR_8))
   continue;

  return FUNC_0(VAR_2, VAR_8);
 }

 return ((void*)0);
}
