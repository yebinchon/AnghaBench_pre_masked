
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int * ue_mtx; int ue_udev; int ue_dev; struct udav_softc* ue_sc; int * ue_methods; } ;
struct usb_attach_arg {int device; } ;
struct udav_softc {int sc_flags; int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_attach_arg*) ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct udav_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (int ,int *,int ,int ,int ,struct udav_softc*,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9)
{
 struct usb_attach_arg *VAR_10 = FUNC_1(VAR_9);
 struct udav_softc *VAR_11 = FUNC_3(VAR_9);
 struct usb_ether *VAR_12 = &VAR_11->sc_ue;
 uint8_t VAR_13;
 int VAR_14;

 VAR_11->sc_flags = FUNC_0(VAR_10);

 FUNC_5(VAR_9);

 FUNC_6(&VAR_11->sc_mtx, FUNC_2(VAR_9), ((void*)0), VAR_1);

 VAR_13 = VAR_4;
 VAR_14 = FUNC_9(VAR_10->device, &VAR_13,
     VAR_11->sc_xfer, VAR_6, VAR_5, VAR_11, &VAR_11->sc_mtx);
 if (VAR_14) {
  FUNC_4(VAR_9, "allocating USB transfers failed\n");
  goto detach;
 }




 if (VAR_11->sc_flags & VAR_3) {
  VAR_12->ue_methods = &VAR_8;
  VAR_11->sc_flags |= VAR_2;
 } else {
  VAR_12->ue_methods = &VAR_7;
 }

 VAR_12->ue_sc = VAR_11;
 VAR_12->ue_dev = VAR_9;
 VAR_12->ue_udev = VAR_10->device;
 VAR_12->ue_mtx = &VAR_11->sc_mtx;

 VAR_14 = FUNC_8(VAR_12);
 if (VAR_14) {
  FUNC_4(VAR_9, "could not attach interface\n");
  goto detach;
 }

 return (0);

detach:
 FUNC_7(VAR_9);
 return (VAR_0);
}
