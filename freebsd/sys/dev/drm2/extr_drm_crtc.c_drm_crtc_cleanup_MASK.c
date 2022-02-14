
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_crtc {int head; int base; int * gamma_store; struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_crtc *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;

 FUNC_1(VAR_1->gamma_store, VAR_0);
 VAR_1->gamma_store = ((void*)0);

 FUNC_0(VAR_2, &VAR_1->base);
 FUNC_2(&VAR_1->head);
 VAR_2->mode_config.num_crtc--;
}
