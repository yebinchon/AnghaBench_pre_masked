
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_softc {int drm_inited; int dev; TYPE_1__* tegra_drm; int irq_hook; } ;
struct TYPE_2__ {int drm_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct host1x_softc *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1;
 FUNC_0(&VAR_2->irq_hook);

 FUNC_3(&VAR_0);
 VAR_3 = FUNC_2(VAR_2->dev, &VAR_2->tegra_drm->drm_dev,
     &VAR_0);
 if (VAR_3 != 0) {
  FUNC_1(VAR_2->dev, "drm_get_platform_dev(): %d\n", VAR_3);
  return;
 }

 VAR_2->drm_inited = 1;
}
