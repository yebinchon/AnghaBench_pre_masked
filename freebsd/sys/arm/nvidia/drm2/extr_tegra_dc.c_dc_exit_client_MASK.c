
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {int dummy; } ;
struct dc_softc {int * irq_ih; int irq_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int *) ;
 struct dc_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, struct tegra_drm *VAR_2)
{
 struct dc_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->irq_ih != ((void*)0))
  FUNC_0(VAR_0, VAR_3->irq_res, VAR_3->irq_ih);
 VAR_3->irq_ih = ((void*)0);

 return (0);
}
