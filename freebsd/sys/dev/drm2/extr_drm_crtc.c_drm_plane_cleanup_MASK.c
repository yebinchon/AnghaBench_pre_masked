
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {int head; int base; int format_types; struct drm_device* dev; } ;
struct TYPE_2__ {int mutex; int num_plane; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_plane *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;

 FUNC_4(&VAR_2->mode_config.mutex);
 FUNC_1(VAR_1->format_types, VAR_0);
 FUNC_0(VAR_2, &VAR_1->base);

 if (!FUNC_3(&VAR_1->head)) {
  FUNC_2(&VAR_1->head);
  VAR_2->mode_config.num_plane--;
 }
 FUNC_5(&VAR_2->mode_config.mutex);
}
