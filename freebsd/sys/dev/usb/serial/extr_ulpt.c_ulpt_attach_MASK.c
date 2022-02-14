
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_interface_descriptor {scalar_t__ bDescriptorType; int bLength; scalar_t__ bInterfaceNumber; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; int bAlternateSetting; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_config_descriptor {int bConfigurationValue; } ;
struct TYPE_2__ {int bIfaceIndex; scalar_t__ bIfaceNum; } ;
struct usb_attach_arg {TYPE_1__ info; int device; int iface; } ;
struct ulpt_softc {scalar_t__ sc_iface_no; int sc_mtx; int sc_fifo_noreset; int sc_fifo; int sc_dev; int sc_xfer; int sc_watchdog; int sc_udev; } ;
typedef int device_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,struct ulpt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int VAR_13 ;
 struct usb_attach_arg* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 struct ulpt_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int* VAR_14 ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int *,char*,int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,...) ;
 int VAR_15 ;
 int FUNC_15 (int ) ;
 int VAR_16 ;
 int FUNC_16 (struct ulpt_softc*) ;
 int VAR_17 ;
 int FUNC_17 (int *,int *,int ) ;
 scalar_t__ FUNC_18 (struct usb_config_descriptor*,void*) ;
 int FUNC_19 (int ,struct ulpt_softc*,int *,int *,int *,int,int,int,int ,int ,int) ;
 int FUNC_20 (int ,struct usb_device_request*,int*,int ,int*,int ) ;
 int FUNC_21 (int) ;
 struct usb_config_descriptor* FUNC_22 (int ) ;
 struct usb_interface_descriptor* FUNC_23 (int ) ;
 int FUNC_24 (int ,int,int) ;
 int FUNC_25 (int ,int*,int ,int ,int ,struct ulpt_softc*,int *) ;

__attribute__((used)) static int
FUNC_26(device_t VAR_18)
{
 struct usb_attach_arg *VAR_19 = FUNC_4(VAR_18);
 struct ulpt_softc *VAR_20 = FUNC_6(VAR_18);
 struct usb_interface_descriptor *VAR_21;
 int VAR_22 = FUNC_7(VAR_18);
 int VAR_23;
 uint8_t VAR_24 = VAR_19->info.bIfaceIndex;
 uint8_t VAR_25;

 FUNC_1(11, "sc=%p\n", VAR_20);

 VAR_20->sc_dev = VAR_18;
 VAR_20->sc_udev = VAR_19->device;

 FUNC_9(VAR_18);

 FUNC_11(&VAR_20->sc_mtx, "ulpt lock", ((void*)0), VAR_2 | VAR_3);

 FUNC_17(&VAR_20->sc_watchdog, &VAR_20->sc_mtx, 0);



 VAR_21 = FUNC_23(VAR_19->iface);
 VAR_25 = 0xFF;
 while (1) {
  if (VAR_21 == ((void*)0)) {
   break;
  }
  if ((VAR_21->bDescriptorType == VAR_4) &&
      (VAR_21->bLength >= sizeof(*VAR_21))) {
   if (VAR_21->bInterfaceNumber != VAR_19->info.bIfaceNum) {
    break;
   } else {
    VAR_25++;
    if ((VAR_21->bInterfaceClass == VAR_5) &&
        (VAR_21->bInterfaceSubClass == VAR_8) &&
        (VAR_21->bInterfaceProtocol == VAR_7)) {
     goto found;
    }
   }
  }
  VAR_21 = (void *)FUNC_18(
      FUNC_22(VAR_19->device), (void *)VAR_21);
 }
 goto detach;

found:

 FUNC_0("setting alternate "
     "config number: %d\n", VAR_25);

 if (VAR_25) {

  VAR_23 = FUNC_24
      (VAR_19->device, VAR_24, VAR_25);

  if (VAR_23) {
   FUNC_0("could not set alternate "
       "config, error=%s\n", FUNC_21(VAR_23));
   goto detach;
  }
 }
 VAR_20->sc_iface_no = VAR_21->bInterfaceNumber;

 VAR_23 = FUNC_25(VAR_19->device, &VAR_24,
     VAR_20->sc_xfer, VAR_15, VAR_9,
     VAR_20, &VAR_20->sc_mtx);
 if (VAR_23) {
  FUNC_0("error=%s\n", FUNC_21(VAR_23));
  goto detach;
 }
 FUNC_8(VAR_20->sc_dev, "using bi-directional mode\n");
 VAR_23 = FUNC_19(VAR_19->device, VAR_20, &VAR_20->sc_mtx,
     &VAR_16, &VAR_20->sc_fifo,
     VAR_22, -1, VAR_19->info.bIfaceIndex,
     VAR_6, VAR_1, 0644);
 if (VAR_23) {
  goto detach;
 }
 VAR_23 = FUNC_19(VAR_19->device, VAR_20, &VAR_20->sc_mtx,
     &VAR_17, &VAR_20->sc_fifo_noreset,
     VAR_22, -1, VAR_19->info.bIfaceIndex,
     VAR_6, VAR_1, 0644);
 if (VAR_23) {
  goto detach;
 }


 FUNC_12(&VAR_20->sc_mtx);
 FUNC_16(VAR_20);
 FUNC_13(&VAR_20->sc_mtx);
 return (0);

detach:
 FUNC_15(VAR_18);
 return (VAR_0);
}
