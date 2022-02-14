
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_rtc_softc {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tegra_rtc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct tegra_rtc_softc *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 500; VAR_3 >0; VAR_3--) {
  if ((FUNC_1(VAR_2, VAR_0) & VAR_1) == 0)
   break;
  FUNC_0(1);
 }
 if (VAR_3 <= 0)
  FUNC_2(VAR_2->dev, "Device busy timeouted\n");

}
