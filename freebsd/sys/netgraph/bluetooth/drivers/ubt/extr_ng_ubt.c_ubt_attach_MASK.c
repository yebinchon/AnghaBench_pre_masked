
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_interface_descriptor {int bInterfaceNumber; int bAlternateSetting; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_interface {int dummy; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; int bLength; int wMaxPacketSize; } ;
struct usb_descriptor {int dummy; } ;
struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct ubt_softc {int sc_if_mtx; int sc_xfer; int sc_task; int sc_scoq; int sc_aclq; int sc_cmdq; int sc_ng_mtx; int sc_node; int sc_debug; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ubt_softc*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int ,struct ubt_softc*) ;
 int FUNC_5 (struct ubt_softc*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct usb_attach_arg* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct ubt_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,char*,int *,int) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (int ,struct usb_descriptor*) ;
 int FUNC_16 (int ) ;
 struct usb_interface* FUNC_17 (int ,int) ;
 struct usb_interface_descriptor* FUNC_18 (struct usb_interface*) ;
 scalar_t__ FUNC_19 (int ,int,int) ;
 int FUNC_20 (int ,int,int ) ;
 scalar_t__ FUNC_21 (int ,int*,int ,int ,int ,struct ubt_softc*,int *) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_14)
{
 struct usb_attach_arg *VAR_15 = FUNC_7(VAR_14);
 struct ubt_softc *VAR_16 = FUNC_9(VAR_14);
 struct usb_endpoint_descriptor *VAR_17;
 struct usb_interface_descriptor *VAR_18;
 struct usb_interface *VAR_19;
 uint16_t VAR_20;
 uint8_t VAR_21, VAR_22, VAR_23;
 uint8_t VAR_24[2] = { 0, 1 };

 FUNC_10(VAR_14);

 VAR_16->sc_dev = VAR_14;
 VAR_16->sc_debug = VAR_3;





 if (FUNC_12(&VAR_11, &VAR_16->sc_node) != 0) {
  FUNC_5(VAR_16, "could not create Netgraph node\n");
  return (VAR_0);
 }


 if (FUNC_13(VAR_16->sc_node, FUNC_8(VAR_14)) != 0) {
  FUNC_5(VAR_16, "could not name Netgraph node\n");
  FUNC_3(VAR_16->sc_node);
  return (VAR_0);
 }
 FUNC_2(VAR_16->sc_node, VAR_16);
 FUNC_1(VAR_16->sc_node);






 FUNC_11(&VAR_16->sc_ng_mtx, "ubt ng", ((void*)0), VAR_1);
 FUNC_11(&VAR_16->sc_if_mtx, "ubt if", ((void*)0), VAR_1 | VAR_2);


 FUNC_0(&VAR_16->sc_cmdq, VAR_4);
 FUNC_0(&VAR_16->sc_aclq, VAR_4);
 FUNC_0(&VAR_16->sc_scoq, VAR_4);


 FUNC_4(&VAR_16->sc_task, 0, VAR_13, VAR_16);
 VAR_20 = 0;
 VAR_21 = 0;
 VAR_22 = 0;
 VAR_23 = 0;
 VAR_17 = ((void*)0);





 while ((VAR_17 = (struct usb_endpoint_descriptor *)FUNC_15(
     FUNC_16(VAR_15->device),
     (struct usb_descriptor *)VAR_17))) {

  if ((VAR_17->bDescriptorType == VAR_7) &&
      (VAR_17->bLength >= sizeof(*VAR_18))) {
   VAR_18 = (struct usb_interface_descriptor *)VAR_17;
   VAR_22 = VAR_18->bInterfaceNumber;
   VAR_23 = VAR_18->bAlternateSetting;
  }

  if ((VAR_17->bDescriptorType == VAR_6) &&
      (VAR_17->bLength >= sizeof(*VAR_17)) &&
      (VAR_22 == 1)) {
   uint16_t VAR_25;

   VAR_25 = FUNC_6(VAR_17->wMaxPacketSize);
   if (VAR_25 > VAR_20) {
    VAR_20 = VAR_25;
    VAR_21 = VAR_23;
   }
  }
 }


 if (VAR_20 > 0 &&
     FUNC_19(VAR_15->device, 1, VAR_21)) {
  FUNC_5(VAR_16, "could not set alternate setting %d " "for interface 1!\n", VAR_21);

  goto detach;
 }


 if (FUNC_21(VAR_15->device, VAR_24, VAR_16->sc_xfer,
   VAR_12, VAR_5, VAR_16, &VAR_16->sc_if_mtx)) {
  FUNC_5(VAR_16, "could not allocate transfers\n");
  goto detach;
 }


 for (VAR_22 = 1;; VAR_22++) {
  VAR_19 = FUNC_17(VAR_15->device, VAR_22);
  if (VAR_19 == ((void*)0))
   break;
  VAR_18 = FUNC_18(VAR_19);

  if ((VAR_18 != ((void*)0)) &&
      (VAR_18->bInterfaceClass == VAR_8) &&
      (VAR_18->bInterfaceSubClass == VAR_10) &&
      (VAR_18->bInterfaceProtocol == VAR_9)) {
   FUNC_20(VAR_15->device, VAR_22,
       VAR_15->info.bIfaceIndex);
  }
 }
 return (0);

detach:
 FUNC_14(VAR_14);

 return (VAR_0);
}
