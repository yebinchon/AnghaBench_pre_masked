
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_xhci_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct tegra_xhci_softc*,int ) ;
 int FUNC_4 (struct tegra_xhci_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct tegra_xhci_softc *VAR_9, uint32_t VAR_10, uint32_t VAR_11)
{
 uint32_t VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_9, VAR_8);
 if (VAR_12 != VAR_2) {
  FUNC_5(VAR_9->dev,
      "CPU mailbox is busy: 0x%08X\n", VAR_12);
  return (VAR_4);
 }

 FUNC_4(VAR_9, VAR_8, VAR_3);
 VAR_12 = FUNC_3(VAR_9, VAR_8);
 if (VAR_12 != VAR_3) {
  FUNC_5(VAR_9->dev,
      "Cannot acquire CPU mailbox: 0x%08X\n", VAR_12);
  return (VAR_4);
 }
 VAR_12 = FUNC_1(VAR_10) | FUNC_0(VAR_11);
 FUNC_4(VAR_9, VAR_7, VAR_12);

 VAR_12 = FUNC_3(VAR_9, VAR_6);
 VAR_12 |= VAR_0 | VAR_1;
 FUNC_4(VAR_9, VAR_6, VAR_12);

 for (VAR_13 = 250; VAR_13 > 0; VAR_13--) {
  VAR_12 = FUNC_3(VAR_9, VAR_8);
  if (VAR_12 == VAR_2)
   break;
  FUNC_2(100);
 }
 if (VAR_13 <= 0) {
  FUNC_5(VAR_9->dev,
      "Command response timeout: 0x%08X\n", VAR_12);
  return (VAR_5);
 }

 return(0);
}
