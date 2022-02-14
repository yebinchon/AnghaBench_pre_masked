
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* agp; } ;
struct TYPE_3__ {scalar_t__ ai_aperture_base; int ai_aperture_size; } ;
struct TYPE_4__ {int agp_mtrr; TYPE_1__ agp_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_device *VAR_3)
{
 if (FUNC_3(VAR_3)) {
  if (FUNC_6(VAR_3))
   VAR_3->agp = FUNC_1(VAR_3);
  if (FUNC_2(VAR_3, VAR_0)
      && (VAR_3->agp == ((void*)0))) {
   FUNC_0("Cannot initialize the agpgart module.\n");
   return -VAR_2;
  }
  if (FUNC_4(VAR_3)) {
   if (VAR_3->agp && VAR_3->agp->agp_info.ai_aperture_base != 0) {
    if (FUNC_5(VAR_3->agp->agp_info.ai_aperture_base,
        VAR_3->agp->agp_info.ai_aperture_size, VAR_1) == 0)
     VAR_3->agp->agp_mtrr = 1;
    else
     VAR_3->agp->agp_mtrr = -1;
   }
  }
 }
 return 0;
}
