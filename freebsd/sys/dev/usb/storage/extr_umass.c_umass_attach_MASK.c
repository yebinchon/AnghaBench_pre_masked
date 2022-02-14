
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct usb_interface_descriptor {int bInterfaceNumber; } ;
struct TYPE_4__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; int iface; } ;
struct TYPE_6__ {int opcode; } ;
struct TYPE_5__ {int opcode; } ;
struct umass_softc {int sc_proto; int sc_quirks; TYPE_3__ cam_scsi_test_unit_ready; TYPE_2__ cam_scsi_sense; scalar_t__ sc_maxlun; int * sc_transform; int ** sc_xfer; int sc_last_xfer_index; int sc_mtx; int sc_iface_no; int sc_name; int sc_unit; int sc_udev; int sc_dev; } ;
struct umass_probe_proto {int proto; int quirks; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct umass_softc*,int ,char*) ;
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
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 struct umass_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int *,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int,char*,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_10 (struct umass_softc*) ;
 int FUNC_11 (struct umass_softc*) ;
 int FUNC_12 (struct umass_softc*) ;
 int VAR_20 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct umass_softc*) ;
 int VAR_21 ;
 struct umass_probe_proto FUNC_15 (int ,struct usb_attach_arg*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_16 (int) ;
 struct usb_interface_descriptor* FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int ,int *,int **,int ,int ,struct umass_softc*,int *) ;
 int FUNC_20 (int *,int) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_26)
{
 struct umass_softc *VAR_27 = FUNC_3(VAR_26);
 struct usb_attach_arg *VAR_28 = FUNC_1(VAR_26);
 struct umass_probe_proto VAR_29 = FUNC_15(VAR_26, VAR_28);
 struct usb_interface_descriptor *VAR_30;
 int VAR_31;







 VAR_27->sc_dev = VAR_26;
 VAR_27->sc_udev = VAR_28->device;
 VAR_27->sc_proto = VAR_29.proto;
 VAR_27->sc_quirks = VAR_29.quirks;
 VAR_27->sc_unit = FUNC_4(VAR_26);

 FUNC_9(VAR_27->sc_name, sizeof(VAR_27->sc_name),
     "%s", FUNC_2(VAR_26));

 FUNC_6(VAR_26);

        FUNC_7(&VAR_27->sc_mtx, FUNC_2(VAR_26),
     ((void*)0), VAR_2 | VAR_3);



 VAR_30 = FUNC_17(VAR_28->iface);
 if (VAR_30 == ((void*)0)) {
  FUNC_5(VAR_26, "failed to get "
      "interface number\n");
  goto detach;
 }
 VAR_27->sc_iface_no = VAR_30->bInterfaceNumber;
 if (VAR_27->sc_quirks & VAR_0) {
  VAR_31 = FUNC_18
      (VAR_28->device, VAR_28->info.bIfaceIndex, 1);

  if (VAR_31) {
   FUNC_0(VAR_27, VAR_9, "could not switch to "
       "Alt Interface 1\n");
   goto detach;
  }
 }


 if (VAR_27->sc_proto & 133) {

  VAR_31 = FUNC_19(VAR_28->device,
      &VAR_28->info.bIfaceIndex, VAR_27->sc_xfer, VAR_19,
      VAR_13, VAR_27, &VAR_27->sc_mtx);


  VAR_27->sc_last_xfer_index = VAR_12;

 } else if (VAR_27->sc_proto & (132 | 131)) {

  VAR_31 = FUNC_19(VAR_28->device,
      &VAR_28->info.bIfaceIndex, VAR_27->sc_xfer, VAR_20,
      VAR_15, VAR_27, &VAR_27->sc_mtx);


  VAR_27->sc_last_xfer_index = VAR_14;

 } else {
  VAR_31 = VAR_17;
 }

 if (VAR_31) {
  FUNC_5(VAR_26, "could not setup required "
      "transfers, %s\n", FUNC_16(VAR_31));
  goto detach;
 }
 VAR_27->sc_transform =
     (VAR_27->sc_proto & 129) ? &VAR_23 :
     (VAR_27->sc_proto & 128) ? &VAR_25 :
     (VAR_27->sc_proto & 134) ? &VAR_18 :
     (VAR_27->sc_proto & 130) ? &VAR_22 :
     &VAR_21;



 if (VAR_27->sc_quirks & VAR_6) {
  FUNC_14(VAR_27);
 }


 if (((VAR_27->sc_proto & VAR_11) == 133) &&
     !(VAR_27->sc_quirks & VAR_4))
  VAR_27->sc_maxlun = FUNC_10(VAR_27);
 else
  VAR_27->sc_maxlun = 0;


 VAR_27->cam_scsi_sense.opcode = VAR_5;
 VAR_27->cam_scsi_test_unit_ready.opcode = VAR_7;


 VAR_31 = FUNC_12(VAR_27);
 if (VAR_31) {
  goto detach;
 }

 FUNC_11(VAR_27);

 FUNC_0(VAR_27, VAR_8, "Attach finished\n");

 return (0);

detach:
 FUNC_13(VAR_26);
 return (VAR_1);
}
