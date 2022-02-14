
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_ss_usb_device_capability_descriptor {scalar_t__ bDevCapabilityType; int bmAttributes; int wSpeedSupported; int bFunctionalitySupport; int bU1DevExitLat; int wU2DevExitLat; int bDescriptorType; scalar_t__ bLength; } ;
struct libusb_context {int dummy; } ;
struct libusb_bos_dev_capability_descriptor {scalar_t__ bDevCapabilityType; scalar_t__ bLength; int* dev_capability_data; int bDescriptorType; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct libusb_ss_usb_device_capability_descriptor* FUNC_0 (int) ;

int
FUNC_1(struct libusb_context *VAR_5,
    struct libusb_bos_dev_capability_descriptor *VAR_6,
    struct libusb_ss_usb_device_capability_descriptor **VAR_7)
{
 struct libusb_ss_usb_device_capability_descriptor *VAR_8;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) ||
     VAR_6->bDevCapabilityType != VAR_0)
  return (VAR_2);
 if (VAR_6->bLength < VAR_1)
  return (VAR_3);

 VAR_8 = FUNC_0(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (VAR_4);

 VAR_8->bLength = VAR_1;
 VAR_8->bDescriptorType = VAR_6->bDescriptorType;
 VAR_8->bDevCapabilityType = VAR_6->bDevCapabilityType;
 VAR_8->bmAttributes = VAR_6->dev_capability_data[0];
 VAR_8->wSpeedSupported = VAR_6->dev_capability_data[1] |
     (VAR_6->dev_capability_data[2] << 8);
 VAR_8->bFunctionalitySupport = VAR_6->dev_capability_data[3];
 VAR_8->bU1DevExitLat = VAR_6->dev_capability_data[4];
 VAR_8->wU2DevExitLat = VAR_6->dev_capability_data[5] |
     (VAR_6->dev_capability_data[6] << 8);

 *VAR_7 = VAR_8;
 return (0);
}
