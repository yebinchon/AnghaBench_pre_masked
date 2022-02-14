
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct TYPE_3__ {int bIfaceIndex; scalar_t__ bIfaceNum; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct ubser_softc {scalar_t__ sc_numser; scalar_t__ sc_tx_size; int sc_mtx; int * sc_xfer; int sc_super_ucom; TYPE_2__* sc_ucom; int sc_iface_index; scalar_t__ sc_iface_no; int sc_udev; } ;
typedef int device_t ;
struct TYPE_4__ {size_t sc_portno; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct ubser_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,TYPE_2__*,size_t,struct ubser_softc*,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int *,struct usb_device_request*,scalar_t__*,int ,int *,int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int ,int *,int *,int ,int ,struct ubser_softc*,int *) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_11)
{
 struct usb_attach_arg *VAR_12 = FUNC_2(VAR_11);
 struct ubser_softc *VAR_13 = FUNC_3(VAR_11);
 struct usb_device_request VAR_14;
 uint8_t VAR_15;
 int VAR_16;

 FUNC_5(VAR_11);
 FUNC_6(&VAR_13->sc_mtx, "ubser", ((void*)0), VAR_1);
 FUNC_11(&VAR_13->sc_super_ucom);

 VAR_13->sc_iface_no = VAR_12->info.bIfaceNum;
 VAR_13->sc_iface_index = VAR_12->info.bIfaceIndex;
 VAR_13->sc_udev = VAR_12->device;


 VAR_14.bmRequestType = VAR_7;
 VAR_14.bRequest = VAR_8;
 FUNC_1(VAR_14.wValue, 0);
 VAR_14.wIndex[0] = VAR_13->sc_iface_no;
 VAR_14.wIndex[1] = 0;
 FUNC_1(VAR_14.wLength, 1);
 VAR_16 = FUNC_13(VAR_12->device, ((void*)0),
     &VAR_14, &VAR_13->sc_numser,
     0, ((void*)0), VAR_6);

 if (VAR_16 || (VAR_13->sc_numser == 0)) {
  FUNC_4(VAR_11, "failed to get number "
      "of serial ports: %s\n",
      FUNC_14(VAR_16));
  goto detach;
 }
 if (VAR_13->sc_numser > VAR_5)
  VAR_13->sc_numser = VAR_5;

 FUNC_4(VAR_11, "found %i serials\n", VAR_13->sc_numser);

 VAR_16 = FUNC_15(VAR_12->device, &VAR_13->sc_iface_index,
     VAR_13->sc_xfer, VAR_10, VAR_4, VAR_13, &VAR_13->sc_mtx);
 if (VAR_16) {
  goto detach;
 }
 VAR_13->sc_tx_size = FUNC_17(VAR_13->sc_xfer[VAR_3]);

 if (VAR_13->sc_tx_size == 0) {
  FUNC_0(0, "invalid tx_size\n");
  goto detach;
 }


 for (VAR_15 = 0; VAR_15 < VAR_13->sc_numser; VAR_15++) {
  VAR_13->sc_ucom[VAR_15].sc_portno = VAR_15;
 }

 VAR_16 = FUNC_10(&VAR_13->sc_super_ucom, VAR_13->sc_ucom,
     VAR_13->sc_numser, VAR_13, &VAR_9, &VAR_13->sc_mtx);
 if (VAR_16) {
  goto detach;
 }
 FUNC_12(&VAR_13->sc_super_ucom, VAR_11);

 FUNC_7(&VAR_13->sc_mtx);
 FUNC_18(VAR_13->sc_xfer[VAR_3]);
 FUNC_18(VAR_13->sc_xfer[VAR_2]);
 FUNC_16(VAR_13->sc_xfer[VAR_2]);
 FUNC_8(&VAR_13->sc_mtx);

 return (0);

detach:
 FUNC_9(VAR_11);
 return (VAR_0);
}
