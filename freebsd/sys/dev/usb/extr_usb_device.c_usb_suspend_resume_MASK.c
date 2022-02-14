
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_interface {int subdev; } ;
struct TYPE_2__ {scalar_t__ peer_suspended; } ;
struct usb_device {int bus; TYPE_1__ flags; int sr_sx; } ;


 int FUNC_0 (int,char*,struct usb_device*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct usb_device*,int ,scalar_t__) ;
 struct usb_interface* FUNC_5 (struct usb_device*,scalar_t__) ;

usb_error_t
FUNC_6(struct usb_device *VAR_2, uint8_t VAR_3)
{
 struct usb_interface *VAR_4;
 uint8_t VAR_5;

 if (VAR_2 == ((void*)0)) {

  return (0);
 }
 FUNC_0(4, "udev=%p do_suspend=%d\n", VAR_2, VAR_3);

 FUNC_3(&VAR_2->sr_sx, VAR_0);

 FUNC_1(VAR_2->bus);

 if (VAR_2->flags.peer_suspended == VAR_3) {
  FUNC_2(VAR_2->bus);

  return (0);
 }
 VAR_2->flags.peer_suspended = VAR_3;
 FUNC_2(VAR_2->bus);



 for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++) {

  VAR_4 = FUNC_5(VAR_2, VAR_5);
  if (VAR_4 == ((void*)0)) {

   break;
  }
  FUNC_4(VAR_2, VAR_4->subdev, VAR_3);
 }
 return (0);
}
