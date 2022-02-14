
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_object {int id; } ;
struct TYPE_2__ {int crtc_names; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0,
    struct drm_mode_object *VAR_1)
{

 FUNC_0(&VAR_0->mode_config.crtc_names, VAR_1->id);
}
