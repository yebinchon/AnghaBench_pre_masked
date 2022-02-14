
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra124_pmc_softc {int dev; } ;
typedef enum tegra_powergate_id { ____Placeholder_tegra_powergate_id } tegra_powergate_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct tegra124_pmc_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct tegra124_pmc_softc*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 struct tegra124_pmc_softc* FUNC_8 () ;

int
FUNC_9(enum tegra_powergate_id VAR_7)
{
 struct tegra124_pmc_softc *VAR_8;
 uint32_t VAR_9;
 enum tegra_powergate_id VAR_10;
 int VAR_11;

 VAR_8 = FUNC_8();

 if (VAR_7 == VAR_4) {
  FUNC_5(VAR_8, VAR_1, 0);
  return (0);
 }

 VAR_9 = FUNC_4(VAR_8, VAR_2);
 if ((VAR_9 & FUNC_2(VAR_7)) == 0)
  FUNC_7("Attempt to remove clamping for unpowered partition.\n");

 if (VAR_7 == VAR_5)
  VAR_10 = VAR_6;
 else if (VAR_7 == VAR_6)
  VAR_10 = VAR_5;
 else
  VAR_10 = VAR_7;
 FUNC_5(VAR_8, VAR_3, FUNC_3(VAR_10));

 for (VAR_11 = 100; VAR_11 > 0; VAR_11--) {
  VAR_9 = FUNC_4(VAR_8, VAR_3);
  if ((VAR_9 & FUNC_3(VAR_10)) == 0)
   break;
  FUNC_0(1);
 }
 if (VAR_11 <= 0)
  FUNC_6(VAR_8->dev, "Timeout when remove clamping\n");

 VAR_9 = FUNC_4(VAR_8, VAR_0);
 if ((VAR_9 & FUNC_1(VAR_7)) != 0)
  FUNC_7("Cannot remove clamping\n");

 return (0);
}
