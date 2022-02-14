
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_obj_set_property {int obj_type; int obj_id; int prop_id; int value; } ;
struct drm_mode_connector_set_property {int connector_id; int prop_id; int value; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_mode_obj_set_property*,struct drm_file*) ;

int FUNC_1(struct drm_device *VAR_1,
           void *VAR_2, struct drm_file *VAR_3)
{
 struct drm_mode_connector_set_property *VAR_4 = VAR_2;
 struct drm_mode_obj_set_property VAR_5 = {
  .value = VAR_4->value,
  .prop_id = VAR_4->prop_id,
  .obj_id = VAR_4->connector_id,
  .obj_type = VAR_0
 };


 return FUNC_0(VAR_1, &VAR_5, VAR_3);
}
