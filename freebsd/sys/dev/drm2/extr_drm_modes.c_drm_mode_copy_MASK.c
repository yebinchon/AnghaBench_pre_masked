
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_display_mode {int head; TYPE_1__ base; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drm_display_mode *VAR_0, const struct drm_display_mode *VAR_1)
{
 int VAR_2 = VAR_0->base.id;

 *VAR_0 = *VAR_1;
 VAR_0->base.id = VAR_2;
 FUNC_0(&VAR_0->head);
}
