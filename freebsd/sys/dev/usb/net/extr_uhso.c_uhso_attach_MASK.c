
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_interface_descriptor {int bInterfaceNumber; } ;
struct TYPE_3__ {int bIfaceNum; int bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_1__ info; int iface; } ;
struct uhso_tty {size_t ht_muxport; char* ht_name; } ;
struct uhso_softc {int sc_radio; int sc_ttys; int sc_dev; int sc_type; struct ucom_softc* sc_ucom; struct uhso_tty* sc_tty; int sc_mtx; int sc_ctrl_xfer; int sc_iface_index; int sc_iface_no; int sc_ctrl_iface_no; int sc_super_ucom; int sc_rxq; int sc_udev; } ;
struct ucom_softc {int sc_subunit; TYPE_2__* sc_super; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {int sc_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,struct uhso_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int ,char*,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (struct usb_attach_arg*) ;
 scalar_t__ VAR_11 ;
 struct usb_attach_arg* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct uhso_softc* FUNC_12 (int ) ;
 struct sysctl_ctx_list* FUNC_13 (int ) ;
 struct sysctl_oid* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,char*,...) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int FUNC_19 (char*,int,char*,int,...) ;
 int FUNC_20 (int *) ;
 int VAR_12 ;
 int FUNC_21 (int ) ;
 int* VAR_13 ;
 char** VAR_14 ;
 char** VAR_15 ;
 char** VAR_16 ;
 int FUNC_22 (struct uhso_softc*,int ,void*) ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (scalar_t__) ;
 struct usb_interface_descriptor* FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int *,int ,int ,int ,struct uhso_softc*,int *) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_20)
{
 struct uhso_softc *VAR_21 = FUNC_12(VAR_20);
 struct usb_attach_arg *VAR_22 = FUNC_9(VAR_20);
 struct usb_interface_descriptor *VAR_23;
 struct sysctl_ctx_list *VAR_24;
 struct sysctl_oid *VAR_25;
 struct sysctl_oid *VAR_26 = ((void*)0), *VAR_27;
 struct ucom_softc *VAR_28;
 struct uhso_tty *VAR_29;
 int VAR_30, VAR_31, VAR_32;
 void *VAR_33;
 usb_error_t VAR_34;
 char *VAR_35;

 VAR_21->sc_dev = VAR_20;
 VAR_21->sc_udev = VAR_22->device;
 FUNC_18(&VAR_21->sc_mtx, "uhso", ((void*)0), VAR_5);
 FUNC_17(&VAR_21->sc_rxq, VAR_4);
 FUNC_20(&VAR_21->sc_super_ucom);

 VAR_21->sc_radio = 1;

 VAR_23 = FUNC_26(VAR_22->iface);
 VAR_21->sc_ctrl_iface_no = VAR_23->bInterfaceNumber;

 VAR_21->sc_iface_no = VAR_22->info.bIfaceNum;
 VAR_21->sc_iface_index = VAR_22->info.bIfaceIndex;


 VAR_34 = FUNC_27(VAR_22->device,
     &VAR_21->sc_iface_index, VAR_21->sc_ctrl_xfer,
     VAR_12, VAR_8, VAR_21, &VAR_21->sc_mtx);
 if (VAR_34) {
  FUNC_15(VAR_20, "Failed to setup control pipe: %s\n",
      FUNC_25(VAR_34));
  goto out;
 }

 if (FUNC_8(VAR_22) == VAR_10)
  VAR_33 = VAR_18;
 else if (FUNC_8(VAR_22) == VAR_7)
  VAR_33 = VAR_17;
 else
  goto out;

 VAR_31 = FUNC_22(VAR_21, VAR_22->info.bIfaceNum, VAR_33);
 if (VAR_31 != 0)
  goto out;

 VAR_24 = FUNC_13(VAR_21->sc_dev);
 VAR_25 = FUNC_14(VAR_21->sc_dev);

 FUNC_3(VAR_24, FUNC_4(VAR_25), VAR_6, "type",
     VAR_0, VAR_14[FUNC_5(VAR_21->sc_type)], 0,
     "Port available at this interface");
 FUNC_2(VAR_24, FUNC_4(VAR_25), VAR_6, "radio",
     VAR_2 | VAR_1, VAR_21, 0, VAR_19, "I", "Enable radio");






 FUNC_16(VAR_20, VAR_15[FUNC_6(VAR_21->sc_type)]);

 FUNC_15(VAR_20, "<%s port> at <%s %s> on %s\n",
     VAR_15[FUNC_6(VAR_21->sc_type)],
     FUNC_23(VAR_22->device),
     FUNC_24(VAR_22->device),
     FUNC_10(FUNC_11(VAR_20)));

 if (VAR_21->sc_ttys > 0) {
  FUNC_0(VAR_24, FUNC_4(VAR_25), VAR_6, "ports",
      VAR_0, &VAR_21->sc_ttys, 0, "Number of attached serial ports");

  VAR_26 = FUNC_1(VAR_24, FUNC_4(VAR_25), VAR_6,
      "port", VAR_0, ((void*)0), "Serial ports");
 }





 for (VAR_30 = 0; VAR_30 < VAR_21->sc_ttys; VAR_30++) {
  VAR_29 = &VAR_21->sc_tty[VAR_30];
  VAR_28 = &VAR_21->sc_ucom[VAR_30];

  if (FUNC_7(VAR_21->sc_type) & VAR_9)
   VAR_32 = VAR_13[VAR_29->ht_muxport];
  else
   VAR_32 = FUNC_6(VAR_21->sc_type);

  VAR_35 = VAR_16[VAR_32];

  VAR_27 = FUNC_1(VAR_24, FUNC_4(VAR_26), VAR_6,
      VAR_35, VAR_0, ((void*)0), "");

  VAR_29->ht_name[0] = 0;
  if (VAR_21->sc_ttys == 1)
   FUNC_19(VAR_29->ht_name, 32, "cuaU%d", VAR_28->sc_super->sc_unit);
  else {
   FUNC_19(VAR_29->ht_name, 32, "cuaU%d.%d",
       VAR_28->sc_super->sc_unit, VAR_28->sc_subunit);
  }

  VAR_35 = VAR_15[VAR_32];
  FUNC_3(VAR_24, FUNC_4(VAR_27), VAR_6,
      "tty", VAR_0, VAR_29->ht_name, 0, "");
  FUNC_3(VAR_24, FUNC_4(VAR_27), VAR_6,
      "desc", VAR_0, VAR_35, 0, "");

  if (VAR_11)
   FUNC_15(VAR_21->sc_dev,
       "\"%s\" port at %s\n", VAR_35, VAR_29->ht_name);
 }

 return (0);
out:
 FUNC_21(VAR_21->sc_dev);
 return (VAR_3);
}
