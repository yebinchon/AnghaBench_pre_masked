
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_hub_ss_descriptor {int bNbrPorts; } ;
struct usb_hub_descriptor {int bNbrPorts; int wHubCharacteristics; } ;
struct TYPE_2__ {scalar_t__ bDeviceClass; } ;
struct usb_device {int speed; TYPE_1__ ddesc; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;




 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*,int *,struct usb_hub_descriptor*,int) ;
 int FUNC_4 (struct usb_device*,int *,struct usb_hub_ss_descriptor*,int) ;

usb_error_t
FUNC_5(struct usb_device *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4)
{
 struct usb_hub_descriptor VAR_5;
 struct usb_hub_ss_descriptor VAR_6;
 usb_error_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;

 if (VAR_2->ddesc.bDeviceClass != VAR_0)
  return (VAR_1);

 VAR_8 = 0;
 VAR_9 = 0;

 switch (VAR_2->speed) {
 case 129:
 case 131:
 case 130:

  VAR_7 = FUNC_3(VAR_2, ((void*)0), &VAR_5, 1);
  if (VAR_7) {
   FUNC_0(0, "getting USB 2.0 HUB descriptor failed,"
       "error=%s\n", FUNC_2(VAR_7));
   break;
  }
  VAR_8 = VAR_5;
  if (VAR_8 > 127)
   VAR_8 = 127;

  if (VAR_2->speed == 130)
   VAR_9 = (FUNC_1(VAR_5) >> 5) & 3;
  break;

 case 128:
  VAR_7 = FUNC_4(VAR_2, ((void*)0), &VAR_6, 1);
  if (VAR_7) {
   FUNC_0(0, "Getting USB 3.0 HUB descriptor failed,"
       "error=%s\n", FUNC_2(VAR_7));
   break;
  }
  VAR_8 = VAR_6;
  if (VAR_8 > 16)
   VAR_8 = 16;
  break;

 default:
  VAR_7 = VAR_1;
  break;
 }

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_8;

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_9;

 return (VAR_7);
}
