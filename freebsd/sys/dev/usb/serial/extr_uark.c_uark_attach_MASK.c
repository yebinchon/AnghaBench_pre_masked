
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_attach_arg {int device; } ;
struct uark_softc {int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; int sc_udev; } ;
typedef scalar_t__ int32_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 struct uark_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int *,int *,int,struct uark_softc*,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int ,int *,int *,int ,int ,struct uark_softc*,int *) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_8)
{
 struct usb_attach_arg *VAR_9 = FUNC_1(VAR_8);
 struct uark_softc *VAR_10 = FUNC_2(VAR_8);
 int32_t VAR_11;
 uint8_t VAR_12;

 FUNC_4(VAR_8);
 FUNC_5(&VAR_10->sc_mtx, "uark", ((void*)0), VAR_1);
 FUNC_10(&VAR_10->sc_super_ucom);

 VAR_10->sc_udev = VAR_9->device;

 VAR_12 = VAR_4;
 VAR_11 = FUNC_12
     (VAR_9->device, &VAR_12, VAR_10->sc_xfer,
     VAR_7, VAR_5, VAR_10, &VAR_10->sc_mtx);

 if (VAR_11) {
  FUNC_3(VAR_8, "allocating control USB "
      "transfers failed\n");
  goto detach;
 }

 FUNC_6(&VAR_10->sc_mtx);
 FUNC_13(VAR_10->sc_xfer[VAR_3]);
 FUNC_13(VAR_10->sc_xfer[VAR_2]);
 FUNC_7(&VAR_10->sc_mtx);

 VAR_11 = FUNC_9(&VAR_10->sc_super_ucom, &VAR_10->sc_ucom, 1, VAR_10,
     &VAR_6, &VAR_10->sc_mtx);
 if (VAR_11) {
  FUNC_0("ucom_attach failed\n");
  goto detach;
 }
 FUNC_11(&VAR_10->sc_super_ucom, VAR_8);

 return (0);

detach:
 FUNC_8(VAR_8);
 return (VAR_0);
}
