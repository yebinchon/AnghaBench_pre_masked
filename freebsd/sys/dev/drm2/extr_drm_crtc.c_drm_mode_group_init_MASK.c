
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_mode_group {scalar_t__ num_encoders; scalar_t__ num_connectors; scalar_t__ num_crtcs; int id_list; } ;
struct TYPE_2__ {scalar_t__ num_encoder; scalar_t__ num_connector; scalar_t__ num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;

int FUNC_1(struct drm_device *VAR_4, struct drm_mode_group *VAR_5)
{
 uint32_t VAR_6 = 0;

 VAR_6 += VAR_4->mode_config.num_crtc;
 VAR_6 += VAR_4->mode_config.num_connector;
 VAR_6 += VAR_4->mode_config.num_encoder;

 VAR_5->id_list = FUNC_0(VAR_6 * sizeof(uint32_t),
     VAR_0, VAR_2 | VAR_3);
 if (!VAR_5->id_list)
  return -VAR_1;

 VAR_5->num_crtcs = 0;
 VAR_5->num_connectors = 0;
 VAR_5->num_encoders = 0;
 return 0;
}
