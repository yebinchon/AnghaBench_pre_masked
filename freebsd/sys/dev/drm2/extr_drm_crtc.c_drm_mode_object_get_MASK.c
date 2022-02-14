
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_mode_object {int id; int type; } ;
struct TYPE_2__ {int crtc_names; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *,struct drm_mode_object*,int*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_0,
          struct drm_mode_object *VAR_1, uint32_t VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0->mode_config.crtc_names, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->id = VAR_3;
 VAR_1->type = VAR_2;
 return 0;
}
