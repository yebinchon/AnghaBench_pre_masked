
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; int dpms_property; int edid_property; int num_connector; int connector_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector_funcs {int dummy; } ;
struct TYPE_6__ {int * properties; } ;
struct drm_connector {int connector_type; TYPE_2__ base; int head; int status; int * edid_blob_ptr; int modes; int probed_modes; int user_modes; scalar_t__ connector_type_id; struct drm_connector_funcs const* funcs; struct drm_device* dev; int properties; } ;
struct TYPE_7__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (struct drm_device*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_device *VAR_4,
         struct drm_connector *VAR_5,
         const struct drm_connector_funcs *VAR_6,
         int VAR_7)
{
 int VAR_8;

 FUNC_4(&VAR_4->mode_config.mutex);

 VAR_8 = FUNC_1(VAR_4, &VAR_5->base, VAR_1);
 if (VAR_8)
  goto out;

 VAR_5->base.properties = &VAR_5->properties;
 VAR_5->dev = VAR_4;
 VAR_5->funcs = VAR_6;
 VAR_5->connector_type = VAR_7;
 VAR_5->connector_type_id =
  ++VAR_3[VAR_7].count;
 FUNC_0(&VAR_5->user_modes);
 FUNC_0(&VAR_5->probed_modes);
 FUNC_0(&VAR_5->modes);
 VAR_5->edid_blob_ptr = ((void*)0);
 VAR_5->status = VAR_2;

 FUNC_3(&VAR_5->head, &VAR_4->mode_config.connector_list);
 VAR_4->mode_config.num_connector++;

 if (VAR_7 != VAR_0)
  FUNC_2(&VAR_5->base,
           VAR_4->mode_config.edid_property,
           0);

 FUNC_2(&VAR_5->base,
          VAR_4->mode_config.dpms_property, 0);

 out:
 FUNC_5(&VAR_4->mode_config.mutex);

 return VAR_8;
}
