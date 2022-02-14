
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_cmdline_mode {int refresh; int margins; int interlace; scalar_t__ refresh_specified; int yres; int xres; int rb; scalar_t__ cvt; } ;


 int VAR_0 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,int ,int ,int,int ,int ,int ) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int ,int ,int,int ,int ) ;
 int FUNC_2 (struct drm_display_mode*,int ) ;

struct drm_display_mode *
FUNC_3(struct drm_device *VAR_1,
      struct drm_cmdline_mode *VAR_2)
{
 struct drm_display_mode *VAR_3;

 if (VAR_2->cvt)
  VAR_3 = FUNC_0(VAR_1,
        VAR_2->xres, VAR_2->yres,
        VAR_2->refresh_specified ? VAR_2->refresh : 60,
        VAR_2->rb, VAR_2->interlace,
        VAR_2->margins);
 else
  VAR_3 = FUNC_1(VAR_1,
        VAR_2->xres, VAR_2->yres,
        VAR_2->refresh_specified ? VAR_2->refresh : 60,
        VAR_2->interlace,
        VAR_2->margins);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_3, VAR_0);
 return VAR_3;
}
