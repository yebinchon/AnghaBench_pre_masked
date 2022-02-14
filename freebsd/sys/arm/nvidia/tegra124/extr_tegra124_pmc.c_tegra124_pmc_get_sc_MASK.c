
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_pmc_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 struct tegra124_pmc_softc* VAR_0 ;

__attribute__((used)) static inline struct tegra124_pmc_softc *
FUNC_1(void)
{
 if (VAR_0 == ((void*)0))
  FUNC_0("To early call to Tegra PMC driver.\n");
 return (VAR_0);
}
