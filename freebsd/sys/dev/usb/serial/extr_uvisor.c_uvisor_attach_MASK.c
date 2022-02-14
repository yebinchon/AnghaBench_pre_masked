
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uvisor_config_copy ;
struct uvisor_softc {int sc_super_ucom; int sc_mtx; int sc_ucom; int sc_xfer; int sc_iface_index; int sc_iface_no; int sc_flag; int sc_udev; } ;
struct usb_config {int dummy; } ;
struct TYPE_2__ {int bIfaceNum; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_attach_arg*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct uvisor_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_config*,int ,int) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *,int *,int,struct uvisor_softc*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *,int ,struct usb_config*,int,struct uvisor_softc*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct uvisor_softc*,int ,struct usb_config*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_6)
{
 struct usb_attach_arg *VAR_7 = FUNC_2(VAR_6);
 struct uvisor_softc *VAR_8 = FUNC_3(VAR_6);
 struct usb_config VAR_9[VAR_3];
 int VAR_10;

 FUNC_0("sc=%p\n", VAR_8);
 FUNC_5(VAR_9, VAR_5,
     sizeof(VAR_9));

 FUNC_4(VAR_6);

 FUNC_6(&VAR_8->sc_mtx, "uvisor", ((void*)0), VAR_1);
 FUNC_8(&VAR_8->sc_super_ucom);

 VAR_8->sc_udev = VAR_7->device;



 VAR_8->sc_flag = FUNC_1(VAR_7);
 VAR_8->sc_iface_no = VAR_7->info.bIfaceNum;
 VAR_8->sc_iface_index = VAR_2;

 VAR_10 = FUNC_13(VAR_8, VAR_7->device, VAR_9);

 if (VAR_10) {
  FUNC_0("init failed, error=%s\n",
      FUNC_10(VAR_10));
  goto detach;
 }
 VAR_10 = FUNC_11(VAR_7->device, &VAR_8->sc_iface_index,
     VAR_8->sc_xfer, VAR_9, VAR_3,
     VAR_8, &VAR_8->sc_mtx);
 if (VAR_10) {
  FUNC_0("could not allocate all pipes\n");
  goto detach;
 }

 VAR_10 = FUNC_7(&VAR_8->sc_super_ucom, &VAR_8->sc_ucom, 1, VAR_8,
     &VAR_4, &VAR_8->sc_mtx);
 if (VAR_10) {
  FUNC_0("ucom_attach failed\n");
  goto detach;
 }
 FUNC_9(&VAR_8->sc_super_ucom, VAR_6);

 return (0);

detach:
 FUNC_12(VAR_6);
 return (VAR_0);
}
