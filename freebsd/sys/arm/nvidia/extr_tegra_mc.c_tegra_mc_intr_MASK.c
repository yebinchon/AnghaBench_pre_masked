
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct tegra_mc_softc {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct tegra_mc_softc*,int ) ;
 int FUNC_3 (struct tegra_mc_softc*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,...) ;
 int * VAR_14 ;

__attribute__((used)) static void
FUNC_6(void *VAR_15)
{
 struct tegra_mc_softc *VAR_16;
 uint32_t VAR_17, VAR_18;
 uint64_t VAR_19;

 VAR_16 = (struct tegra_mc_softc *)VAR_15;

 VAR_17 = FUNC_2(VAR_16, VAR_4);
 if ((VAR_17 & VAR_9) == 0) {
  FUNC_3(VAR_16, VAR_4, VAR_17);
  return;
 }

 FUNC_4(VAR_16->dev, "Memory Controller Interrupt:\n");
 if (VAR_17 & VAR_7)
  FUNC_5(" - MTS carveout violation\n");
 if (VAR_17 & VAR_12)
  FUNC_5(" - SEC carveout violation\n");
 if (VAR_17 & VAR_8)
  FUNC_5(" - VPR requirements violated\n");
 if (VAR_17 & VAR_10)
  FUNC_5(" - ivalid APB ASID update\n");
 if (VAR_17 & VAR_11)
  FUNC_5(" - SMMU address translation error\n");
 if (VAR_17 & VAR_5)
  FUNC_5(" - arbitration deadlock-prevention threshold hit\n");
 if (VAR_17 & VAR_13)
  FUNC_5(" - SMMU address translation security error\n");
 if (VAR_17 & VAR_6)
  FUNC_5(" - SMMU address decode error\n");

 if ((VAR_17 & (VAR_11 | VAR_13 |
    VAR_6)) != 0) {
  VAR_18 = FUNC_2(VAR_16, VAR_2);
  VAR_19 = FUNC_2(VAR_16, VAR_2);
  VAR_19 |= (uint64_t)(FUNC_0(VAR_18)) << 32;
  FUNC_5(" at 0x%012llX [%s %s %s]  - %s error.\n",
      VAR_19,
      VAR_17 & VAR_3 ? "Swap, " : "",
      VAR_17 & VAR_1 ? "Sec, " : "",
      VAR_17 & VAR_0 ? "Write" : "Read",
      VAR_14[FUNC_1(VAR_18)]);
 }
 FUNC_3(VAR_16, VAR_4, VAR_17);
}
