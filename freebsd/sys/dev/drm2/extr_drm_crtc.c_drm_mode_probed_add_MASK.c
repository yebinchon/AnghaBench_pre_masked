
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int head; } ;
struct drm_connector {int probed_modes; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct drm_connector *VAR_0,
    struct drm_display_mode *VAR_1)
{
 FUNC_0(&VAR_1->head, &VAR_0->probed_modes);
}
