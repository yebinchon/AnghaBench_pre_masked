
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_softc {int dummy; } ;
struct TYPE_2__ {int min_width; int min_height; int max_width; int max_height; int num_crtc; int * funcs; } ;
struct drm_device {int irq_enabled; int max_vblank_count; int vblank_disable_allowed; TYPE_1__ mode_config; int dev; } ;


 struct host1x_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct host1x_softc*) ;
 int FUNC_8 (struct host1x_softc*) ;
 int VAR_0 ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;

__attribute__((used)) static int
FUNC_11(struct drm_device *VAR_1, unsigned long VAR_2)
{
 struct host1x_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1->dev);

 FUNC_3(VAR_1);
 VAR_1->mode_config.min_width = 32;
 VAR_1->mode_config.min_height = 32;
 VAR_1->mode_config.max_width = 4096;
 VAR_1->mode_config.max_height = 4096;
 VAR_1->mode_config.funcs = &VAR_0;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4 != 0)
  goto fail_host1x;

 VAR_1->irq_enabled = 1;
 VAR_1->max_vblank_count = 0xffffffff;
 VAR_1->vblank_disable_allowed = 1;

 VAR_4 = FUNC_6(VAR_1, VAR_1->mode_config.num_crtc);
 if (VAR_4 != 0)
  goto fail_vblank;

 FUNC_4(VAR_1);

 VAR_4 = FUNC_10(VAR_1);
 if (VAR_4 != 0)
  goto fail_fb;
 FUNC_1(VAR_1);

 return (0);

fail_fb:
 FUNC_9(VAR_1);
 FUNC_5(VAR_1);
fail_vblank:
 FUNC_7(VAR_3);
fail_host1x:
 FUNC_2(VAR_1);

 return (VAR_4);
}
