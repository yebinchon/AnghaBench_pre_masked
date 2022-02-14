
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int * ue_methods; int * ue_mtx; int ue_udev; int ue_dev; struct muge_softc* ue_sc; } ;
struct usb_attach_arg {int device; } ;
struct muge_softc {int sc_flags; int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_attach_arg*) ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct muge_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (struct usb_ether*) ;
 int FUNC_10 (struct usb_ether*) ;
 int FUNC_11 (int ,int *,int ,int ,int ,struct muge_softc*,int *) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_7)
{
 struct usb_attach_arg *VAR_8 = FUNC_1(VAR_7);
 struct muge_softc *VAR_9 = FUNC_3(VAR_7);
 struct usb_ether *VAR_10 = &VAR_9->sc_ue;
 uint8_t VAR_11;
 int VAR_12;

 VAR_9->sc_flags = FUNC_0(VAR_8);

 FUNC_5(VAR_7);

 FUNC_7(&VAR_9->sc_mtx, FUNC_2(VAR_7), ((void*)0), VAR_1);


 VAR_11 = VAR_3;
 VAR_12 = FUNC_11(VAR_8->device, &VAR_11, VAR_9->sc_xfer,
     VAR_5, VAR_4, VAR_9, &VAR_9->sc_mtx);
 if (VAR_12) {
  FUNC_4(VAR_7, "error: allocating USB transfers failed\n");
  goto err;
 }

 VAR_10->ue_sc = VAR_9;
 VAR_10->ue_dev = VAR_7;
 VAR_10->ue_udev = VAR_8->device;
 VAR_10->ue_mtx = &VAR_9->sc_mtx;
 VAR_10->ue_methods = &VAR_6;

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_7, "error: could not attach interface\n");
  goto err_usbd;
 }


 FUNC_9(VAR_10);
 if (!(VAR_9->sc_flags & VAR_2))
  goto err_attached;

 return (0);

err_attached:
 FUNC_10(VAR_10);
err_usbd:
 FUNC_12(VAR_9->sc_xfer, VAR_4);
err:
 FUNC_6(&VAR_9->sc_mtx);
 return (VAR_0);
}
