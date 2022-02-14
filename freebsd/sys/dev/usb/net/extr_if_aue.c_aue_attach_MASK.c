
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_ether {int * ue_methods; int * ue_mtx; int ue_udev; int ue_dev; struct aue_softc* ue_sc; } ;
struct TYPE_2__ {int bcdDevice; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct aue_softc {int sc_mtx; int sc_xfer; int sc_flags; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_attach_arg*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct aue_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (int ,int *,int ,int ,int ,struct aue_softc*,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 struct usb_attach_arg *VAR_8 = FUNC_2(VAR_7);
 struct aue_softc *VAR_9 = FUNC_4(VAR_7);
 struct usb_ether *VAR_10 = &VAR_9->sc_ue;
 uint8_t VAR_11;
 int VAR_12;

 VAR_9->sc_flags = FUNC_0(VAR_8);

 if (VAR_8->info.bcdDevice >= 0x0201) {

  VAR_9->sc_flags |= VAR_0;
 }

 FUNC_6(VAR_7);
 FUNC_7(&VAR_9->sc_mtx, FUNC_3(VAR_7), ((void*)0), VAR_4);

 VAR_11 = VAR_1;
 VAR_12 = FUNC_9(VAR_8->device, &VAR_11,
     VAR_9->sc_xfer, VAR_5, VAR_2,
     VAR_9, &VAR_9->sc_mtx);
 if (VAR_12) {
  FUNC_5(VAR_7, "allocating USB transfers failed\n");
  goto detach;
 }

 VAR_10->ue_sc = VAR_9;
 VAR_10->ue_dev = VAR_7;
 VAR_10->ue_udev = VAR_8->device;
 VAR_10->ue_mtx = &VAR_9->sc_mtx;
 VAR_10->ue_methods = &VAR_6;

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12) {
  FUNC_5(VAR_7, "could not attach interface\n");
  goto detach;
 }
 return (0);

detach:
 FUNC_1(VAR_7);
 return (VAR_3);
}
