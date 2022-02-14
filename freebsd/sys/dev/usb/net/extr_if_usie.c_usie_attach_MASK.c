
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usie_softc {size_t sc_nucom; int sc_if_ifnum; int* sc_uc_ifnum; struct ifnet* sc_ifp; int sc_mtx; struct usie_softc* sc_ucom; int sc_super_ucom; int *** sc_uc_xfer; int ** sc_if_xfer; int sc_if_sync_ch; int sc_if_sync_task; int sc_if_status_task; int sc_dev; int sc_udev; } ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; int bInterfaceNumber; int bNumEndpoints; } ;
struct usb_interface {int dummy; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct TYPE_4__ {int bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {TYPE_2__ if_snd; int if_output; int if_start; int if_ioctl; int if_init; int if_flags; int if_mtu; struct usie_softc* if_softc; } ;
typedef int fwattr ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ,struct usie_softc*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct ifnet*,int ,int ) ;
 struct usb_attach_arg* FUNC_6 (int ) ;
 struct usie_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ) ;
 struct ifnet* FUNC_11 (int ) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct ifnet*,char*,int ) ;
 int VAR_20 ;
 int FUNC_14 (int *,char*,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,struct usie_softc*,size_t,struct usie_softc*,int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *,int ) ;
 int FUNC_20 (int) ;
 struct usb_interface* FUNC_21 (int ,scalar_t__) ;
 struct usb_interface_descriptor* FUNC_22 (struct usb_interface*) ;
 int FUNC_23 (int ,scalar_t__,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,scalar_t__*,int **,scalar_t__,scalar_t__,struct usie_softc*,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (struct usie_softc*,struct usb_device_request*,int*) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;

__attribute__((used)) static int
FUNC_29(device_t VAR_30)
{
 struct usie_softc *VAR_31 = FUNC_7(VAR_30);
 struct usb_attach_arg *VAR_32 = FUNC_6(VAR_30);
 struct ifnet *VAR_33;
 struct usb_interface *VAR_34;
 struct usb_interface_descriptor *VAR_35;
 struct usb_device_request VAR_36;
 int VAR_37;
 uint16_t VAR_38;
 uint8_t VAR_39;
 uint8_t VAR_40;
 uint8_t VAR_41;

 FUNC_10(VAR_30);
 VAR_31->sc_udev = VAR_32->device;
 VAR_31->sc_dev = VAR_30;

 FUNC_14(&VAR_31->sc_mtx, "usie", VAR_5, VAR_4);
 FUNC_18(&VAR_31->sc_super_ucom);

 FUNC_3(&VAR_31->sc_if_status_task, 0, VAR_26, VAR_31);
 FUNC_3(&VAR_31->sc_if_sync_task, 0, VAR_27, VAR_31);

 FUNC_19(&VAR_31->sc_if_sync_ch, &VAR_31->sc_mtx, 0);

 FUNC_15(&VAR_31->sc_mtx);


 VAR_36.bmRequestType = VAR_19;
 VAR_36.bRequest = VAR_15;
 FUNC_4(VAR_36.wValue, 0);
 FUNC_4(VAR_36.wIndex, 0);
 FUNC_4(VAR_36.wLength, 0);
 if (FUNC_28(VAR_31, &VAR_36, ((void*)0))) {
  FUNC_16(&VAR_31->sc_mtx);
  goto detach;
 }

 VAR_38 = 0;
 VAR_36.bmRequestType = VAR_18;
 VAR_36.bRequest = VAR_9;
 FUNC_4(VAR_36.wValue, 0);
 FUNC_4(VAR_36.wIndex, 0);
 FUNC_4(VAR_36.wLength, sizeof(VAR_38));
 if (FUNC_28(VAR_31, &VAR_36, &VAR_38)) {
  FUNC_16(&VAR_31->sc_mtx);
  goto detach;
 }
 FUNC_16(&VAR_31->sc_mtx);


 FUNC_0("fwattr=%x\n", VAR_38);
 if (!(VAR_38 & VAR_10)) {
  FUNC_9(VAR_30, "DHCP is not supported. A firmware upgrade might be needed.\n");
 }


 VAR_31->sc_nucom = 0;
 for (VAR_40 = 0; VAR_40 < VAR_11; VAR_40++) {
  VAR_34 = FUNC_21(VAR_32->device, VAR_40);
  if (VAR_34 == ((void*)0))
   break;

  VAR_35 = FUNC_22(VAR_34);
  if ((VAR_35 == ((void*)0)) || (VAR_35->bInterfaceClass != VAR_6))
   continue;


  if (VAR_35->bInterfaceNumber >= 7 && VAR_35->bNumEndpoints == 3) {
   VAR_31->sc_if_ifnum = VAR_35->bInterfaceNumber;
   VAR_39 = VAR_40;

   FUNC_0("ifnum=%d, ifidx=%d\n",
       VAR_31->sc_if_ifnum, VAR_40);

   VAR_37 = FUNC_25(VAR_32->device,
       &VAR_39, VAR_31->sc_if_xfer, VAR_21,
       VAR_12, VAR_31, &VAR_31->sc_mtx);

   if (VAR_37 == 0)
    continue;

   FUNC_9(VAR_30,
       "could not allocate USB transfers on "
       "iface_index=%d, err=%s\n",
       VAR_39, FUNC_20(VAR_37));
   goto detach;
  }


  if (VAR_31->sc_nucom >= VAR_16)
   continue;

  FUNC_23(VAR_32->device, VAR_40,
      VAR_32->info.bIfaceIndex);

  FUNC_0("NumEndpoints=%d bInterfaceNumber=%d\n",
      VAR_35->bNumEndpoints, VAR_35->bInterfaceNumber);

  if (VAR_35->bNumEndpoints == 2) {
   VAR_31->sc_uc_xfer[VAR_31->sc_nucom][0] = ((void*)0);
   VAR_41 = 1;
  } else
   VAR_41 = 0;

  VAR_37 = FUNC_25(VAR_32->device, &VAR_40,
      VAR_31->sc_uc_xfer[VAR_31->sc_nucom] + VAR_41,
      VAR_29 + VAR_41, VAR_17 - VAR_41,
      &VAR_31->sc_ucom[VAR_31->sc_nucom], &VAR_31->sc_mtx);

  if (VAR_37 != 0) {
   FUNC_0("usbd_transfer_setup error=%s\n", FUNC_20(VAR_37));
   continue;
  }

  FUNC_15(&VAR_31->sc_mtx);
  for (; VAR_41 < VAR_17; VAR_41++)
   FUNC_26(VAR_31->sc_uc_xfer[VAR_31->sc_nucom][VAR_41]);
  FUNC_16(&VAR_31->sc_mtx);

  VAR_31->sc_uc_ifnum[VAR_31->sc_nucom] = VAR_35->bInterfaceNumber;

  VAR_31->sc_nucom++;
 }

 if (VAR_31->sc_nucom == 0) {
  FUNC_9(VAR_30, "no comports found\n");
  goto detach;
 }

 VAR_37 = FUNC_17(&VAR_31->sc_super_ucom, VAR_31->sc_ucom,
     VAR_31->sc_nucom, VAR_31, &VAR_28, &VAR_31->sc_mtx);

 if (VAR_37 != 0) {
  FUNC_0("ucom_attach failed\n");
  goto detach;
 }
 FUNC_0("Found %d interfaces.\n", VAR_31->sc_nucom);


 VAR_31->sc_ifp = VAR_33 = FUNC_11(VAR_3);

 if (VAR_33 == ((void*)0)) {
  FUNC_9(VAR_30, "Could not allocate a network interface\n");
  goto detach;
 }
 FUNC_13(VAR_33, "usie", FUNC_8(VAR_30));

 VAR_33->if_softc = VAR_31;
 VAR_33->if_mtu = VAR_13;
 VAR_33->if_flags |= VAR_2;
 VAR_33->if_init = VAR_22;
 VAR_33->if_ioctl = VAR_23;
 VAR_33->if_start = VAR_25;
 VAR_33->if_output = VAR_24;
 FUNC_1(&VAR_33->if_snd, VAR_20);
 VAR_33->if_snd.ifq_drv_maxlen = VAR_20;
 FUNC_2(&VAR_33->if_snd);

 FUNC_12(VAR_33);
 FUNC_5(VAR_33, VAR_0, 0);

 if (VAR_38 & VAR_14) {
  FUNC_24(VAR_32->device, VAR_8);
  FUNC_0("enabling automatic suspend and resume\n");
 } else {
  FUNC_24(VAR_32->device, VAR_7);
  FUNC_0("USB power is always ON\n");
 }

 FUNC_0("device attached\n");
 return (0);

detach:
 FUNC_27(VAR_30);
 return (VAR_1);
}
