
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {int dummy; } ;
struct hdmi_softc {int output; } ;
typedef int device_t ;


 struct hdmi_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct tegra_drm*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, struct tegra_drm *VAR_2)
{
 struct hdmi_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 FUNC_1(&VAR_3->output, VAR_2);
 return (0);
}
