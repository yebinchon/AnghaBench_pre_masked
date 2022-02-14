
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int * ue_methods; int * ue_mtx; int ue_udev; int ue_dev; struct smsc_softc* ue_sc; } ;
struct usb_attach_arg {int device; } ;
struct smsc_softc {int sc_mtx; int sc_xfer; int sc_flags; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_attach_arg*) ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct smsc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (int ,int *,int ,int ,int ,struct smsc_softc*,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct usb_attach_arg *VAR_7 = FUNC_1(VAR_6);
 struct smsc_softc *VAR_8 = FUNC_3(VAR_6);
 struct usb_ether *VAR_9 = &VAR_8->sc_ue;
 uint8_t VAR_10;
 int VAR_11;

 VAR_8->sc_flags = FUNC_0(VAR_7);

 FUNC_5(VAR_6);

 FUNC_6(&VAR_8->sc_mtx, FUNC_2(VAR_6), ((void*)0), VAR_1);


 VAR_10 = VAR_2;
 VAR_11 = FUNC_9(VAR_7->device, &VAR_10, VAR_8->sc_xfer,
                           VAR_4, VAR_3, VAR_8, &VAR_8->sc_mtx);
 if (VAR_11) {
  FUNC_4(VAR_6, "error: allocating USB transfers failed\n");
  goto detach;
 }

 VAR_9->ue_sc = VAR_8;
 VAR_9->ue_dev = VAR_6;
 VAR_9->ue_udev = VAR_7->device;
 VAR_9->ue_mtx = &VAR_8->sc_mtx;
 VAR_9->ue_methods = &VAR_5;

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_6, "error: could not attach interface\n");
  goto detach;
 }
 return (0);

detach:
 FUNC_7(VAR_6);
 return (VAR_0);
}
