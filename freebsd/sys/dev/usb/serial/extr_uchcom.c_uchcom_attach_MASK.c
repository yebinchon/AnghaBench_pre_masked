
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int idProduct; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct uchcom_softc {int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; int sc_udev; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 struct usb_attach_arg* FUNC_2 (int ) ;
 struct uchcom_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,int,struct uchcom_softc*,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int *,int *,int ,int ,struct uchcom_softc*,int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_8)
{
 struct uchcom_softc *VAR_9 = FUNC_3(VAR_8);
 struct usb_attach_arg *VAR_10 = FUNC_2(VAR_8);
 int VAR_11;
 uint8_t VAR_12;

 FUNC_1(11, "\n");

 FUNC_5(VAR_8);
 FUNC_6(&VAR_9->sc_mtx, "uchcom", ((void*)0), VAR_1);
 FUNC_11(&VAR_9->sc_super_ucom);

 VAR_9->sc_udev = VAR_10->device;

 switch (VAR_10->info.idProduct) {
 case 129:
  FUNC_4(VAR_8, "CH340 detected\n");
  break;
 case 128:
  FUNC_4(VAR_8, "CH341 detected\n");
  break;
 default:
  FUNC_4(VAR_8, "New CH340/CH341 product 0x%04x detected\n",
      VAR_10->info.idProduct);
  break;
 }

 VAR_12 = VAR_4;
 VAR_11 = FUNC_14(VAR_10->device,
     &VAR_12, VAR_9->sc_xfer, VAR_7,
     VAR_5, VAR_9, &VAR_9->sc_mtx);

 if (VAR_11) {
  FUNC_0("one or more missing USB endpoints, "
      "error=%s\n", FUNC_13(VAR_11));
  goto detach;
 }


 FUNC_7(&VAR_9->sc_mtx);
 FUNC_15(VAR_9->sc_xfer[VAR_3]);
 FUNC_15(VAR_9->sc_xfer[VAR_2]);
 FUNC_8(&VAR_9->sc_mtx);

 VAR_11 = FUNC_10(&VAR_9->sc_super_ucom, &VAR_9->sc_ucom, 1, VAR_9,
     &VAR_6, &VAR_9->sc_mtx);
 if (VAR_11) {
  goto detach;
 }
 FUNC_12(&VAR_9->sc_super_ucom, VAR_8);

 return (0);

detach:
 FUNC_9(VAR_8);
 return (VAR_0);
}
