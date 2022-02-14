
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder_funcs {int dummy; } ;
struct drm_encoder {int encoder_type; int head; struct drm_encoder_funcs const* funcs; struct drm_device* dev; int base; } ;
struct TYPE_2__ {int mutex; int num_encoder; int encoder_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_1,
        struct drm_encoder *VAR_2,
        const struct drm_encoder_funcs *VAR_3,
        int VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_1->mode_config.mutex);

 VAR_5 = FUNC_0(VAR_1, &VAR_2->base, VAR_0);
 if (VAR_5)
  goto out;

 VAR_2->dev = VAR_1;
 VAR_2->encoder_type = VAR_4;
 VAR_2->funcs = VAR_3;

 FUNC_1(&VAR_2->head, &VAR_1->mode_config.encoder_list);
 VAR_1->mode_config.num_encoder++;

 out:
 FUNC_3(&VAR_1->mode_config.mutex);

 return VAR_5;
}
