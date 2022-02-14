
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int poll_enabled; int output_poll_work; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ,int *,int ,int ,struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct drm_device *VAR_2)
{
 FUNC_0(VAR_1, &VAR_2->mode_config.output_poll_work,
     0, VAR_0, VAR_2);
 VAR_2->mode_config.poll_enabled = 1;

 FUNC_1(VAR_2);
}
