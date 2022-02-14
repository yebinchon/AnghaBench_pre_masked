
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct TYPE_6__ {int rate; int * syncmask; int packetsize; int resolution; int protocol; } ;
struct TYPE_5__ {int buttons; int model; int type; int iftype; } ;
struct wsp_softc {scalar_t__ tp_datalen; int scr_mode; int sc_touch; TYPE_3__ sc_mode; TYPE_2__ sc_hw; int sc_fifo; int sc_mutex; int sc_usb_device; int sc_xfer; scalar_t__ sc_params; } ;
struct TYPE_4__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
typedef int device_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,char*,struct wsp_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (struct usb_attach_arg*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct usb_attach_arg* FUNC_3 (int ) ;
 struct wsp_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ) ;
 int VAR_21 ;
 scalar_t__ FUNC_8 (void*,int ,int ,int *) ;
 int FUNC_9 (int *,char*,int *,int) ;
 scalar_t__ FUNC_10 (int ,struct wsp_softc*,int *,int *,int *,int ,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int *,void**,int *,int ,int ) ;
 scalar_t__ FUNC_13 (int ,int *,int ,int ,int ,struct wsp_softc*,int *) ;
 int VAR_22 ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_15 (struct wsp_softc*,int) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_25)
{
 struct wsp_softc *VAR_26 = FUNC_4(VAR_25);
 struct usb_attach_arg *VAR_27 = FUNC_3(VAR_25);
 usb_error_t VAR_28;
 void *VAR_29 = ((void*)0);
 uint16_t VAR_30;

 FUNC_1(VAR_17, "sc=%p\n", VAR_26);


 VAR_28 = FUNC_12(VAR_27->device, ((void*)0), &VAR_29,
     &VAR_30, VAR_13, VAR_27->info.bIfaceIndex);

 if (VAR_28 == VAR_15) {

  VAR_26->tp_datalen = FUNC_8(VAR_29, VAR_30, VAR_21, ((void*)0));
  FUNC_7(VAR_29, VAR_13);

  if (VAR_26->tp_datalen <= 0 || VAR_26->tp_datalen > VAR_16) {
   FUNC_0("Invalid datalength or too big "
       "datalength: %d\n", VAR_26->tp_datalen);
   return (VAR_1);
  }
 } else {
  return (VAR_1);
 }

 VAR_26->sc_usb_device = VAR_27->device;


 VAR_26->sc_params = VAR_23 + FUNC_2(VAR_27);
 VAR_28 = FUNC_15(VAR_26, 0);
 if (VAR_28 != VAR_15) {
  FUNC_0("Failed to set mode to HID MODE (%d)\n", VAR_28);
  return (VAR_1);
 }

 VAR_28 = FUNC_15(VAR_26, 1);
 if (VAR_28 != VAR_15) {
  FUNC_0("failed to set mode to RAW MODE (%d)\n", VAR_28);
  return (VAR_1);
 }

 FUNC_9(&VAR_26->sc_mutex, "wspmtx", ((void*)0), VAR_11 | VAR_12);

 VAR_28 = FUNC_13(VAR_27->device,
     &VAR_27->info.bIfaceIndex, VAR_26->sc_xfer, VAR_22,
     VAR_18, VAR_26, &VAR_26->sc_mutex);
 if (VAR_28) {
  FUNC_0("error=%s\n", FUNC_11(VAR_28));
  goto detach;
 }
 if (FUNC_10(VAR_26->sc_usb_device, VAR_26, &VAR_26->sc_mutex,
     &VAR_24, &VAR_26->sc_fifo,
     FUNC_5(VAR_25), -1, VAR_27->info.bIfaceIndex,
     VAR_14, VAR_2, 0644)) {
  goto detach;
 }
 FUNC_6(VAR_25);

 VAR_26->sc_hw.buttons = 3;
 VAR_26->sc_hw.iftype = VAR_3;
 VAR_26->sc_hw.type = VAR_8;
 VAR_26->sc_hw.model = VAR_4;
 VAR_26->sc_mode.protocol = VAR_9;
 VAR_26->sc_mode.rate = -1;
 VAR_26->sc_mode.resolution = VAR_10;
 VAR_26->sc_mode.packetsize = VAR_5;
 VAR_26->sc_mode.syncmask[0] = VAR_7;
 VAR_26->sc_mode.syncmask[1] = VAR_6;

 VAR_26->sc_touch = VAR_20;
 VAR_26->scr_mode = VAR_19;

 return (0);

detach:
 FUNC_14(VAR_25);
 return (VAR_0);
}
