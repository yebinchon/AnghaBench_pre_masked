
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {int bRequest; int wIndex; int wValue; int bmRequestType; int wLength; } ;
struct usb_device {int dummy; } ;
struct uaudio_mixer_node {int* wValue; scalar_t__ wIndex; int type; } ;
typedef int data ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,int) ;




 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct usb_device*,int *,struct usb_device_request*,int*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct usb_device *VAR_5, uint16_t VAR_6,
    uint8_t VAR_7, struct uaudio_mixer_node *VAR_8)
{
 struct usb_device_request VAR_9;
 int VAR_10;
 uint8_t VAR_11[2 + (2 * 3)];
 usb_error_t VAR_12;

 if (VAR_8->wValue[0] == -1)
  return (0);

 if (VAR_6 >= VAR_3)
  return (0);
 else if (VAR_6 >= VAR_2) {
  if (VAR_7 == 131) {
   VAR_9.bRequest = VAR_0;
   FUNC_3(VAR_9.wLength, 2);
  } else {
   VAR_9.bRequest = VAR_1;
   FUNC_3(VAR_9.wLength, 8);
  }
 } else {
  uint16_t VAR_13 = FUNC_2(VAR_8->type);

  VAR_9.bRequest = VAR_7;
  FUNC_3(VAR_9.wLength, VAR_13);
 }

 VAR_9.bmRequestType = VAR_4;
 FUNC_3(VAR_9.wValue, VAR_8->wValue[0]);
 FUNC_3(VAR_9.wIndex, VAR_8->wIndex);

 FUNC_4(VAR_11, 0, sizeof(VAR_11));

 VAR_12 = FUNC_6(VAR_5, ((void*)0), &VAR_9, VAR_11);
 if (VAR_12) {
  FUNC_0("err=%s\n", FUNC_7(VAR_12));
  return (0);
 }

 if (VAR_6 >= VAR_3) {
  VAR_10 = 0;
 } else if (VAR_6 >= VAR_2) {
  switch (VAR_7) {
  case 131:
   VAR_10 = (VAR_11[0] | (VAR_11[1] << 8));
   break;
  case 129:
   VAR_10 = (VAR_11[2] | (VAR_11[3] << 8));
   break;
  case 130:
   VAR_10 = (VAR_11[4] | (VAR_11[5] << 8));
   break;
  case 128:
   VAR_10 = (VAR_11[6] | (VAR_11[7] << 8));
   break;
  default:
   VAR_10 = 0;
   break;
  }
 } else {
  VAR_10 = (VAR_11[0] | (VAR_11[1] << 8));
 }

 if (VAR_7 == 131 || VAR_7 == 129 || VAR_7 == 130)
  VAR_10 = FUNC_5(VAR_8->type, VAR_10);

 FUNC_1(3, "val=%d\n", VAR_10);

 return (VAR_10);
}
