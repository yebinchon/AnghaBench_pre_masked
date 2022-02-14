
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_softc {TYPE_1__* tegra_drm; } ;
struct fb_info {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int drm_dev; } ;


 struct host1x_softc* FUNC_0 (int ) ;
 struct fb_info* FUNC_1 (int *) ;

__attribute__((used)) static struct fb_info *
FUNC_2(device_t VAR_0)
{
 struct host1x_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->tegra_drm == ((void*)0))
  return (((void*)0));
 return (FUNC_1(&VAR_1->tegra_drm->drm_dev));
}
