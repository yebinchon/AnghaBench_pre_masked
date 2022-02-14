
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct omap_ehci_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int FUNC_2 (struct omap_ehci_softc*,int ) ;
 int FUNC_3 (struct omap_ehci_softc*,int ,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void
FUNC_5(struct omap_ehci_softc *VAR_8, unsigned int VAR_9)
{
 unsigned long VAR_10 = (VAR_7 < 10) ? 1 : ((100 * VAR_7) / 1000);
 uint32_t VAR_11;

 VAR_11 = VAR_6

  | (FUNC_0(VAR_5) << VAR_4)

  | (2 << VAR_2)

  | ((VAR_9 + 1) << VAR_3)

  | (1 << VAR_1);

 FUNC_3(VAR_8, VAR_0, VAR_11);


 while ((FUNC_2(VAR_8, VAR_0)
        & (1 << VAR_1))) {


  FUNC_4("USBPHY_RESET", 1);

  if (VAR_10-- == 0) {
   FUNC_1(VAR_8->sc_dev, "PHY reset operation timed out\n");
   break;
  }
 }
}
