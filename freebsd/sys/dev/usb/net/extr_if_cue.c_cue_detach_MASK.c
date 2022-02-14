
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct cue_softc {int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 struct cue_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct cue_softc *VAR_2 = FUNC_0(VAR_1);
 struct usb_ether *VAR_3 = &VAR_2->sc_ue;

 FUNC_3(VAR_2->sc_xfer, VAR_0);
 FUNC_2(VAR_3);
 FUNC_1(&VAR_2->sc_mtx);

 return (0);
}
