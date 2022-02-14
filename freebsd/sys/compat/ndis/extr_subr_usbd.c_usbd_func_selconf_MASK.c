
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct TYPE_4__ {int bInterval; int bmAttributes; int wMaxPacketSize; int bEndpointAddress; } ;
typedef TYPE_1__ usb_endpoint_descriptor_t ;
struct TYPE_5__ {int bNumInterface; } ;
typedef TYPE_2__ usb_config_descriptor_t ;
struct usbd_interface_information {scalar_t__ uii_len; int uii_numeps; int uii_intfnum; struct usbd_pipe_information* uii_pipes; int uii_altset; } ;
struct usbd_urb_select_configuration {struct usbd_interface_information usc_intf; TYPE_2__* usc_conf; } ;
union usbd_urb {struct usbd_urb_select_configuration uu_selconf; } ;
struct usbd_pipe_information {scalar_t__ upi_type; int upi_interval; int upi_maxpktsize; int upi_epaddr; TYPE_1__* upi_handle; } ;
struct usb_endpoint {TYPE_1__* edesc; } ;
struct usb_device {scalar_t__ speed; } ;
struct ndis_softc {struct usb_device* ndisusb_dev; } ;
typedef int irp ;
typedef int int32_t ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ndis_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 struct usb_endpoint* FUNC_5 (struct usb_device*,struct usb_endpoint*) ;
 int FUNC_6 (scalar_t__) ;
 union usbd_urb* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct usb_device*,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_1__*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_11(irp *VAR_6)
{
 device_t VAR_7 = FUNC_0(VAR_6);
 int VAR_8, VAR_9;
 struct ndis_softc *VAR_10 = FUNC_3(VAR_7);
 struct usb_device *VAR_11 = VAR_10->ndisusb_dev;
 struct usb_endpoint *VAR_12 = ((void*)0);
 struct usbd_interface_information *VAR_13;
 struct usbd_pipe_information *VAR_14;
 struct usbd_urb_select_configuration *VAR_15;
 union usbd_urb *VAR_16;
 usb_config_descriptor_t *VAR_17;
 usb_endpoint_descriptor_t *VAR_18;
 usb_error_t VAR_19;

 VAR_16 = FUNC_7(VAR_6);

 VAR_15 = &VAR_16->uu_selconf;
 VAR_17 = VAR_15->usc_conf;
 if (VAR_17 == ((void*)0)) {
  FUNC_4(VAR_7, "select configuration is NULL\n");
  return FUNC_10(VAR_3);
 }

 VAR_13 = &VAR_15->usc_intf;
 for (VAR_8 = 0; VAR_8 < VAR_17->bNumInterface && VAR_13->uii_len > 0; VAR_8++) {
  VAR_19 = FUNC_8(VAR_11,
      VAR_13->uii_intfnum, VAR_13->uii_altset);
  if (VAR_19 != VAR_3 && VAR_19 != VAR_2) {
   FUNC_4(VAR_7,
       "setting alternate interface failed: %s\n",
       FUNC_6(VAR_19));
   return FUNC_10(VAR_19);
  }

  for (VAR_9 = 0; (VAR_12 = FUNC_5(VAR_11, VAR_12)); VAR_9++) {
   if (VAR_9 >= VAR_13->uii_numeps) {
    FUNC_4(VAR_7,
        "endpoint %d and above are ignored",
        VAR_13->uii_numeps);
    break;
   }
   VAR_18 = VAR_12->edesc;
   VAR_14 = &VAR_13->uii_pipes[VAR_9];
   VAR_14->upi_handle = VAR_18;
   VAR_14->upi_epaddr = VAR_18->bEndpointAddress;
   VAR_14->upi_maxpktsize = FUNC_2(VAR_18->wMaxPacketSize);
   VAR_14->upi_type = FUNC_1(VAR_18->bmAttributes);

   VAR_19 = FUNC_9(VAR_6, VAR_13->uii_intfnum, VAR_18);
   if (VAR_19 != VAR_3)
    return FUNC_10(VAR_19);

   if (VAR_14->upi_type != VAR_0)
    continue;


   if (VAR_11->speed == VAR_5)
    VAR_14->upi_interval = VAR_18->bInterval + 5;
   else if (VAR_11->speed == VAR_4)
    VAR_14->upi_interval = VAR_18->bInterval;
   else {
    int VAR_20 = 0, VAR_21 = 1;
    do {
     VAR_21 = VAR_21 * 2;
     VAR_20 = VAR_20 + 1;
    } while (VAR_21 < VAR_18->bInterval);
    VAR_14->upi_interval = VAR_20;
   }
  }

  VAR_13 = (struct usbd_interface_information *)(((char *)VAR_13) +
      VAR_13->uii_len);
 }

 return (VAR_1);
}
