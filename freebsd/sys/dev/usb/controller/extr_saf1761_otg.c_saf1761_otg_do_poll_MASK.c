
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int dummy; } ;
struct saf1761_otg_softc {int sc_bus; } ;


 struct saf1761_otg_softc* FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct saf1761_otg_softc*) ;
 int FUNC_6 (struct saf1761_otg_softc*) ;

__attribute__((used)) static void
FUNC_7(struct usb_bus *VAR_0)
{
 struct saf1761_otg_softc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->sc_bus);
 FUNC_2(&VAR_1->sc_bus);
 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
 FUNC_3(&VAR_1->sc_bus);
 FUNC_4(&VAR_1->sc_bus);
}
