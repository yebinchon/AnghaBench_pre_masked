
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* funcs; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_3__ {int (* output_poll_changed ) (struct drm_device*) ;} ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;

void FUNC_2(struct drm_device *VAR_0)
{




 if (VAR_0->mode_config.funcs->output_poll_changed)
  VAR_0->mode_config.funcs->output_poll_changed(VAR_0);
}
