
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_i2c_softc {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct tegra_i2c_softc*,int ) ;
 int FUNC_3 (struct tegra_i2c_softc*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct tegra_i2c_softc *VAR_8)
{
 int VAR_9;
 uint32_t VAR_10, VAR_11;

 FUNC_3(VAR_8, VAR_0,
     FUNC_1(18) |
     VAR_2 |
     VAR_3);

 FUNC_3(VAR_8, VAR_6, VAR_7);
 for (VAR_9 = 1000; VAR_9 > 0; VAR_9--) {
  if (FUNC_2(VAR_8, VAR_6) == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_9 <= 0)
  FUNC_4(VAR_8->dev, "config load timeouted\n");
 VAR_10 = FUNC_2(VAR_8, VAR_0);
 VAR_10 |= VAR_1;
 FUNC_3(VAR_8, VAR_0,VAR_10);

 for (VAR_9 = 1000; VAR_9 > 0; VAR_9--) {
  if ((FUNC_2(VAR_8, VAR_0) &
      VAR_1) == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_9 <= 0)
  FUNC_4(VAR_8->dev, "bus clear timeouted\n");

 VAR_11 = FUNC_2(VAR_8, VAR_4);
 if ((VAR_11 & VAR_5) == 0)
  FUNC_4(VAR_8->dev, "bus clear failed\n");
}
