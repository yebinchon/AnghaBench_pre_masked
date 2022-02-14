
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_i2c_softc {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tegra_i2c_softc*,int ) ;
 int FUNC_2 (struct tegra_i2c_softc*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct tegra_i2c_softc *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 VAR_6 |= VAR_3 | VAR_2;
 FUNC_2(VAR_4, VAR_1, VAR_6);

 VAR_5 = 10;
 while (VAR_5 > 0) {
  VAR_6 = FUNC_1(VAR_4, VAR_1);
  VAR_6 &= VAR_3 |
      VAR_2;
  if (VAR_6 == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_5 <= 0) {
  FUNC_3(VAR_4->dev, "FIFO flush timedout\n");
  return (VAR_0);
 }
 return (0);
}
