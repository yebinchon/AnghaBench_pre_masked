
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int head; int base; struct drm_device* dev; } ;
struct TYPE_2__ {int num_fb; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_framebuffer *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;







 FUNC_0(VAR_1, &VAR_0->base);
 FUNC_1(&VAR_0->head);
 VAR_1->mode_config.num_fb--;
}
