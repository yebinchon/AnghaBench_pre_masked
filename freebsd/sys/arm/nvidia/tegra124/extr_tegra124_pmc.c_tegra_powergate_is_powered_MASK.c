
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra124_pmc_softc {int dummy; } ;
typedef enum tegra_powergate_id { ____Placeholder_tegra_powergate_id } tegra_powergate_id ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tegra124_pmc_softc*,int ) ;
 struct tegra124_pmc_softc* FUNC_2 () ;

int
FUNC_3(enum tegra_powergate_id VAR_1)
{
 struct tegra124_pmc_softc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_2();

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 return ((VAR_3 & FUNC_0(VAR_1)) ? 1 : 0);
}
