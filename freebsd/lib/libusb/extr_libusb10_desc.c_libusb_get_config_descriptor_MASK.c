
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct libusb_interface_descriptor {scalar_t__ extra_length; int* extra; struct libusb_endpoint_descriptor* endpoint; int iInterface; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bNumEndpoints; int bAlternateSetting; int bInterfaceNumber; int bDescriptorType; int bLength; } ;
struct libusb_endpoint_descriptor {scalar_t__ extra_length; int* extra; int bSynchAddress; int bRefresh; int bInterval; int wMaxPacketSize; int bmAttributes; int bEndpointAddress; int bDescriptorType; int bLength; } ;
struct libusb_config_descriptor {scalar_t__ extra_length; int* extra; TYPE_7__* interface; int MaxPower; int bmAttributes; int iConfiguration; int bConfigurationValue; int bNumInterfaces; int wTotalLength; int bDescriptorType; int bLength; } ;
struct TYPE_15__ {scalar_t__ len; int ptr; } ;
struct TYPE_11__ {int iInterface; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bNumEndpoints; int bAlternateSetting; int bInterfaceNumber; int bDescriptorType; int bLength; } ;
struct libusb20_interface {int num_endpoints; int num_altsetting; struct libusb20_endpoint* endpoints; TYPE_6__ extra; TYPE_2__ desc; struct libusb20_interface* altsetting; } ;
struct TYPE_13__ {scalar_t__ len; int ptr; } ;
struct TYPE_12__ {int bSynchAddress; int bRefresh; int bInterval; int wMaxPacketSize; int bmAttributes; int bEndpointAddress; int bDescriptorType; int bLength; } ;
struct libusb20_endpoint {TYPE_4__ extra; TYPE_3__ desc; } ;
struct libusb20_device {int dummy; } ;
struct TYPE_14__ {scalar_t__ len; int ptr; } ;
struct TYPE_10__ {int bMaxPower; int bmAttributes; int iConfiguration; int bConfigurationValue; int bNumInterfaces; int wTotalLength; int bDescriptorType; int bLength; } ;
struct libusb20_config {int num_interface; struct libusb20_interface* interface; TYPE_5__ extra; TYPE_1__ desc; } ;
typedef struct libusb_interface_descriptor libusb_interface_descriptor ;
struct TYPE_16__ {int num_altsetting; struct libusb_interface_descriptor* altsetting; } ;
typedef TYPE_7__ libusb_interface ;
typedef struct libusb_endpoint_descriptor libusb_endpoint_descriptor ;
struct TYPE_17__ {struct libusb20_device* os_priv; } ;
typedef TYPE_8__ libusb_device ;
typedef int libusb_config_descriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct libusb20_config*) ;
 struct libusb20_config* FUNC_2 (struct libusb20_device*,int) ;
 struct libusb_config_descriptor* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int*,int ,scalar_t__) ;
 int FUNC_5 (struct libusb_config_descriptor*,int ,scalar_t__) ;

