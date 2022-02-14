
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_device_descriptor {int bDeviceClass; int bDeviceSubClass; int bcdDevice; int bcdUSB; } ;
struct usb_device {int address; struct usb_device_descriptor ddesc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,char*,char*,int,int,int,int,int,...) ;
 char* FUNC_2 (struct usb_device*) ;
 char* FUNC_3 (struct usb_device*) ;

void
FUNC_4(struct usb_device *VAR_0, char *VAR_1, uint16_t VAR_2)
{
 struct usb_device_descriptor *VAR_3 = &VAR_0->ddesc;
 uint16_t VAR_4;
 uint16_t VAR_5;

 VAR_5 = FUNC_0(VAR_3->bcdUSB);
 VAR_4 = FUNC_0(VAR_3->bcdDevice);

 if (VAR_3->bDeviceClass != 0xFF) {
  FUNC_1(VAR_1, VAR_2, "%s %s, class %d/%d, rev %x.%02x/"
      "%x.%02x, addr %d",
      FUNC_2(VAR_0),
      FUNC_3(VAR_0),
      VAR_3->bDeviceClass, VAR_3->bDeviceSubClass,
      (VAR_5 >> 8), VAR_5 & 0xFF,
      (VAR_4 >> 8), VAR_4 & 0xFF,
      VAR_0->address);
 } else {
  FUNC_1(VAR_1, VAR_2, "%s %s, rev %x.%02x/"
      "%x.%02x, addr %d",
      FUNC_2(VAR_0),
      FUNC_3(VAR_0),
      (VAR_5 >> 8), VAR_5 & 0xFF,
      (VAR_4 >> 8), VAR_4 & 0xFF,
      VAR_0->address);
 }
}
