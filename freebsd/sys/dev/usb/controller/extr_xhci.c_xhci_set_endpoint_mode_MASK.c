
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_endpoint {TYPE_1__* edesc; } ;
struct usb_device {int speed; } ;
struct TYPE_2__ {int bmAttributes; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static usb_error_t
FUNC_0(struct usb_device *VAR_5, struct usb_endpoint *VAR_6,
    uint8_t VAR_7)
{
 switch (VAR_7) {
 case 129:
  return (0);
 case 128:
  if (VAR_4 == 0 ||
      (VAR_6->edesc->bmAttributes & VAR_1) != VAR_0 ||
      VAR_5->speed != VAR_3)
   return (VAR_2);
  return (0);
 default:
  return (VAR_2);
 }
}
