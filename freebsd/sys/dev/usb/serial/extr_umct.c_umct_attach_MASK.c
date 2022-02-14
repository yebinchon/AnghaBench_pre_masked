
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct TYPE_2__ {scalar_t__ idProduct; int bIfaceNum; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct umct_softc {int sc_swap_cb; int sc_obufsize; int sc_super_ucom; int sc_mtx; int sc_ucom; struct usb_xfer** sc_xfer; int sc_iface_no; int sc_unit; int sc_udev; } ;
typedef scalar_t__ int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct umct_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int,struct umct_softc*,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *,struct usb_xfer**,int ,int ,struct umct_softc*,int *) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_10)
{
 struct usb_attach_arg *VAR_11 = FUNC_0(VAR_10);
 struct umct_softc *VAR_12 = FUNC_1(VAR_10);
 int32_t VAR_13;
 uint16_t VAR_14;
 uint8_t VAR_15;

 VAR_12->sc_udev = VAR_11->device;
 VAR_12->sc_unit = FUNC_2(VAR_10);

 FUNC_4(VAR_10);
 FUNC_5(&VAR_12->sc_mtx, "umct", ((void*)0), VAR_1);
 FUNC_7(&VAR_12->sc_super_ucom);

 VAR_12->sc_iface_no = VAR_11->info.bIfaceNum;

 VAR_15 = VAR_4;
 VAR_13 = FUNC_10(VAR_11->device, &VAR_15,
     VAR_12->sc_xfer, VAR_9, VAR_6, VAR_12, &VAR_12->sc_mtx);

 if (VAR_13) {
  FUNC_3(VAR_10, "allocating USB "
      "transfers failed\n");
  goto detach;
 }






 VAR_14 = FUNC_11(VAR_12->sc_xfer[VAR_2]);
 if (VAR_14 == 0x2) {



  struct usb_xfer *VAR_16 = VAR_12->sc_xfer[VAR_5];

  VAR_12->sc_xfer[VAR_5] = VAR_12->sc_xfer[VAR_2];
  VAR_12->sc_xfer[VAR_2] = VAR_16;
  VAR_12->sc_swap_cb = 1;
 }

 VAR_12->sc_obufsize = FUNC_12(VAR_12->sc_xfer[VAR_3]);

 if (VAR_11->info.idProduct == VAR_7) {
  if (VAR_12->sc_obufsize > 16) {
   VAR_12->sc_obufsize = 16;
  }
 }
 VAR_13 = FUNC_6(&VAR_12->sc_super_ucom, &VAR_12->sc_ucom, 1, VAR_12,
     &VAR_8, &VAR_12->sc_mtx);
 if (VAR_13) {
  goto detach;
 }
 FUNC_8(&VAR_12->sc_super_ucom, VAR_10);

 return (0);

detach:
 FUNC_9(VAR_10);
 return (VAR_0);
}
