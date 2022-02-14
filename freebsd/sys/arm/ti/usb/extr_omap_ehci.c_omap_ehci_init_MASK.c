
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct omap_ehci_softc {int sc_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct omap_ehci_softc*,int ) ;
 int FUNC_3 (struct omap_ehci_softc*,int) ;
 int FUNC_4 (struct omap_ehci_softc*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct omap_ehci_softc *VAR_3)
{
 uint32_t VAR_4 = 0;
 int VAR_5;
 device_t VAR_6;

 VAR_6 = FUNC_0(VAR_3->sc_dev);
 FUNC_1(VAR_3->sc_dev, "Starting TI EHCI USB Controller\n");





 VAR_4 = FUNC_2(VAR_3, VAR_2);
 VAR_4 &= 0xff00ffff;
 VAR_4 |= (1 << 16);
 FUNC_4(VAR_3, VAR_2, VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_5(VAR_6, VAR_5) == VAR_0)
   FUNC_3(VAR_3, VAR_5);

 }

 return(0);
}
