
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bFunctionLength; scalar_t__ bType; int * bMode; } ;
typedef TYPE_2__ usb_mcpc_acm_descriptor ;
typedef int uint8_t ;
struct usb_interface_descriptor {int bInterfaceNumber; } ;
struct usb_config_descriptor {int dummy; } ;
struct TYPE_7__ {int bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_1__ info; int iface; } ;
struct TYPE_9__ {int sc_unit; } ;
struct ufoma_softc {int sc_nobulk; int* sc_modetable; TYPE_4__ sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_bulk_xfer; int sc_modetoactivate; int sc_currentmode; int sc_ctrl_xfer; int sc_ctrl_iface_index; int sc_ctrl_iface_no; int sc_cv; int sc_unit; int sc_dev; int sc_udev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ufoma_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int *,char*) ;
 struct usb_attach_arg* FUNC_5 (int ) ;
 struct ufoma_softc* FUNC_6 (int ) ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int* FUNC_12 (int,int ,int ) ;
 int FUNC_13 (int*,int *,int) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (TYPE_4__*,int *,int,struct ufoma_softc*,int *,int *) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_20 (int ) ;
 TYPE_2__* FUNC_21 (struct usb_config_descriptor*,struct usb_interface_descriptor*,int ,int ) ;
 scalar_t__ FUNC_22 (int ,struct ufoma_softc*,struct usb_attach_arg*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct usb_config_descriptor* FUNC_23 (int ) ;
 struct usb_interface_descriptor* FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ,int *,int ,int ,int ,struct ufoma_softc*,int *) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_21)
{
 struct usb_attach_arg *VAR_22 = FUNC_5(VAR_21);
 struct ufoma_softc *VAR_23 = FUNC_6(VAR_21);
 struct usb_config_descriptor *VAR_24;
 struct usb_interface_descriptor *VAR_25;
 struct sysctl_ctx_list *VAR_26;
 struct sysctl_oid *VAR_27;

 usb_mcpc_acm_descriptor *VAR_28;
 uint8_t VAR_29;
 int32_t VAR_30;

 VAR_23->sc_udev = VAR_22->device;
 VAR_23->sc_dev = VAR_21;
 VAR_23->sc_unit = FUNC_9(VAR_21);

 FUNC_14(&VAR_23->sc_mtx, "ufoma", ((void*)0), VAR_4);
 FUNC_18(&VAR_23->sc_super_ucom);
 FUNC_4(&VAR_23->sc_cv, "CWAIT");

 FUNC_11(VAR_21);

 FUNC_0("\n");



 VAR_24 = FUNC_23(VAR_22->device);
 VAR_25 = FUNC_24(VAR_22->iface);
 VAR_23->sc_ctrl_iface_no = VAR_25->bInterfaceNumber;
 VAR_23->sc_ctrl_iface_index = VAR_22->info.bIfaceIndex;

 VAR_30 = FUNC_25(VAR_22->device,
     &VAR_23->sc_ctrl_iface_index, VAR_23->sc_ctrl_xfer,
     VAR_17, VAR_12, VAR_23, &VAR_23->sc_mtx);

 if (VAR_30) {
  FUNC_10(VAR_21, "allocating control USB "
      "transfers failed\n");
  goto detach;
 }
 VAR_28 = FUNC_21(VAR_24, VAR_25, VAR_9, VAR_8);
 if (VAR_28 == ((void*)0)) {
  goto detach;
 }
 if (VAR_28->bFunctionLength < sizeof(*VAR_28)) {
  FUNC_10(VAR_21, "invalid MAD descriptor\n");
  goto detach;
 }
 if ((VAR_28->bType == VAR_14) ||
     (VAR_28->bType == VAR_15)) {
  VAR_23->sc_nobulk = 1;
 } else {
  VAR_23->sc_nobulk = 0;
  if (FUNC_22(VAR_21, VAR_23, VAR_22)) {
   goto detach;
  }
 }

 VAR_29 = (VAR_28->bFunctionLength - sizeof(*VAR_28) + 1);



 VAR_23->sc_modetable = FUNC_12(VAR_29 + 1, VAR_5, VAR_6);

 if (VAR_23->sc_modetable == ((void*)0)) {
  goto detach;
 }
 VAR_23->sc_modetable[0] = (VAR_29 + 1);
 FUNC_13(&VAR_23->sc_modetable[1], VAR_28->bMode, VAR_29);

 VAR_23->sc_currentmode = VAR_13;
 VAR_23->sc_modetoactivate = VAR_28->bMode[0];


 FUNC_15(&VAR_23->sc_mtx);
 FUNC_26(VAR_23->sc_bulk_xfer[VAR_11]);
 FUNC_26(VAR_23->sc_bulk_xfer[VAR_10]);
 FUNC_16(&VAR_23->sc_mtx);

 VAR_30 = FUNC_17(&VAR_23->sc_super_ucom, &VAR_23->sc_ucom, 1, VAR_23,
     &VAR_16, &VAR_23->sc_mtx);
 if (VAR_30) {
  FUNC_0("ucom_attach failed\n");
  goto detach;
 }
 FUNC_19(&VAR_23->sc_super_ucom, VAR_21);


 VAR_26 = FUNC_7(VAR_21);
 VAR_27 = FUNC_8(VAR_21);

 FUNC_1(VAR_26, FUNC_3(VAR_27), VAR_7, "supportmode",
   VAR_0|VAR_2, VAR_23, 0, VAR_20,
   "A", "Supporting port role");

 FUNC_1(VAR_26, FUNC_3(VAR_27), VAR_7, "currentmode",
   VAR_0|VAR_2, VAR_23, 0, VAR_18,
   "A", "Current port role");

 FUNC_1(VAR_26, FUNC_3(VAR_27), VAR_7, "openmode",
   VAR_1|VAR_2, VAR_23, 0, VAR_19,
   "A", "Mode to transit when port is opened");
 FUNC_2(VAR_26, FUNC_3(VAR_27), VAR_7, "comunit",
   VAR_0, &(VAR_23->sc_super_ucom.sc_unit), 0,
   "Unit number as USB serial");

 return (0);

detach:
 FUNC_20(VAR_21);
 return (VAR_3);
}
