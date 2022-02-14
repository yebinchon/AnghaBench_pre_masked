
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct kue_softc {int sc_mcfilters; int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct kue_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct kue_softc *VAR_3 = FUNC_0(VAR_2);
 struct usb_ether *VAR_4 = &VAR_3->sc_ue;

 FUNC_4(VAR_3->sc_xfer, VAR_0);
 FUNC_3(VAR_4);
 FUNC_2(&VAR_3->sc_mtx);
 FUNC_1(VAR_3->sc_mcfilters, VAR_1);

 return (0);
}
