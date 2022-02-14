
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_interface {int pnpinfo; int subdev; } ;
struct usb_device {int enum_sx; } ;


 int FUNC_0 (int,char*,struct usb_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct usb_device*,int *,int *,scalar_t__) ;
 struct usb_interface* FUNC_3 (struct usb_device*,scalar_t__) ;

void
FUNC_4(struct usb_device *VAR_3, uint8_t VAR_4,
    uint8_t VAR_5)
{
 struct usb_interface *VAR_6;
 uint8_t VAR_7;

 if (VAR_3 == ((void*)0)) {

  return;
 }
 FUNC_0(4, "udev=%p\n", VAR_3);

 FUNC_1(&VAR_3->enum_sx, VAR_0);







 if (VAR_4 != VAR_1) {
  VAR_7 = VAR_4;
  VAR_4 = VAR_7 + 1;
 } else {
  VAR_7 = 0;
  VAR_4 = VAR_2;
 }



 for (; VAR_7 != VAR_4; VAR_7++) {

  VAR_6 = FUNC_3(VAR_3, VAR_7);
  if (VAR_6 == ((void*)0)) {

   break;
  }
  FUNC_2(VAR_3, &VAR_6->subdev,
      &VAR_6->pnpinfo, VAR_5);
 }
}
