
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_usb_2_0_device_capability_descriptor {int bLength; int bDescriptorType; int bDevCapabilityType; int bmAttributes; } ;
struct libusb_ss_usb_device_capability_descriptor {int bLength; int bDescriptorType; int bDevCapabilityType; int bmAttributes; int wSpeedSupported; int bFunctionalitySupport; int bU1DevExitLat; int wU2DevExitLat; } ;
struct libusb_bos_descriptor {int bLength; int bDescriptorType; int wTotalLength; int bNumDeviceCapabilities; struct libusb_ss_usb_device_capability_descriptor* ss_usb_cap; struct libusb_usb_2_0_device_capability_descriptor* usb_2_0_ext_cap; int ** dev_capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int ** FUNC_0 (int,int) ;
 int FUNC_1 (struct libusb_bos_descriptor*) ;
 int FUNC_2 (struct libusb_bos_descriptor*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,void const*,int) ;

int
FUNC_5(const void *VAR_8, int VAR_9,
    struct libusb_bos_descriptor **VAR_10)
{
 struct libusb_bos_descriptor *VAR_11;
 struct libusb_usb_2_0_device_capability_descriptor *VAR_12 = ((void*)0);
 struct libusb_ss_usb_device_capability_descriptor *VAR_13 = ((void*)0);
 uint8_t VAR_14 = 0;

 if (VAR_8 == ((void*)0) || VAR_10 == ((void*)0) || VAR_9 < 1)
  return (VAR_3);

 if (VAR_9 > 65535)
  VAR_9 = 65535;

 *VAR_10 = VAR_11 = ((void*)0);

 while (VAR_9 != 0) {
  uint8_t VAR_15;
  uint8_t VAR_16;

  VAR_15 = ((const uint8_t *)VAR_8)[0];
  VAR_16 = ((const uint8_t *)VAR_8)[1];

  if (VAR_15 < 2 || VAR_15 > VAR_9)
   break;

  if (VAR_15 >= VAR_1 &&
      VAR_16 == VAR_0 &&
      VAR_11 == ((void*)0)) {

   VAR_11 = FUNC_3(sizeof(*VAR_11) + sizeof(*VAR_12) +
       sizeof(*VAR_13));

   if (VAR_11 == ((void*)0))
    return (VAR_5);

   *VAR_10 = VAR_11;

   VAR_11->bLength = VAR_1;
   VAR_11->bDescriptorType = VAR_16;
   VAR_11->wTotalLength = ((const uint8_t *)VAR_8)[2] |
       (((const uint8_t *)VAR_8)[3] << 8);
   VAR_11->bNumDeviceCapabilities = ((const uint8_t *)VAR_8)[4];
   VAR_11->usb_2_0_ext_cap = ((void*)0);
   VAR_11->ss_usb_cap = ((void*)0);
   VAR_11->dev_capability = FUNC_0(VAR_11->bNumDeviceCapabilities, sizeof(void *));
   if (VAR_11->dev_capability == ((void*)0)) {
    FUNC_1(VAR_11);
    return (VAR_5);
   }

   VAR_12 = (void *)(VAR_11 + 1);
   VAR_13 = (void *)(VAR_12 + 1);
  }
  if (VAR_15 >= 3 &&
      VAR_11 != ((void*)0) &&
      VAR_16 == VAR_2) {
   if (VAR_14 != VAR_11->bNumDeviceCapabilities) {
    VAR_11->dev_capability[VAR_14] = FUNC_3(VAR_15);
    if (VAR_11->dev_capability[VAR_14] == ((void*)0)) {
     FUNC_2(VAR_11);
     return VAR_5;
    }
    FUNC_4(VAR_11->dev_capability[VAR_14], VAR_8, VAR_15);
    VAR_14++;
   }
   switch (((const uint8_t *)VAR_8)[2]) {
   case 128:
    if (VAR_11->usb_2_0_ext_cap != ((void*)0) || VAR_12 == ((void*)0))
     break;
    if (VAR_15 < VAR_7)
     break;

    VAR_11->usb_2_0_ext_cap = VAR_12;

    VAR_12->bLength = VAR_7;
    VAR_12->bDescriptorType = VAR_16;
    VAR_12->bDevCapabilityType = ((const uint8_t *)VAR_8)[2];
    VAR_12->bmAttributes = ((const uint8_t *)VAR_8)[3] |
        (((const uint8_t *)VAR_8)[4] << 8) |
        (((const uint8_t *)VAR_8)[5] << 16) |
        (((const uint8_t *)VAR_8)[6] << 24);
    break;

   case 129:
    if (VAR_11->ss_usb_cap != ((void*)0) || VAR_13 == ((void*)0))
     break;
    if (VAR_15 < VAR_6)
     break;

    VAR_11->ss_usb_cap = VAR_13;

    VAR_13->bLength = VAR_6;
    VAR_13->bDescriptorType = VAR_16;
    VAR_13->bDevCapabilityType = ((const uint8_t *)VAR_8)[2];
    VAR_13->bmAttributes = ((const uint8_t *)VAR_8)[3];
    VAR_13->wSpeedSupported = ((const uint8_t *)VAR_8)[4] |
        (((const uint8_t *)VAR_8)[5] << 8);
    VAR_13->bFunctionalitySupport = ((const uint8_t *)VAR_8)[6];
    VAR_13->bU1DevExitLat = ((const uint8_t *)VAR_8)[7];
    VAR_13->wU2DevExitLat = ((const uint8_t *)VAR_8)[8] |
        (((const uint8_t *)VAR_8)[9] << 8);
    break;

   default:
    break;
   }
  }

  VAR_8 = ((const uint8_t *)VAR_8) + VAR_15;
  VAR_9 -= VAR_15;
 }

 if (VAR_11 != ((void*)0)) {
  VAR_11->bNumDeviceCapabilities = VAR_14;
  return (0);
 }

 return (VAR_4);
}
