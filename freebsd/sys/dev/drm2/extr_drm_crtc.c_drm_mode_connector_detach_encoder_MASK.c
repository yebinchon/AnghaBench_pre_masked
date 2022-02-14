
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
struct drm_encoder {TYPE_1__ base; } ;
struct drm_connector {scalar_t__* encoder_ids; struct drm_encoder* encoder; } ;


 int VAR_0 ;

void FUNC_0(struct drm_connector *VAR_1,
        struct drm_encoder *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->encoder_ids[VAR_3] == VAR_2->base.id) {
   VAR_1->encoder_ids[VAR_3] = 0;
   if (VAR_1->encoder == VAR_2)
    VAR_1->encoder = ((void*)0);
   break;
  }
 }
}
