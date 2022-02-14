
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct drm_mode_object {int type; TYPE_1__* properties; } ;
struct drm_mode_obj_set_property {scalar_t__ obj_id; scalar_t__ prop_id; int value; int obj_type; } ;
struct drm_file {int dummy; } ;
struct TYPE_4__ {int mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_3__ {int count; scalar_t__* ids; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_mode_object*,struct drm_property*,int ) ;
 int FUNC_2 (struct drm_mode_object*,struct drm_property*,int ) ;
 struct drm_mode_object* FUNC_3 (struct drm_device*,scalar_t__,int ) ;
 int FUNC_4 (struct drm_mode_object*,struct drm_property*,int ) ;
 int FUNC_5 (struct drm_property*,int ) ;
 struct drm_property* FUNC_6 (struct drm_mode_object*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct drm_device *VAR_3, void *VAR_4,
        struct drm_file *VAR_5)
{
 struct drm_mode_obj_set_property *VAR_6 = VAR_4;
 struct drm_mode_object *VAR_7;
 struct drm_mode_object *VAR_8;
 struct drm_property *VAR_9;
 int VAR_10 = -VAR_2;
 int VAR_11;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 FUNC_7(&VAR_3->mode_config.mutex);

 VAR_7 = FUNC_3(VAR_3, VAR_6->obj_id, VAR_6->obj_type);
 if (!VAR_7)
  goto out;
 if (!VAR_7->properties)
  goto out;

 for (VAR_11 = 0; VAR_11 < VAR_7->properties->count; VAR_11++)
  if (VAR_7->properties->ids[VAR_11] == VAR_6->prop_id)
   break;

 if (VAR_11 == VAR_7->properties->count)
  goto out;

 VAR_8 = FUNC_3(VAR_3, VAR_6->prop_id,
     VAR_1);
 if (!VAR_8)
  goto out;
 VAR_9 = FUNC_6(VAR_8);

 if (!FUNC_5(VAR_9, VAR_6->value))
  goto out;

 switch (VAR_7->type) {
 case 130:
  VAR_10 = FUNC_1(VAR_7, VAR_9,
            VAR_6->value);
  break;
 case 129:
  VAR_10 = FUNC_2(VAR_7, VAR_9, VAR_6->value);
  break;
 case 128:
  VAR_10 = FUNC_4(VAR_7, VAR_9, VAR_6->value);
  break;
 }

out:
 FUNC_8(&VAR_3->mode_config.mutex);
 return VAR_10;
}
