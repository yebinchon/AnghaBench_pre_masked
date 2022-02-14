
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra124_pmc_softc {int dev; } ;
typedef enum tegra_powergate_id { ____Placeholder_tegra_powergate_id } tegra_powergate_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tegra124_pmc_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct tegra124_pmc_softc*) ;
 int FUNC_5 (struct tegra124_pmc_softc*,int ) ;
 int FUNC_6 (struct tegra124_pmc_softc*,int ,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct tegra124_pmc_softc *VAR_3,
    enum tegra_powergate_id VAR_4, int VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 FUNC_1(VAR_3);

 VAR_6 = FUNC_5(VAR_3, VAR_0) & FUNC_2(VAR_4);
 if (((VAR_6 != 0) && VAR_5) || ((VAR_6 == 0) && !VAR_5)) {
  FUNC_4(VAR_3);
  return (0);
 }

 for (VAR_7 = 100; VAR_7 > 0; VAR_7--) {
  VAR_6 = FUNC_5(VAR_3, VAR_1);
  if ((VAR_6 & VAR_2) == 0)
   break;
  FUNC_0(1);
 }
 if (VAR_7 <= 0)
  FUNC_7(VAR_3->dev,
      "Timeout when waiting for TOGGLE_START\n");

 FUNC_6(VAR_3, VAR_1,
     VAR_2 | FUNC_3(VAR_4));

 for (VAR_7 = 100; VAR_7 > 0; VAR_7--) {
  VAR_6 = FUNC_5(VAR_3, VAR_1);
  if ((VAR_6 & VAR_2) == 0)
   break;
  FUNC_0(1);
 }
 if (VAR_7 <= 0)
  FUNC_7(VAR_3->dev,
      "Timeout when waiting for TOGGLE_START\n");
  FUNC_4(VAR_3);
 return (0);
}
