
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer_funcs {int dummy; } ;
struct drm_framebuffer {int head; struct drm_framebuffer_funcs const* funcs; struct drm_device* dev; int base; int refcount; } ;
struct TYPE_2__ {int fb_list; int num_fb; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct drm_device *VAR_1, struct drm_framebuffer *VAR_2,
    const struct drm_framebuffer_funcs *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_2->refcount, 1);

 VAR_4 = FUNC_0(VAR_1, &VAR_2->base, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_2->dev = VAR_1;
 VAR_2->funcs = VAR_3;
 VAR_1->mode_config.num_fb++;
 FUNC_1(&VAR_2->head, &VAR_1->mode_config.fb_list);

 return 0;
}
