
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int * ue_methods; int * ue_mtx; int ue_udev; int ue_dev; struct mos_softc* ue_sc; } ;
struct usb_attach_arg {int device; } ;
struct mos_softc {int mos_flags; int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct usb_attach_arg*) ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mos_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (int *,int ,int *,int ) ;
 int FUNC_9 (struct usb_ether*) ;
 int FUNC_10 (int ,int *,int ,int ,int ,struct mos_softc*,int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_9)
{
 struct usb_attach_arg *VAR_10 = FUNC_2(VAR_9);
 struct mos_softc *VAR_11 = FUNC_4(VAR_9);
 struct usb_ether *VAR_12 = &VAR_11->sc_ue;
 uint8_t VAR_13;
 int VAR_14;

 VAR_11->mos_flags = FUNC_1(VAR_10);

 FUNC_6(VAR_9);
 FUNC_8(&VAR_11->sc_mtx, FUNC_3(VAR_9), ((void*)0), VAR_6);

 VAR_13 = VAR_5;
 VAR_14 = FUNC_10(VAR_10->device, &VAR_13,
     VAR_11->sc_xfer, VAR_7, VAR_4,
     VAR_11, &VAR_11->sc_mtx);

 if (VAR_14) {
  FUNC_5(VAR_9, "allocating USB transfers failed\n");
  goto detach;
 }
 VAR_12->ue_sc = VAR_11;
 VAR_12->ue_dev = VAR_9;
 VAR_12->ue_udev = VAR_10->device;
 VAR_12->ue_mtx = &VAR_11->sc_mtx;
 VAR_12->ue_methods = &VAR_8;


 if (VAR_11->mos_flags & VAR_1) {
  FUNC_0("model: MCS7730");
 } else if (VAR_11->mos_flags & VAR_2) {
  FUNC_0("model: MCS7830");
 } else if (VAR_11->mos_flags & VAR_3) {
  FUNC_0("model: MCS7832");
 }
 VAR_14 = FUNC_9(VAR_12);
 if (VAR_14) {
  FUNC_5(VAR_9, "could not attach interface\n");
  goto detach;
 }
 return (0);


detach:
 FUNC_7(VAR_9);
 return (VAR_0);
}
