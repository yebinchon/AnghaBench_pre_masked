
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uslcom_softc {int sc_super_ucom; int sc_mtx; int sc_ucom; int sc_partnum; int * sc_xfer; int sc_iface_no; int sc_udev; int sc_watchdog; } ;
struct TYPE_2__ {int bIfaceIndex; int bIfaceNum; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct uslcom_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int,struct uslcom_softc*,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int *,int *,int ,int ,struct uslcom_softc*,int *) ;
 int FUNC_14 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct uslcom_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_7)
{
 struct usb_attach_arg *VAR_8 = FUNC_2(VAR_7);
 struct uslcom_softc *VAR_9 = FUNC_3(VAR_7);
 int VAR_10;

 FUNC_1(11, "\n");

 FUNC_4(VAR_7);
 FUNC_5(&VAR_9->sc_mtx, "uslcom", ((void*)0), VAR_1);
 FUNC_9(&VAR_9->sc_super_ucom);
 FUNC_11(&VAR_9->sc_watchdog, &VAR_9->sc_mtx, 0);

 VAR_9->sc_udev = VAR_8->device;

 VAR_9->sc_iface_no = VAR_8->info.bIfaceNum;

 VAR_10 = FUNC_13(VAR_8->device,
     &VAR_8->info.bIfaceIndex, VAR_9->sc_xfer, VAR_6,
     VAR_4, VAR_9, &VAR_9->sc_mtx);
 if (VAR_10) {
  FUNC_0("one or more missing USB endpoints, "
      "error=%s\n", FUNC_12(VAR_10));
  goto detach;
 }

 FUNC_6(&VAR_9->sc_mtx);
 FUNC_14(VAR_9->sc_xfer[VAR_3]);
 FUNC_14(VAR_9->sc_xfer[VAR_2]);
 FUNC_7(&VAR_9->sc_mtx);

 VAR_9->sc_partnum = FUNC_16(VAR_9);

 VAR_10 = FUNC_8(&VAR_9->sc_super_ucom, &VAR_9->sc_ucom, 1, VAR_9,
     &VAR_5, &VAR_9->sc_mtx);
 if (VAR_10) {
  goto detach;
 }
 FUNC_10(&VAR_9->sc_super_ucom, VAR_7);

 return (0);

detach:
 FUNC_15(VAR_7);
 return (VAR_0);
}
