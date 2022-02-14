
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int head; int base; struct drm_device* dev; } ;
struct TYPE_2__ {int mutex; int num_encoder; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_encoder *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 FUNC_2(&VAR_1->mode_config.mutex);
 FUNC_0(VAR_1, &VAR_0->base);
 FUNC_1(&VAR_0->head);
 VAR_1->mode_config.num_encoder--;
 FUNC_3(&VAR_1->mode_config.mutex);
}
