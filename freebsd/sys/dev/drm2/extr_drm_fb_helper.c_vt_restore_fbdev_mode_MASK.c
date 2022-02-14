
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vt_kms_softc {struct drm_fb_helper* fb_helper; } ;
struct drm_fb_helper {TYPE_2__* dev; } ;
struct TYPE_3__ {int mutex; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct drm_fb_helper *VAR_2;
 struct vt_kms_softc *VAR_3;

 VAR_3 = (struct vt_kms_softc *)VAR_0;
 VAR_2 = VAR_3->fb_helper;
 FUNC_1(&VAR_2->dev->mode_config.mutex);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->dev->mode_config.mutex);
}
