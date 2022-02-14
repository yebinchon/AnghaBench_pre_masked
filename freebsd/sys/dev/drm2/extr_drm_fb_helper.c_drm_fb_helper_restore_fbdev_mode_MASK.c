
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_mode_set {TYPE_3__* crtc; } ;
struct drm_fb_helper {int crtc_count; TYPE_1__* crtc_info; } ;
struct TYPE_6__ {TYPE_2__* funcs; } ;
struct TYPE_5__ {int (* set_config ) (struct drm_mode_set*) ;} ;
struct TYPE_4__ {struct drm_mode_set mode_set; } ;


 int FUNC_0 (struct drm_mode_set*) ;

bool FUNC_1(struct drm_fb_helper *VAR_0)
{
 bool VAR_1 = 0;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->crtc_count; VAR_2++) {
  struct drm_mode_set *VAR_4 = &VAR_0->crtc_info[VAR_2].mode_set;
  VAR_3 = VAR_4->crtc->funcs->set_config(VAR_4);
  if (VAR_3)
   VAR_1 = 1;
 }
 return VAR_1;
}
