
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* dithering_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct drm_property* FUNC_1 (struct drm_device*,int ,char*,int ,int ) ;

int FUNC_2(struct drm_device *VAR_1)
{
 struct drm_property *VAR_2;

 if (VAR_1->mode_config.dithering_mode_property)
  return 0;

 VAR_2 =
  FUNC_1(VAR_1, 0, "dithering",
    VAR_0,
        FUNC_0(VAR_0));
 VAR_1->mode_config.dithering_mode_property = VAR_2;

 return 0;
}
