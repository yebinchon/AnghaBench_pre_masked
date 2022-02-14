
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_attach_arg {int device; } ;
struct umoscom_softc {int sc_mcr; int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; int sc_udev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct umoscom_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int,struct umoscom_softc*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int *,int *,int ,int ,struct umoscom_softc*,int *) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_8)
{
 struct usb_attach_arg *VAR_9 = FUNC_0(VAR_8);
 struct umoscom_softc *VAR_10 = FUNC_1(VAR_8);
 int VAR_11;
 uint8_t VAR_12;

 VAR_10->sc_udev = VAR_9->device;
 VAR_10->sc_mcr = 0x08;


 FUNC_3(VAR_8, "MOSCHIP USB Serial Port Adapter");
 FUNC_2(VAR_8, "<MOSCHIP USB Serial Port Adapter>\n");

 FUNC_4(&VAR_10->sc_mtx, "umoscom", ((void*)0), VAR_1);
 FUNC_8(&VAR_10->sc_super_ucom);

 VAR_12 = VAR_4;
 VAR_11 = FUNC_12(VAR_9->device, &VAR_12,
     VAR_10->sc_xfer, VAR_7,
     VAR_5, VAR_10, &VAR_10->sc_mtx);

 if (VAR_11) {
  goto detach;
 }

 FUNC_5(&VAR_10->sc_mtx);
 FUNC_13(VAR_10->sc_xfer[VAR_3]);
 FUNC_13(VAR_10->sc_xfer[VAR_2]);
 FUNC_6(&VAR_10->sc_mtx);

 VAR_11 = FUNC_7(&VAR_10->sc_super_ucom, &VAR_10->sc_ucom, 1, VAR_10,
     &VAR_6, &VAR_10->sc_mtx);
 if (VAR_11) {
  goto detach;
 }
 FUNC_9(&VAR_10->sc_super_ucom, VAR_8);

 return (0);

detach:
 FUNC_2(VAR_8, "attach error: %s\n", FUNC_11(VAR_11));
 FUNC_10(VAR_8);
 return (VAR_0);
}
