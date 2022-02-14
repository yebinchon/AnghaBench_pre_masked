
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_encoder; scalar_t__ num_crtc; scalar_t__ num_connector; scalar_t__ num_fb; int mutex; int crtc_names; int plane_list; int property_blob_list; int property_list; int encoder_list; int connector_list; int crtc_list; int fb_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_device *VAR_0)
{
 FUNC_3(&VAR_0->mode_config.mutex, "kmslk");
 FUNC_0(&VAR_0->mode_config.fb_list);
 FUNC_0(&VAR_0->mode_config.crtc_list);
 FUNC_0(&VAR_0->mode_config.connector_list);
 FUNC_0(&VAR_0->mode_config.encoder_list);
 FUNC_0(&VAR_0->mode_config.property_list);
 FUNC_0(&VAR_0->mode_config.property_blob_list);
 FUNC_0(&VAR_0->mode_config.plane_list);
 FUNC_1(&VAR_0->mode_config.crtc_names);

 FUNC_4(&VAR_0->mode_config.mutex);
 FUNC_2(VAR_0);
 FUNC_5(&VAR_0->mode_config.mutex);


 VAR_0->mode_config.num_fb = 0;
 VAR_0->mode_config.num_connector = 0;
 VAR_0->mode_config.num_crtc = 0;
 VAR_0->mode_config.num_encoder = 0;
}
