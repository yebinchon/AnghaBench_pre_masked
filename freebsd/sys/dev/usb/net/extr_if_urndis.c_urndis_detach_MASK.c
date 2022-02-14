
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct urndis_softc {int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int FUNC_0 (struct urndis_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct urndis_softc*) ;
 struct urndis_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct urndis_softc*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct urndis_softc *VAR_2 = FUNC_2(VAR_1);
 struct usb_ether *VAR_3 = &VAR_2->sc_ue;


 FUNC_6(VAR_2->sc_xfer, VAR_0);

 FUNC_4(VAR_3);

 FUNC_0(VAR_2);
 (void)FUNC_5(VAR_2);
 FUNC_1(VAR_2);

 FUNC_3(&VAR_2->sc_mtx);

 return (0);
}
