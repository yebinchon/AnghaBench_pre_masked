
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int dummy; } ;
struct octusb_softc {int sc_bus; } ;


 struct octusb_softc* FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct octusb_softc*) ;

__attribute__((used)) static void
FUNC_4(struct usb_bus *VAR_0)
{
 struct octusb_softc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->sc_bus);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->sc_bus);
}
