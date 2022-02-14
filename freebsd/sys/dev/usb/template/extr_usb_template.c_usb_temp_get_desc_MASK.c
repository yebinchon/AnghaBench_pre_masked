
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {int bmRequestType; int* wValue; int wIndex; int bRequest; } ;
struct usb_device {int speed; } ;







 int FUNC_0 (int ) ;

 int VAR_0 ;


 scalar_t__* FUNC_1 (struct usb_device*,scalar_t__*,int) ;
 scalar_t__* FUNC_2 (struct usb_device*) ;
 scalar_t__* FUNC_3 (struct usb_device*) ;
 scalar_t__* FUNC_4 (struct usb_device*) ;
 scalar_t__* FUNC_5 (struct usb_device*,int ,int) ;
 scalar_t__* FUNC_6 (struct usb_device*,struct usb_device_request*,scalar_t__*) ;

__attribute__((used)) static usb_error_t
FUNC_7(struct usb_device *VAR_1, struct usb_device_request *VAR_2,
    const void **VAR_3, uint16_t *VAR_4)
{
 const uint8_t *VAR_5;
 uint16_t VAR_6;

 VAR_5 = ((void*)0);
 VAR_6 = 0;

 switch (VAR_2->bmRequestType) {
 case 128:
  switch (VAR_2->bRequest) {
  case 130:
   goto tr_handle_get_descriptor;
  default:
   goto tr_stalled;
  }
 case 129:
  switch (VAR_2->bRequest) {
  case 130:
   goto tr_handle_get_class_descriptor;
  default:
   goto tr_stalled;
  }
 default:
  goto tr_stalled;
 }

tr_handle_get_descriptor:
 switch (VAR_2->wValue[1]) {
 case 134:
  if (VAR_2->wValue[0]) {
   goto tr_stalled;
  }
  VAR_5 = FUNC_2(VAR_1);
  goto tr_valid;
 case 133:
  if (VAR_1->speed != VAR_0) {
   goto tr_stalled;
  }
  if (VAR_2->wValue[0]) {
   goto tr_stalled;
  }
  VAR_5 = FUNC_4(VAR_1);
  goto tr_valid;
 case 132:
  if (VAR_1->speed != VAR_0) {
   goto tr_stalled;
  }
 case 135:
  VAR_5 = FUNC_1(VAR_1,
      &VAR_6, VAR_2->wValue[0]);
  goto tr_valid;
 case 131:
  VAR_5 = FUNC_5(VAR_1,
      FUNC_0(VAR_2->wIndex), VAR_2->wValue[0]);
  goto tr_valid;
 default:
  goto tr_stalled;
 }

tr_handle_get_class_descriptor:
 if (VAR_2->wValue[0]) {
  goto tr_stalled;
 }
 VAR_5 = FUNC_3(VAR_1);
 goto tr_valid;

tr_valid:
 if (VAR_5 == ((void*)0))
  goto tr_stalled;
 if (VAR_6 == 0)
  VAR_6 = VAR_5[0];
 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;
 return (0);

tr_stalled:

 VAR_6 = 0;
 VAR_5 = FUNC_6(VAR_1, VAR_2, &VAR_6);
 if (VAR_5 != ((void*)0))
  goto tr_valid;
 *VAR_3 = ((void*)0);
 *VAR_4 = 0;
 return (0);
}
