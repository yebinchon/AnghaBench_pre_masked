
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_object {int dummy; } ;
struct drm_mode_modeinfo {int dummy; } ;
struct drm_mode_mode_cmd {int connector_id; struct drm_mode_modeinfo mode; } ;
struct drm_file {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_display_mode*,struct drm_mode_modeinfo*) ;
 int FUNC_3 (struct drm_device*,struct drm_connector*,struct drm_display_mode*) ;
 struct drm_mode_object* FUNC_4 (struct drm_device*,int ,int ) ;
 struct drm_connector* FUNC_5 (struct drm_mode_object*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct drm_device *VAR_3,
         void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_mode_object *VAR_6;
 struct drm_mode_mode_cmd *VAR_7 = VAR_4;
 struct drm_connector *VAR_8;
 struct drm_display_mode VAR_9;
 struct drm_mode_modeinfo *VAR_10 = &VAR_7->mode;
 int VAR_11;

 if (!FUNC_1(VAR_3, VAR_0))
  return -VAR_2;

 FUNC_6(&VAR_3->mode_config.mutex);

 VAR_6 = FUNC_4(VAR_3, VAR_7->connector_id, VAR_1);
 if (!VAR_6) {
  VAR_11 = -VAR_2;
  goto out;
 }
 VAR_8 = FUNC_5(VAR_6);

 VAR_11 = FUNC_2(&VAR_9, VAR_10);
 if (VAR_11) {
  FUNC_0("Invalid mode\n");
  goto out;
 }

 VAR_11 = FUNC_3(VAR_3, VAR_8, &VAR_9);
out:
 FUNC_7(&VAR_3->mode_config.mutex);
 return VAR_11;
}
