
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_avi_infoframe {int pixel_repeat; scalar_t__ video_code; scalar_t__ picture_aspect; int scan_mode; int active_aspect; } ;
struct drm_display_mode {int flags; scalar_t__ picture_aspect_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct hdmi_avi_infoframe*) ;

__attribute__((used)) static int
FUNC_3(struct hdmi_avi_infoframe *VAR_7,
    struct drm_display_mode *VAR_8)
{
 int VAR_9;

 if (!VAR_7 || !VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8->flags & VAR_0)
  VAR_7->pixel_repeat = 1;

 VAR_7->video_code = FUNC_1(VAR_8);

 VAR_7->picture_aspect = VAR_5;
 VAR_7->active_aspect = VAR_2;
 VAR_7->scan_mode = VAR_6;

 return 0;
}
