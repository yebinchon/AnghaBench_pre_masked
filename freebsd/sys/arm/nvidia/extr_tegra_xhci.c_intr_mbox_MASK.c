
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_xhci_softc {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tegra_xhci_softc*,int ) ;
 int FUNC_3 (struct tegra_xhci_softc*,int ) ;
 int FUNC_4 (struct tegra_xhci_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct tegra_xhci_softc*,int,int) ;
 int FUNC_7 (struct tegra_xhci_softc*,int ,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_8)
{
 struct tegra_xhci_softc *VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = (struct tegra_xhci_softc *)VAR_8;


 VAR_10 = FUNC_3(VAR_9, VAR_6);
 FUNC_4(VAR_9, VAR_6, VAR_10);
 if (VAR_10 & VAR_2) {
  FUNC_5(VAR_9->dev,
      "XUSB CPU firmware hang!!! CPUCTL: 0x%08X\n",
      FUNC_2(VAR_9, VAR_7));
 }

 VAR_11 = FUNC_3(VAR_9, VAR_4);
 VAR_12 = 0;
 FUNC_7(VAR_9, FUNC_1(VAR_11),
    FUNC_0(VAR_11), &VAR_12, &VAR_13);
 if (VAR_12 != 0)
  FUNC_6(VAR_9, VAR_12, VAR_13);
 else
  FUNC_4(VAR_9, VAR_5,
      VAR_1);

 VAR_10 = FUNC_3(VAR_9, VAR_3);
 VAR_10 &= ~VAR_0;
 FUNC_4(VAR_9, VAR_3, VAR_10);

}
