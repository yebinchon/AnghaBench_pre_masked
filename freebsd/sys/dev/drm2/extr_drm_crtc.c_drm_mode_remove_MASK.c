
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int head; } ;
struct drm_connector {int dev; } ;


 int FUNC_0 (int ,struct drm_display_mode*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_connector *VAR_0,
       struct drm_display_mode *VAR_1)
{
 FUNC_1(&VAR_1->head);
 FUNC_0(VAR_0->dev, VAR_1);
}
