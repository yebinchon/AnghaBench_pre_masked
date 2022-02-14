
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tegra_pcib_softc {int irq_res; } ;
typedef int device_t ;


 struct tegra_pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 struct tegra_pcib_softc *VAR_3;
 u_int VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_2(FUNC_5(VAR_3->irq_res));
 FUNC_1(VAR_0, "route pin %d for device %d.%d to %u\n",
        VAR_2, FUNC_4(VAR_1), FUNC_3(VAR_1),
        VAR_4);

 return (VAR_4);
}
