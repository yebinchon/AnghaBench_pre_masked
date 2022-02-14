
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {void* tv_hue_property; void* tv_saturation_property; void* tv_overscan_property; void* tv_flicker_reduction_property; void* tv_contrast_property; void* tv_brightness_property; int tv_mode_property; void* tv_bottom_margin_property; void* tv_top_margin_property; void* tv_right_margin_property; void* tv_left_margin_property; struct drm_property* tv_subconnector_property; struct drm_property* tv_select_subconnector_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,char*) ;
 int FUNC_2 (struct drm_device*,int ,char*,int) ;
 struct drm_property* FUNC_3 (struct drm_device*,int ,char*,int ,int ) ;
 void* FUNC_4 (struct drm_device*,int ,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct drm_device *VAR_4, int VAR_5,
      char *VAR_6[])
{
 struct drm_property *VAR_7;
 struct drm_property *VAR_8;
 int VAR_9;

 if (VAR_4->mode_config.tv_select_subconnector_property)
  return 0;




 VAR_7 = FUNC_3(VAR_4, 0,
       "select subconnector",
       VAR_2,
       FUNC_0(VAR_2));
 VAR_4->mode_config.tv_select_subconnector_property = VAR_7;

 VAR_8 =
  FUNC_3(VAR_4, VAR_1,
        "subconnector",
        VAR_3,
        FUNC_0(VAR_3));
 VAR_4->mode_config.tv_subconnector_property = VAR_8;




 VAR_4->mode_config.tv_left_margin_property =
  FUNC_4(VAR_4, 0, "left margin", 0, 100);

 VAR_4->mode_config.tv_right_margin_property =
  FUNC_4(VAR_4, 0, "right margin", 0, 100);

 VAR_4->mode_config.tv_top_margin_property =
  FUNC_4(VAR_4, 0, "top margin", 0, 100);

 VAR_4->mode_config.tv_bottom_margin_property =
  FUNC_4(VAR_4, 0, "bottom margin", 0, 100);

 VAR_4->mode_config.tv_mode_property =
  FUNC_2(VAR_4, VAR_0,
        "mode", VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  FUNC_1(VAR_4->mode_config.tv_mode_property, VAR_9,
          VAR_9, VAR_6[VAR_9]);

 VAR_4->mode_config.tv_brightness_property =
  FUNC_4(VAR_4, 0, "brightness", 0, 100);

 VAR_4->mode_config.tv_contrast_property =
  FUNC_4(VAR_4, 0, "contrast", 0, 100);

 VAR_4->mode_config.tv_flicker_reduction_property =
  FUNC_4(VAR_4, 0, "flicker reduction", 0, 100);

 VAR_4->mode_config.tv_overscan_property =
  FUNC_4(VAR_4, 0, "overscan", 0, 100);

 VAR_4->mode_config.tv_saturation_property =
  FUNC_4(VAR_4, 0, "saturation", 0, 100);

 VAR_4->mode_config.tv_hue_property =
  FUNC_4(VAR_4, 0, "hue", 0, 100);

 return 0;
}
