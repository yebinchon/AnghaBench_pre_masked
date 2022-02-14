
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_mode_object {scalar_t__ type; scalar_t__ id; } ;
struct TYPE_2__ {int crtc_names; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 struct drm_mode_object* FUNC_0 (int *,scalar_t__,int *) ;

struct drm_mode_object *FUNC_1(struct drm_device *VAR_0,
  uint32_t VAR_1, uint32_t VAR_2)
{
 struct drm_mode_object *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(&VAR_0->mode_config.crtc_names, VAR_1, ((void*)0));
 if (!VAR_3 || (VAR_3->type != VAR_2) || (VAR_3->id != VAR_1))
  VAR_3 = ((void*)0);

 return VAR_3;
}