int
FUNC_6(libusb_device *VAR_3, uint8_t VAR_4,
    struct libusb_config_descriptor **VAR_5)
{
 struct libusb20_device *VAR_6;
 struct libusb20_config *VAR_7;
 struct libusb20_interface *VAR_8;
 struct libusb20_endpoint *VAR_9;
 struct libusb_config_descriptor *VAR_10;
 struct libusb_interface_descriptor *VAR_11;
 struct libusb_endpoint_descriptor *VAR_12;
 uint8_t *VAR_13;
 uint16_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19;
 uint8_t VAR_20;

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_0);

 *VAR_5 = ((void*)0);

 VAR_6 = VAR_3->os_priv;
 VAR_7 = FUNC_2(VAR_6, VAR_4);

 if (VAR_7 == ((void*)0))
  return (VAR_1);

 VAR_17 = VAR_15 = VAR_7->num_interface;
 VAR_16 = 0;
 VAR_14 = FUNC_0(VAR_7->extra.len);

 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {

  VAR_8 = VAR_7->interface + VAR_18;
  VAR_14 += FUNC_0(VAR_8->extra.len);
  VAR_16 += VAR_8->num_endpoints;
  VAR_20 = VAR_8->num_endpoints;
  VAR_9 = VAR_8->endpoints;
  while (VAR_20--) {
   VAR_14 += FUNC_0(VAR_9->extra.len);
   VAR_9++;
  }

  VAR_19 = VAR_8->num_altsetting;
  VAR_17 += VAR_8->num_altsetting;
  VAR_8 = VAR_8->altsetting;
  while (VAR_19--) {
   VAR_14 += FUNC_0(VAR_8->extra.len);
   VAR_16 += VAR_8->num_endpoints;
   VAR_20 = VAR_8->num_endpoints;
   VAR_9 = VAR_8->endpoints;
   while (VAR_20--) {
    VAR_14 += FUNC_0(VAR_9->extra.len);
    VAR_9++;
   }
   VAR_8++;
  }
 }

 VAR_14 = VAR_14 +
     (1 * sizeof(libusb_config_descriptor)) +
     (VAR_15 * sizeof(libusb_interface)) +
     (VAR_17 * sizeof(libusb_interface_descriptor)) +
     (VAR_16 * sizeof(libusb_endpoint_descriptor));

 VAR_14 = FUNC_0(VAR_14);

 VAR_10 = FUNC_3(VAR_14);

 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_7);
  return (VAR_2);
 }

 FUNC_5(VAR_10, 0, VAR_14);

 VAR_10->interface = (libusb_interface *) (VAR_10 + 1);

 VAR_11 = (libusb_interface_descriptor *) (VAR_10->interface + VAR_15);
 VAR_12 = (libusb_endpoint_descriptor *) (VAR_11 + VAR_17);
 VAR_13 = (uint8_t *)(VAR_12 + VAR_16);



 VAR_10->bLength = VAR_7->desc.bLength;
 VAR_10->bDescriptorType = VAR_7->desc.bDescriptorType;
 VAR_10->wTotalLength = VAR_7->desc.wTotalLength;
 VAR_10->bNumInterfaces = VAR_7->desc.bNumInterfaces;
 VAR_10->bConfigurationValue = VAR_7->desc.bConfigurationValue;
 VAR_10->iConfiguration = VAR_7->desc.iConfiguration;
 VAR_10->bmAttributes = VAR_7->desc.bmAttributes;
 VAR_10->MaxPower = VAR_7->desc.bMaxPower;

 if (VAR_7->extra.len != 0) {
  VAR_10->extra_length = VAR_7->extra.len;
  VAR_10->extra = VAR_13;
  FUNC_4(VAR_13, VAR_7->extra.ptr, VAR_10->extra_length);
  VAR_13 += FUNC_0(VAR_10->extra_length);
 }


 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {

  VAR_10->interface[VAR_18].altsetting = VAR_11;
  VAR_11->endpoint = VAR_12;
  VAR_12 += VAR_7->interface[VAR_18].num_endpoints;
  VAR_11++;

  for (VAR_19 = 0; VAR_19 < VAR_7->interface[VAR_18].num_altsetting; VAR_19++) {
   VAR_11->endpoint = VAR_12;
   VAR_12 += VAR_7->interface[VAR_18].altsetting[VAR_19].num_endpoints;
   VAR_11++;
  }
 }



 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
  VAR_8 = &VAR_7->interface[VAR_18];
  VAR_10->interface[VAR_18].num_altsetting = VAR_8->num_altsetting + 1;
  for (VAR_19 = 0; VAR_19 < VAR_10->interface[VAR_18].num_altsetting; VAR_19++) {
   if (VAR_19 != 0)
    VAR_8 = &VAR_7->interface[VAR_18].altsetting[VAR_19 - 1];
   VAR_11 = &VAR_10->interface[VAR_18].altsetting[VAR_19];
   VAR_11->bLength = VAR_8->desc.bLength;
   VAR_11->bDescriptorType = VAR_8->desc.bDescriptorType;
   VAR_11->bInterfaceNumber = VAR_8->desc.bInterfaceNumber;
   VAR_11->bAlternateSetting = VAR_8->desc.bAlternateSetting;
   VAR_11->bNumEndpoints = VAR_8->desc.bNumEndpoints;
   VAR_11->bInterfaceClass = VAR_8->desc.bInterfaceClass;
   VAR_11->bInterfaceSubClass = VAR_8->desc.bInterfaceSubClass;
   VAR_11->bInterfaceProtocol = VAR_8->desc.bInterfaceProtocol;
   VAR_11->iInterface = VAR_8->desc.iInterface;
   if (VAR_8->extra.len != 0) {
    VAR_11->extra_length = VAR_8->extra.len;
    VAR_11->extra = VAR_13;
    FUNC_4(VAR_13, VAR_8->extra.ptr, VAR_8->extra.len);
    VAR_13 += FUNC_0(VAR_8->extra.len);
   }
   for (VAR_20 = 0; VAR_20 < VAR_8->num_endpoints; VAR_20++) {
    VAR_9 = &VAR_8->endpoints[VAR_20];
    VAR_12 = &VAR_11->endpoint[VAR_20];
    VAR_12->bLength = VAR_9->desc.bLength;
    VAR_12->bDescriptorType = VAR_9->desc.bDescriptorType;
    VAR_12->bEndpointAddress = VAR_9->desc.bEndpointAddress;
    VAR_12->bmAttributes = VAR_9->desc.bmAttributes;
    VAR_12->wMaxPacketSize = VAR_9->desc.wMaxPacketSize;
    VAR_12->bInterval = VAR_9->desc.bInterval;
    VAR_12->bRefresh = VAR_9->desc.bRefresh;
    VAR_12->bSynchAddress = VAR_9->desc.bSynchAddress;
    if (VAR_9->extra.len != 0) {
     VAR_12->extra_length = VAR_9->extra.len;
     VAR_12->extra = VAR_13;
     FUNC_4(VAR_13, VAR_9->extra.ptr, VAR_9->extra.len);
     VAR_13 += FUNC_0(VAR_9->extra.len);
    }
   }
  }
 }

 FUNC_1(VAR_7);

 *VAR_5 = VAR_10;

 return (0);
}
