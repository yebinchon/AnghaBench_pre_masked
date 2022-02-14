
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct uftdi_softc {int sc_last_lcr; int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; int sc_bitmode; int sc_unit; int sc_dev; int sc_udev; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct uftdi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int,struct uftdi_softc*,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct uftdi_softc*,struct usb_attach_arg*) ;
 int FUNC_16 (int ,int *,int *,int ,int ,struct uftdi_softc*,int *) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_10)
{
 struct usb_attach_arg *VAR_11 = FUNC_2(VAR_10);
 struct uftdi_softc *VAR_12 = FUNC_3(VAR_10);
 int VAR_13;

 FUNC_0("\n");

 VAR_12->sc_udev = VAR_11->device;
 VAR_12->sc_dev = VAR_10;
 VAR_12->sc_unit = FUNC_4(VAR_10);
 VAR_12->sc_bitmode = VAR_4;

 FUNC_6(VAR_10);
 FUNC_7(&VAR_12->sc_mtx, "uftdi", ((void*)0), VAR_3);
 FUNC_11(&VAR_12->sc_super_ucom);


 FUNC_15(VAR_12, VAR_11);

 VAR_13 = FUNC_16(VAR_11->device,
     &VAR_11->info.bIfaceIndex, VAR_12->sc_xfer, VAR_9,
     VAR_7, VAR_12, &VAR_12->sc_mtx);

 if (VAR_13) {
  FUNC_5(VAR_10, "allocating USB "
      "transfers failed\n");
  goto detach;
 }

 FUNC_8(&VAR_12->sc_mtx);
 FUNC_17(VAR_12->sc_xfer[VAR_6]);
 FUNC_17(VAR_12->sc_xfer[VAR_5]);
 FUNC_9(&VAR_12->sc_mtx);



 VAR_12->sc_last_lcr =
     (VAR_2 |
     VAR_1 |
     FUNC_1(8));


 FUNC_13(&VAR_12->sc_ucom);

 VAR_13 = FUNC_10(&VAR_12->sc_super_ucom, &VAR_12->sc_ucom, 1, VAR_12,
     &VAR_8, &VAR_12->sc_mtx);
 if (VAR_13) {
  goto detach;
 }
 FUNC_12(&VAR_12->sc_super_ucom, VAR_10);

 return (0);

detach:
 FUNC_14(VAR_10);
 return (VAR_0);
}
