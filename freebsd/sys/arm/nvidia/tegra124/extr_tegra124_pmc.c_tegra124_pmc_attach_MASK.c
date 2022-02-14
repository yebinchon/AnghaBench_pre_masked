
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra124_pmc_softc {scalar_t__ sysclkreq_high; int * mem_res; int dev; int clk; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct tegra124_pmc_softc*) ;
 int FUNC_1 (struct tegra124_pmc_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct tegra124_pmc_softc*,int ,int ) ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ,char*,int *) ;
 struct tegra124_pmc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 struct tegra124_pmc_softc* VAR_11 ;
 int FUNC_9 (struct tegra124_pmc_softc*,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_12)
{
 struct tegra124_pmc_softc *VAR_13;
 int VAR_14, VAR_15;
 uint32_t VAR_16;
 phandle_t VAR_17;

 VAR_13 = FUNC_5(VAR_12);
 VAR_13->dev = VAR_12;
 VAR_17 = FUNC_7(VAR_12);

 VAR_15 = FUNC_9(VAR_13, VAR_17);
 if (VAR_15 != 0) {
  FUNC_6(VAR_13->dev, "Cannot parse FDT data\n");
  return (VAR_15);
 }

 VAR_15 = FUNC_4(VAR_13->dev, 0, "pclk", &VAR_13->clk);
 if (VAR_15 != 0) {
  FUNC_6(VAR_13->dev, "Cannot get \"pclk\" clock\n");
  return (VAR_0);
 }

 VAR_14 = 0;
 VAR_13->mem_res = FUNC_3(VAR_12, VAR_10, &VAR_14,
     VAR_9);
 if (VAR_13->mem_res == ((void*)0)) {
  FUNC_6(VAR_12, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 FUNC_0(VAR_13);


 VAR_16 = FUNC_1(VAR_13, VAR_1);
 VAR_16 |= VAR_2;
 FUNC_2(VAR_13, VAR_1, VAR_16);


 VAR_16 = FUNC_1(VAR_13, VAR_1);
 if (VAR_13->sysclkreq_high)
  VAR_16 &= ~VAR_4;
 else
  VAR_16 |= VAR_4;
 FUNC_2(VAR_13, VAR_1, VAR_16);


 VAR_16 = FUNC_1(VAR_13, VAR_1);
 VAR_16 |= VAR_3;
 FUNC_2(VAR_13, VAR_1, VAR_16);





 VAR_16 = FUNC_1(VAR_13, VAR_7);
 VAR_16 &= ~ VAR_8;
 FUNC_2(VAR_13, VAR_7, VAR_16);

 VAR_16 = FUNC_1(VAR_13, VAR_5);
 VAR_16 &= ~ VAR_6;
 FUNC_2(VAR_13, VAR_5, VAR_16);

 if (VAR_11 != ((void*)0))
  FUNC_8("tegra124_pmc: double driver attach");
 VAR_11 = VAR_13;
 return (0);
}
