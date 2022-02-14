
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct usb_interface_descriptor {scalar_t__ bInterfaceNumber; } ;
struct usb_interface {int dummy; } ;
struct usb_ether {int* ue_eaddr; int * ue_methods; int * ue_mtx; int ue_udev; int ue_dev; struct cdce_softc* ue_sc; } ;
struct usb_config {int dummy; } ;
struct usb_cdc_union_descriptor {int bLength; scalar_t__* bSlaveInterface; } ;
struct usb_cdc_ethernet_descriptor {int bLength; int iMacAddress; } ;
struct TYPE_2__ {scalar_t__ bIfaceIndex; } ;
struct usb_attach_arg {scalar_t__ usb_mode; int device; TYPE_1__ info; } ;
struct cdce_softc {int sc_flags; int sc_mtx; struct usb_ether sc_ue; int sc_xfer; scalar_t__* sc_ifaces_index; } ;
typedef int eaddr_str ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct usb_attach_arg*) ;
 scalar_t__ VAR_9 ;
 struct usb_config* VAR_10 ;
 int FUNC_2 (int ) ;
 struct usb_config* VAR_11 ;
 scalar_t__ FUNC_3 (struct cdce_softc*) ;
 int VAR_12 ;
 struct usb_attach_arg* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct cdce_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int*,int *,int) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int *,int ,int *,int ) ;
 int VAR_13 ;
 int FUNC_13 (struct usb_ether*) ;
 void* FUNC_14 (int ,int *,scalar_t__,int ,int,int ,int) ;
 struct usb_interface* FUNC_15 (int ,scalar_t__) ;
 struct usb_interface_descriptor* FUNC_16 (struct usb_interface*) ;
 int FUNC_17 (int ,int *,char*,int,int ) ;
 int FUNC_18 (int ,scalar_t__,scalar_t__) ;
 int FUNC_19 (int ,scalar_t__,scalar_t__) ;
 int FUNC_20 (int ,scalar_t__*,int ,struct usb_config const*,int ,struct cdce_softc*,int *) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_14)
{
 struct cdce_softc *VAR_15 = FUNC_6(VAR_14);
 struct usb_ether *VAR_16 = &VAR_15->sc_ue;
 struct usb_attach_arg *VAR_17 = FUNC_4(VAR_14);
 struct usb_interface *VAR_18;
 const struct usb_cdc_union_descriptor *VAR_19;
 const struct usb_interface_descriptor *VAR_20;
 const struct usb_cdc_ethernet_descriptor *VAR_21;
 const struct usb_config *VAR_22;
 uint32_t VAR_23;
 int VAR_24;
 uint8_t VAR_25;
 uint8_t VAR_26;
 char VAR_27[5 * VAR_3];

 VAR_15->sc_flags = FUNC_1(VAR_17);
 VAR_15->sc_ue.ue_udev = VAR_17->device;

 FUNC_9(VAR_14);

 FUNC_12(&VAR_15->sc_mtx, FUNC_5(VAR_14), ((void*)0), VAR_4);

 VAR_19 = FUNC_14
     (VAR_17->device, ((void*)0), VAR_17->info.bIfaceIndex,
     VAR_7, 0xFF, VAR_6, 0xFF);

 if ((VAR_19 == ((void*)0)) || (VAR_19->bLength < sizeof(*VAR_19)) ||
     (VAR_15->sc_flags & VAR_0)) {
  FUNC_0(1, "No union descriptor!\n");
  VAR_15->sc_ifaces_index[0] = VAR_17->info.bIfaceIndex;
  VAR_15->sc_ifaces_index[1] = VAR_17->info.bIfaceIndex;
  goto alloc_transfers;
 }
 VAR_26 = VAR_19->bSlaveInterface[0];

 for (VAR_25 = 0;; VAR_25++) {

  VAR_18 = FUNC_15(VAR_17->device, VAR_25);

  if (VAR_18) {

   VAR_20 = FUNC_16(VAR_18);

   if (VAR_20 && (VAR_20->bInterfaceNumber == VAR_26)) {
    VAR_15->sc_ifaces_index[0] = VAR_25;
    VAR_15->sc_ifaces_index[1] = VAR_17->info.bIfaceIndex;
    FUNC_19(VAR_17->device, VAR_25, VAR_17->info.bIfaceIndex);
    break;
   }
  } else {
   FUNC_8(VAR_14, "no data interface found\n");
   goto detach;
  }
 }
alloc_transfers:

 VAR_22 = VAR_10;

 for (VAR_25 = 0; VAR_25 != 32; VAR_25++) {

  VAR_24 = FUNC_18(VAR_17->device,
      VAR_15->sc_ifaces_index[0], VAR_25);
  if (VAR_24)
   break;




  VAR_24 = FUNC_20(VAR_17->device,
      VAR_15->sc_ifaces_index, VAR_15->sc_xfer,
      VAR_22, VAR_1, VAR_15, &VAR_15->sc_mtx);

  if (VAR_24 == 0)
   break;
 }

 if (VAR_24 || (VAR_25 == 32)) {
  FUNC_8(VAR_14, "No valid alternate "
      "setting found\n");
  goto detach;
 }

 VAR_21 = FUNC_14
     (VAR_17->device, ((void*)0), VAR_17->info.bIfaceIndex,
     VAR_7, 0xFF, VAR_5, 0xFF);

 if ((VAR_21 == ((void*)0)) || (VAR_21->bLength < sizeof(*VAR_21))) {
  VAR_24 = VAR_8;
 } else {
  VAR_24 = FUNC_17(VAR_17->device, ((void*)0),
      VAR_27, sizeof(VAR_27), VAR_21->iMacAddress);
 }

 if (VAR_24) {



  FUNC_8(VAR_14, "faking MAC address\n");
  VAR_23 = VAR_13;
  VAR_15->sc_ue.ue_eaddr[0] = 0x2a;
  FUNC_10(&VAR_15->sc_ue.ue_eaddr[1], &VAR_23, sizeof(uint32_t));
  VAR_15->sc_ue.ue_eaddr[5] = FUNC_7(VAR_14);

 } else {

  FUNC_11(VAR_15->sc_ue.ue_eaddr, 0, sizeof(VAR_15->sc_ue.ue_eaddr));

  for (VAR_25 = 0; VAR_25 != (VAR_3 * 2); VAR_25++) {

   char VAR_28 = VAR_27[VAR_25];

   if ('0' <= VAR_28 && VAR_28 <= '9')
    VAR_28 -= '0';
   else if (VAR_28 != 0)
    VAR_28 -= 'A' - 10;
   else
    break;

   VAR_28 &= 0xf;

   if ((VAR_25 & 1) == 0)
    VAR_28 <<= 4;
   VAR_15->sc_ue.ue_eaddr[VAR_25 / 2] |= VAR_28;
  }

  if (VAR_17->usb_mode == VAR_9) {



   VAR_15->sc_ue.ue_eaddr[5] ^= 0xFF;
  }
 }

 VAR_16->ue_sc = VAR_15;
 VAR_16->ue_dev = VAR_14;
 VAR_16->ue_udev = VAR_17->device;
 VAR_16->ue_mtx = &VAR_15->sc_mtx;
 VAR_16->ue_methods = &VAR_12;

 VAR_24 = FUNC_13(VAR_16);
 if (VAR_24) {
  FUNC_8(VAR_14, "could not attach interface\n");
  goto detach;
 }
 return (0);

detach:
 FUNC_2(VAR_14);
 return (VAR_2);
}
