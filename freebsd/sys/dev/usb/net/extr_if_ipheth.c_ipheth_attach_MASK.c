
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {int * ue_methods; int * ue_mtx; int ue_udev; int ue_dev; struct ipheth_softc* ue_sc; } ;
struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct ipheth_softc {int sc_mtx; int sc_xfer; int sc_iface_no; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ipheth_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ipheth_softc*) ;
 int VAR_5 ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int *,int ,int ,int ,struct ipheth_softc*,int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct ipheth_softc *VAR_7 = FUNC_2(VAR_6);
 struct usb_ether *VAR_8 = &VAR_7->sc_ue;
 struct usb_attach_arg *VAR_9 = FUNC_0(VAR_6);
 int VAR_10;

 VAR_7->sc_iface_no = VAR_9->info.bIfaceIndex;

 FUNC_4(VAR_6);

 FUNC_7(&VAR_7->sc_mtx, FUNC_1(VAR_6), ((void*)0), VAR_3);

 VAR_10 = FUNC_9(VAR_9->device,
     VAR_9->info.bIfaceIndex, VAR_1);
 if (VAR_10) {
  FUNC_3(VAR_6, "Cannot set alternate setting\n");
  goto detach;
 }
 VAR_10 = FUNC_10(VAR_9->device, &VAR_7->sc_iface_no,
     VAR_7->sc_xfer, VAR_4, VAR_2, VAR_7, &VAR_7->sc_mtx);
 if (VAR_10) {
  FUNC_3(VAR_6, "Cannot setup USB transfers\n");
  goto detach;
 }
 VAR_8->ue_sc = VAR_7;
 VAR_8->ue_dev = VAR_6;
 VAR_8->ue_udev = VAR_9->device;
 VAR_8->ue_mtx = &VAR_7->sc_mtx;
 VAR_8->ue_methods = &VAR_5;

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10) {
  FUNC_3(VAR_6, "Cannot get MAC address\n");
  goto detach;
 }

 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_6, "could not attach interface\n");
  goto detach;
 }
 return (0);

detach:
 FUNC_5(VAR_6);
 return (VAR_0);
}
