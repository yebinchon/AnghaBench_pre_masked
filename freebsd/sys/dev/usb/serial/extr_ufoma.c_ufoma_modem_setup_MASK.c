
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_interface_descriptor {scalar_t__ bInterfaceNumber; } ;
struct usb_interface {int dummy; } ;
struct usb_config_descriptor {int dummy; } ;
struct usb_cdc_cm_descriptor {int bLength; int bmCapabilities; scalar_t__ bDataInterface; } ;
struct usb_cdc_acm_descriptor {int bLength; int bmCapabilities; } ;
struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_1__ info; struct usb_interface* iface; } ;
struct ufoma_softc {int sc_cm_cap; scalar_t__ sc_data_iface_no; int sc_acm_cap; int sc_mtx; int sc_bulk_xfer; scalar_t__ sc_data_iface_index; } ;
typedef scalar_t__ int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;
 void* FUNC_1 (struct usb_config_descriptor*,struct usb_interface_descriptor*,int ,int ) ;
 struct usb_config_descriptor* FUNC_2 (int ) ;
 struct usb_interface* FUNC_3 (int ,scalar_t__) ;
 struct usb_interface_descriptor* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int ,int ,int ,struct ufoma_softc*,int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8, struct ufoma_softc *VAR_9,
    struct usb_attach_arg *VAR_10)
{
 struct usb_config_descriptor *VAR_11;
 struct usb_cdc_acm_descriptor *VAR_12;
 struct usb_cdc_cm_descriptor *VAR_13;
 struct usb_interface_descriptor *VAR_14;
 struct usb_interface *VAR_15;
 uint8_t VAR_16;
 int32_t VAR_17;

 VAR_11 = FUNC_2(VAR_10->device);
 VAR_14 = FUNC_4(VAR_10->iface);

 VAR_13 = FUNC_1(VAR_11, VAR_14, VAR_3, VAR_2);

 if ((VAR_13 == ((void*)0)) ||
     (VAR_13->bLength < sizeof(*VAR_13))) {
  return (VAR_0);
 }
 VAR_9->sc_cm_cap = VAR_13->bmCapabilities;
 VAR_9->sc_data_iface_no = VAR_13->bDataInterface;

 VAR_12 = FUNC_1(VAR_11, VAR_14, VAR_3, VAR_1);

 if ((VAR_12 == ((void*)0)) ||
     (VAR_12->bLength < sizeof(*VAR_12))) {
  return (VAR_0);
 }
 VAR_9->sc_acm_cap = VAR_12->bmCapabilities;

 FUNC_0(VAR_8, "data interface %d, has %sCM over data, "
     "has %sbreak\n",
     VAR_9->sc_data_iface_no,
     VAR_9->sc_cm_cap & VAR_6 ? "" : "no ",
     VAR_9->sc_acm_cap & VAR_5 ? "" : "no ");



 for (VAR_16 = 0;; VAR_16++) {

  VAR_15 = FUNC_3(VAR_10->device, VAR_16);

  if (VAR_15) {

   VAR_14 = FUNC_4(VAR_15);

   if (VAR_14 && (VAR_14->bInterfaceNumber == VAR_9->sc_data_iface_no)) {
    VAR_9->sc_data_iface_index = VAR_16;
    FUNC_5(VAR_10->device, VAR_16, VAR_10->info.bIfaceIndex);
    break;
   }
  } else {
   FUNC_0(VAR_8, "no data interface\n");
   return (VAR_0);
  }
 }

 VAR_17 = FUNC_6(VAR_10->device,
     &VAR_9->sc_data_iface_index, VAR_9->sc_bulk_xfer,
     VAR_7, VAR_4, VAR_9, &VAR_9->sc_mtx);

 if (VAR_17) {
  FUNC_0(VAR_8, "allocating BULK USB "
      "transfers failed\n");
  return (VAR_0);
 }
 return (0);
}
