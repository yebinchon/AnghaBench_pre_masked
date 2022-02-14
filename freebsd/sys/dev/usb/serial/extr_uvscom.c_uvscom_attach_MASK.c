
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvscom_softc {int sc_mtx; int * sc_xfer; int sc_super_ucom; int sc_ucom; int sc_line; int sc_iface_index; int sc_iface_no; int sc_udev; } ;
struct TYPE_2__ {int bIfaceNum; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 struct uvscom_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int,struct uvscom_softc*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int *,int *,int ,int ,struct uvscom_softc*,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_10)
{
 struct usb_attach_arg *VAR_11 = FUNC_1(VAR_10);
 struct uvscom_softc *VAR_12 = FUNC_2(VAR_10);
 int VAR_13;

 FUNC_3(VAR_10);
 FUNC_4(&VAR_12->sc_mtx, "uvscom", ((void*)0), VAR_1);
 FUNC_8(&VAR_12->sc_super_ucom);

 VAR_12->sc_udev = VAR_11->device;

 FUNC_0("sc=%p\n", VAR_12);

 VAR_12->sc_iface_no = VAR_11->info.bIfaceNum;
 VAR_12->sc_iface_index = VAR_4;

 VAR_13 = FUNC_10(VAR_11->device, &VAR_12->sc_iface_index,
     VAR_12->sc_xfer, VAR_9, VAR_7, VAR_12, &VAR_12->sc_mtx);

 if (VAR_13) {
  FUNC_0("could not allocate all USB transfers!\n");
  goto detach;
 }
 VAR_12->sc_line = VAR_6;


 FUNC_5(&VAR_12->sc_mtx);
 FUNC_12(VAR_12->sc_xfer[VAR_3]);
 FUNC_12(VAR_12->sc_xfer[VAR_2]);
 FUNC_6(&VAR_12->sc_mtx);

 VAR_13 = FUNC_7(&VAR_12->sc_super_ucom, &VAR_12->sc_ucom, 1, VAR_12,
     &VAR_8, &VAR_12->sc_mtx);
 if (VAR_13) {
  goto detach;
 }
 FUNC_9(&VAR_12->sc_super_ucom, VAR_10);


 FUNC_5(&VAR_12->sc_mtx);
 FUNC_11(VAR_12->sc_xfer[VAR_5]);
 FUNC_6(&VAR_12->sc_mtx);

 return (0);

detach:
 FUNC_13(VAR_10);
 return (VAR_0);
}
