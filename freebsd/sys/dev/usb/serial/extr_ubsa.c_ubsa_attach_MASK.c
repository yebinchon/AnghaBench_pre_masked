
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceNum; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct ubsa_softc {int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; int sc_iface_index; int sc_iface_no; int sc_udev; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 struct ubsa_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int,struct ubsa_softc*,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int *,int *,int ,int ,struct ubsa_softc*,int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_8)
{
 struct usb_attach_arg *VAR_9 = FUNC_1(VAR_8);
 struct ubsa_softc *VAR_10 = FUNC_2(VAR_8);
 int VAR_11;

 FUNC_0("sc=%p\n", VAR_10);

 FUNC_3(VAR_8);
 FUNC_4(&VAR_10->sc_mtx, "ubsa", ((void*)0), VAR_1);
 FUNC_9(&VAR_10->sc_super_ucom);

 VAR_10->sc_udev = VAR_9->device;
 VAR_10->sc_iface_no = VAR_9->info.bIfaceNum;
 VAR_10->sc_iface_index = VAR_4;

 VAR_11 = FUNC_11(VAR_9->device, &VAR_10->sc_iface_index,
     VAR_10->sc_xfer, VAR_7, VAR_5, VAR_10, &VAR_10->sc_mtx);

 if (VAR_11) {
  FUNC_0("could not allocate all pipes\n");
  goto detach;
 }

 FUNC_5(&VAR_10->sc_mtx);
 FUNC_12(VAR_10->sc_xfer[VAR_3]);
 FUNC_12(VAR_10->sc_xfer[VAR_2]);
 FUNC_6(&VAR_10->sc_mtx);

 VAR_11 = FUNC_8(&VAR_10->sc_super_ucom, &VAR_10->sc_ucom, 1, VAR_10,
     &VAR_6, &VAR_10->sc_mtx);
 if (VAR_11) {
  FUNC_0("ucom_attach failed\n");
  goto detach;
 }
 FUNC_10(&VAR_10->sc_super_ucom, VAR_8);

 return (0);

detach:
 FUNC_7(VAR_8);
 return (VAR_0);
}
