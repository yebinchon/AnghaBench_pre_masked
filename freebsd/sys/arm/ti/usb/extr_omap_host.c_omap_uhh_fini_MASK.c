
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_uhh_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct omap_uhh_softc*,int ) ;
 int FUNC_2 (struct omap_uhh_softc*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct omap_uhh_softc *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(VAR_4->sc_dev, "Stopping TI EHCI USB Controller\n");


 if (VAR_3 < 10)
  VAR_5 = 1;
 else
  VAR_5 = (100 * VAR_3) / 1000;


 FUNC_2(VAR_4, VAR_0, 0x0002);
 while ((FUNC_1(VAR_4, VAR_1) & 0x07) == 0x00) {

  FUNC_3("USBRESET", 1);

  if (VAR_5-- == 0) {
   FUNC_0(VAR_4->sc_dev, "operation timed out\n");
   break;
  }
 }


 FUNC_4(VAR_2);

 FUNC_0(VAR_4->sc_dev, "Clock to USB host has been disabled\n");
}
