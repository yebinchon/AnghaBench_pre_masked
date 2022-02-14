
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int id; } ;
struct drm_property {TYPE_2__ base; } ;
struct drm_mode_object {TYPE_1__* properties; int type; } ;
struct TYPE_3__ {int count; int * values; int * ids; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

void FUNC_1(struct drm_mode_object *VAR_1,
    struct drm_property *VAR_2,
    uint64_t VAR_3)
{
 int VAR_4 = VAR_1->properties->count;

 if (VAR_4 == VAR_0) {
  FUNC_0("Failed to attach object property (type: 0x%x). Please "
   "increase DRM_OBJECT_MAX_PROPERTY by 1 for each time "
   "you see this message on the same object type.\n",
   VAR_1->type);
  return;
 }

 VAR_1->properties->ids[VAR_4] = VAR_2->base.id;
 VAR_1->properties->values[VAR_4] = VAR_3;
 VAR_1->properties->count++;
}
