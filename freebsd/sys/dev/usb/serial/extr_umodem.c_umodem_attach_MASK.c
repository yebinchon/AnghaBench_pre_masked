
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_interface_descriptor {scalar_t__ bInterfaceNumber; } ;
struct usb_interface {int dummy; } ;
struct usb_cdc_union_descriptor {int bLength; int* bSlaveInterface; } ;
struct usb_cdc_cm_descriptor {int bLength; int bDataInterface; } ;
struct TYPE_2__ {int bIfaceNum; scalar_t__ bIfaceIndex; } ;
struct usb_attach_arg {scalar_t__ usb_mode; int device; TYPE_1__ info; } ;
struct umodem_softc {int sc_ctrl_iface_no; int sc_cm_cap; int sc_acm_cap; int sc_data_iface_no; int sc_cm_over_data; int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; scalar_t__* sc_iface_index; int sc_udev; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 struct umodem_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int,struct umodem_softc*,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct usb_attach_arg*,scalar_t__,int*,scalar_t__*) ;
 int FUNC_14 (struct usb_attach_arg*,int*,int*) ;
 struct usb_cdc_cm_descriptor* FUNC_15 (struct usb_attach_arg*,int ,int ) ;
 int FUNC_16 (int ,int,int ,int ) ;
 scalar_t__ FUNC_17 (struct usb_attach_arg*,int ) ;
 struct usb_cdc_union_descriptor* FUNC_18 (int ,int *,scalar_t__,int ,int,int ,int) ;
 struct usb_interface* FUNC_19 (int ,scalar_t__) ;
 struct usb_interface_descriptor* FUNC_20 (struct usb_interface*) ;
 int FUNC_21 (int ,scalar_t__,scalar_t__) ;
 int FUNC_22 (int ,scalar_t__*,int *,int ,int ,struct umodem_softc*,int *) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_17)
{
 struct usb_attach_arg *VAR_18 = FUNC_1(VAR_17);
 struct umodem_softc *VAR_19 = FUNC_2(VAR_17);
 struct usb_cdc_cm_descriptor *VAR_20;
 struct usb_cdc_union_descriptor *VAR_21;
 uint8_t VAR_22;
 int VAR_23;

 FUNC_4(VAR_17);
 FUNC_5(&VAR_19->sc_mtx, "umodem", ((void*)0), VAR_1);
 FUNC_9(&VAR_19->sc_super_ucom);

 VAR_19->sc_ctrl_iface_no = VAR_18->info.bIfaceNum;
 VAR_19->sc_iface_index[1] = VAR_18->info.bIfaceIndex;
 VAR_19->sc_udev = VAR_18->device;

 FUNC_14(VAR_18, &VAR_19->sc_cm_cap, &VAR_19->sc_acm_cap);



 VAR_20 = FUNC_15(VAR_18, VAR_6, VAR_4);

 if ((VAR_20 == ((void*)0)) || (VAR_20->bLength < sizeof(*VAR_20))) {

  VAR_21 = FUNC_18(VAR_18->device, ((void*)0),
      VAR_18->info.bIfaceIndex, VAR_6,
      0xFF, VAR_5, 0xFF);

  if ((VAR_21 == ((void*)0)) || (VAR_21->bLength < sizeof(*VAR_21))) {
   FUNC_0("Missing descriptor. "
       "Assuming data interface is next.\n");
   if (VAR_19->sc_ctrl_iface_no == 0xFF) {
    goto detach;
   } else {
    uint8_t VAR_24 = 0;


    VAR_19->sc_data_iface_no = 0xFF;


    FUNC_13(VAR_18,
        VAR_18->info.bIfaceIndex - 1,
        &VAR_19->sc_data_iface_no, &VAR_24);


    FUNC_13(VAR_18,
        VAR_18->info.bIfaceIndex + 1,
        &VAR_19->sc_data_iface_no, &VAR_24);


    if (VAR_19->sc_data_iface_no == 0xFF)
     goto detach;
   }
  } else {
   VAR_19->sc_data_iface_no = VAR_21->bSlaveInterface[0];
  }
 } else {
  VAR_19->sc_data_iface_no = VAR_20->bDataInterface;
 }

 FUNC_3(VAR_17, "data interface %d, has %sCM over "
     "data, has %sbreak\n",
     VAR_19->sc_data_iface_no,
     VAR_19->sc_cm_cap & VAR_13 ? "" : "no ",
     VAR_19->sc_acm_cap & VAR_11 ? "" : "no ");



 for (VAR_22 = 0;; VAR_22++) {
  struct usb_interface *VAR_25;
  struct usb_interface_descriptor *VAR_26;

  VAR_25 = FUNC_19(VAR_18->device, VAR_22);

  if (VAR_25) {

   VAR_26 = FUNC_20(VAR_25);

   if (VAR_26 && (VAR_26->bInterfaceNumber == VAR_19->sc_data_iface_no)) {
    VAR_19->sc_iface_index[0] = VAR_22;
    FUNC_21(VAR_18->device, VAR_22, VAR_18->info.bIfaceIndex);
    break;
   }
  } else {
   FUNC_3(VAR_17, "no data interface\n");
   goto detach;
  }
 }

 if (FUNC_17(VAR_18, VAR_10)) {
  VAR_19->sc_cm_over_data = 1;
 } else {
  if (VAR_19->sc_cm_cap & VAR_13) {
   if (VAR_19->sc_acm_cap & VAR_12) {

    VAR_23 = FUNC_16
    (VAR_18->device, VAR_19->sc_ctrl_iface_no,
     VAR_2, VAR_3);


   }
   VAR_19->sc_cm_over_data = 1;
  }
 }
 VAR_23 = FUNC_22(VAR_18->device,
     VAR_19->sc_iface_index, VAR_19->sc_xfer,
     VAR_16, VAR_9,
     VAR_19, &VAR_19->sc_mtx);
 if (VAR_23) {
  FUNC_3(VAR_17, "Can't setup transfer\n");
  goto detach;
 }


 if (VAR_18->usb_mode == VAR_14) {
  FUNC_6(&VAR_19->sc_mtx);
  FUNC_23(VAR_19->sc_xfer[VAR_8]);
  FUNC_23(VAR_19->sc_xfer[VAR_7]);
  FUNC_7(&VAR_19->sc_mtx);
 }

 FUNC_11(&VAR_19->sc_super_ucom, VAR_18->usb_mode);

 VAR_23 = FUNC_8(&VAR_19->sc_super_ucom, &VAR_19->sc_ucom, 1, VAR_19,
     &VAR_15, &VAR_19->sc_mtx);
 if (VAR_23) {
  FUNC_3(VAR_17, "Can't attach com\n");
  goto detach;
 }
 FUNC_10(&VAR_19->sc_super_ucom, VAR_17);

 return (0);

detach:
 FUNC_12(VAR_17);
 return (VAR_0);
}
