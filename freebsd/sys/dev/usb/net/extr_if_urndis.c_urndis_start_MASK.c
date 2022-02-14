
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct urndis_softc {int * sc_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct urndis_softc* FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct usb_ether *VAR_2)
{
 struct urndis_softc *VAR_3 = FUNC_0(VAR_2);




 FUNC_1(VAR_3->sc_xfer[VAR_1]);
 FUNC_1(VAR_3->sc_xfer[VAR_0]);
}
