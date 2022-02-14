
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {int idProduct; int idVendor; int bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_3__ info; } ;
struct ums_softc {int sc_mtx; int sc_evdev; struct ums_info* sc_info; int sc_fifo; scalar_t__ sc_iid; int * sc_xfer; int sc_callout; } ;
struct TYPE_9__ {int size; int pos; } ;
struct TYPE_8__ {int size; int pos; } ;
struct TYPE_13__ {int pos; int size; } ;
struct TYPE_12__ {int pos; int size; } ;
struct TYPE_11__ {int pos; int size; } ;
struct ums_info {int sc_flags; int sc_buttons; int * sc_iid_btn; TYPE_7__* sc_loc_btn; int sc_iid_w; TYPE_2__ sc_loc_w; int sc_iid_t; TYPE_1__ sc_loc_t; int sc_iid_z; TYPE_6__ sc_loc_z; int sc_iid_y; TYPE_5__ sc_loc_y; int sc_iid_x; TYPE_4__ sc_loc_x; } ;
typedef int device_t ;
struct TYPE_14__ {int pos; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,struct ums_softc*) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int ,int ,char*,int,struct ums_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int ) ;
 struct usb_attach_arg* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct ums_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int ,int ,int ,int ) ;
 int FUNC_16 (int ,struct ums_softc*,int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (void*,int ) ;
 int VAR_30 ;
 int FUNC_25 (void*,int ,int ,scalar_t__*) ;
 int FUNC_26 (int *,char*,int *,int) ;
 int VAR_31 ;
 int FUNC_27 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_28 (struct ums_softc*,int ,void*,int ,size_t) ;
 int VAR_34 ;
 int FUNC_29 (int *,int *,int ) ;
 int FUNC_30 (int ,struct ums_softc*,int *,int *,int *,int ,int,int ,int ,int ,int) ;
 int FUNC_31 (int ) ;
 scalar_t__ FUNC_32 (struct usb_attach_arg*,int ) ;
 int FUNC_33 (int) ;
 int FUNC_34 (int ,int *,void**,int *,int ,int ) ;
 int FUNC_35 (int ,int *,int ,int) ;
 int FUNC_36 (int ,int *,int *,int ,int ,struct ums_softc*,int *) ;
 scalar_t__ FUNC_37 (int ) ;

__attribute__((used)) static int
FUNC_38(device_t VAR_35)
{
 struct usb_attach_arg *VAR_36 = FUNC_5(VAR_35);
 struct ums_softc *VAR_37 = FUNC_7(VAR_35);
 struct ums_info *VAR_38;
 void *VAR_39 = ((void*)0);
 int VAR_40;
 int VAR_41;
 uint16_t VAR_42;
 uint8_t VAR_43;




 FUNC_1(11, "sc=%p\n", VAR_37);

 FUNC_12(VAR_35);

 FUNC_26(&VAR_37->sc_mtx, "ums lock", ((void*)0), VAR_10 | VAR_11);

 FUNC_29(&VAR_37->sc_callout, &VAR_37->sc_mtx, 0);







 VAR_41 = FUNC_35(VAR_36->device, ((void*)0),
     VAR_36->info.bIfaceIndex, 1);

 VAR_41 = FUNC_36(VAR_36->device,
     &VAR_36->info.bIfaceIndex, VAR_37->sc_xfer, VAR_31,
     VAR_27, VAR_37, &VAR_37->sc_mtx);

 if (VAR_41) {
  FUNC_0("error=%s\n", FUNC_33(VAR_41));
  goto detach;
 }


 VAR_41 = FUNC_34(VAR_36->device, ((void*)0), &VAR_39,
     &VAR_42, VAR_12, VAR_36->info.bIfaceIndex);

 if (VAR_41) {
  FUNC_11(VAR_35, "error reading report description\n");
  goto detach;
 }

 VAR_40 = FUNC_25(VAR_39, VAR_42, VAR_30, &VAR_37->sc_iid);







 if (FUNC_32(VAR_36, VAR_28)) {

  VAR_37->sc_iid = 0;

  VAR_38 = &VAR_37->sc_info[0];
  VAR_38->sc_flags = (VAR_22 |
      VAR_23 |
      VAR_24 |
      VAR_20);
  VAR_38->sc_buttons = 3;
  VAR_40 = 5;

  VAR_38->sc_loc_x.pos = 16;
  VAR_38->sc_loc_x.size = 8;
  VAR_38->sc_loc_y.pos = 24;
  VAR_38->sc_loc_y.size = 8;
  VAR_38->sc_loc_z.pos = 32;
  VAR_38->sc_loc_z.size = 8;
  VAR_38->sc_loc_btn[0].pos = 8;
  VAR_38->sc_loc_btn[0].size = 1;
  VAR_38->sc_loc_btn[1].pos = 9;
  VAR_38->sc_loc_btn[1].size = 1;
  VAR_38->sc_loc_btn[2].pos = 10;
  VAR_38->sc_loc_btn[2].size = 1;


  FUNC_11(VAR_35, "3 buttons and [XYZ] "
      "coordinates ID=0\n");

 } else {

  for (VAR_43 = 0; VAR_43 < VAR_25; VAR_43++) {
   FUNC_28(VAR_37, VAR_35, VAR_39, VAR_42, VAR_43);
  }
 }

 if (FUNC_32(VAR_36, VAR_29)) {
  VAR_38 = &VAR_37->sc_info[0];

  VAR_38->sc_flags |= VAR_19;
 }
 if (VAR_40 > (int)FUNC_37(VAR_37->sc_xfer[VAR_26])) {
  FUNC_0("WARNING: report size, %d bytes, is larger "
      "than interrupt size, %d bytes!\n", VAR_40,
      FUNC_37(VAR_37->sc_xfer[VAR_26]));
 }
 FUNC_24(VAR_39, VAR_12);
 VAR_39 = ((void*)0);
 VAR_41 = FUNC_30(VAR_36->device, VAR_37, &VAR_37->sc_mtx,
     &VAR_33, &VAR_37->sc_fifo,
     FUNC_10(VAR_35), -1, VAR_36->info.bIfaceIndex,
       VAR_18, VAR_8, 0644);
 if (VAR_41)
  goto detach;
 FUNC_2(FUNC_8(VAR_35),
     FUNC_3(FUNC_9(VAR_35)),
     VAR_13, "parseinfo", VAR_3|VAR_2,
     VAR_37, 0, VAR_34,
     "", "Dump of parsed HID report descriptor");

 return (0);

detach:
 if (VAR_39) {
  FUNC_24(VAR_39, VAR_12);
 }
 FUNC_27(VAR_35);
 return (VAR_4);
}
