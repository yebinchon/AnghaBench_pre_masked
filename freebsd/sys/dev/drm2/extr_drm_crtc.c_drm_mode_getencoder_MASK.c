
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_mode_object {int dummy; } ;
struct drm_mode_get_encoder {int possible_clones; int possible_crtcs; int encoder_id; int encoder_type; scalar_t__ crtc_id; } ;
struct drm_file {int dummy; } ;
struct TYPE_7__ {int id; } ;
struct drm_encoder {int possible_clones; int possible_crtcs; TYPE_3__ base; int encoder_type; TYPE_2__* crtc; } ;
struct TYPE_8__ {int mutex; } ;
struct drm_device {TYPE_4__ mode_config; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_mode_object* FUNC_1 (struct drm_device*,int ,int ) ;
 struct drm_encoder* FUNC_2 (struct drm_mode_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_3, void *VAR_4,
   struct drm_file *VAR_5)
{
 struct drm_mode_get_encoder *VAR_6 = VAR_4;
 struct drm_mode_object *VAR_7;
 struct drm_encoder *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 FUNC_3(&VAR_3->mode_config.mutex);
 VAR_7 = FUNC_1(VAR_3, VAR_6->encoder_id,
       VAR_1);
 if (!VAR_7) {
  VAR_9 = -VAR_2;
  goto out;
 }
 VAR_8 = FUNC_2(VAR_7);

 if (VAR_8->crtc)
  VAR_6->crtc_id = VAR_8->crtc->base.id;
 else
  VAR_6->crtc_id = 0;
 VAR_6->encoder_type = VAR_8->encoder_type;
 VAR_6->encoder_id = VAR_8->base.id;
 VAR_6->possible_crtcs = VAR_8->possible_crtcs;
 VAR_6->possible_clones = VAR_8->possible_clones;

out:
 FUNC_4(&VAR_3->mode_config.mutex);
 return VAR_9;
}
