
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_i2c_softc {scalar_t__ done; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct tegra_i2c_softc*) ;
 int FUNC_2 (struct tegra_i2c_softc*) ;
 int FUNC_3 (struct tegra_i2c_softc*) ;

__attribute__((used)) static int
FUNC_4(struct tegra_i2c_softc *VAR_1)
{
 int VAR_2;

 for(VAR_2 = 10000; VAR_2 > 0; VAR_2--) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
  if (VAR_1->done != 0)
    break;
  FUNC_0(1);
 }
 if (VAR_2 <= 0)
  return (VAR_0);
 return (0);
}
