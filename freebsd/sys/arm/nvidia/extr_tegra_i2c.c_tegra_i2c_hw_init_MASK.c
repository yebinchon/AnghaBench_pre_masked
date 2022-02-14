
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_i2c_softc {int dev; int bus_freq; int reset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct tegra_i2c_softc*,int ) ;
 int FUNC_5 (struct tegra_i2c_softc*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct tegra_i2c_softc*) ;
 int FUNC_10 (struct tegra_i2c_softc*,int ) ;

__attribute__((used)) static int
FUNC_11(struct tegra_i2c_softc *VAR_8)
{
 int VAR_9, VAR_10;


 VAR_9 = FUNC_7(VAR_8->reset);
 if (VAR_9 != 0) {
  FUNC_6(VAR_8->dev, "Cannot assert reset\n");
  return (VAR_9);
 }
 FUNC_0(10);
 VAR_9 = FUNC_8(VAR_8->reset);
 if (VAR_9 != 0) {
  FUNC_6(VAR_8->dev, "Cannot clear reset\n");
  return (VAR_9);
 }

 FUNC_5(VAR_8, VAR_6, 0);
 FUNC_5(VAR_8, VAR_7, 0xFFFFFFFF);
 FUNC_5(VAR_8, VAR_0, VAR_1 | VAR_2 |
     FUNC_1(2));

 FUNC_10(VAR_8, VAR_8->bus_freq);

 FUNC_5(VAR_8, VAR_5, FUNC_3(7) |
     FUNC_2(0));

 FUNC_5(VAR_8, VAR_3, VAR_4);
 for (VAR_10 = 1000; VAR_10 > 0; VAR_10--) {
  if (FUNC_4(VAR_8, VAR_3) == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_10 <= 0)
  FUNC_6(VAR_8->dev, "config load timeouted\n");

 FUNC_9(VAR_8);
 return (0);
}
