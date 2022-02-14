
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_timeout_t ;
typedef scalar_t__ usb_error_t ;
typedef void uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_process {int up_mtx; } ;
struct usb_device_request {int bmRequestType; int wLength; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct usb_process*) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ,struct usb_device_request*,void*,scalar_t__,scalar_t__*,int ) ;

usb_error_t
FUNC_4(struct usb_device *VAR_2, struct usb_process *VAR_3,
    struct usb_device_request *VAR_4, void *VAR_5, uint16_t VAR_6,
    uint16_t *VAR_7, usb_timeout_t VAR_8)
{
 usb_error_t VAR_9;
 uint16_t VAR_10;


 VAR_10 = FUNC_0(VAR_4->wLength);


 if (FUNC_2(VAR_3)) {
  VAR_9 = VAR_1;
  goto done;
 }


 VAR_9 = FUNC_3(VAR_2, VAR_3->up_mtx,
     VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

done:


 if ((VAR_10 != 0) && (VAR_4->bmRequestType & VAR_0)) {
  if (VAR_9)
   FUNC_1(VAR_5, 0, VAR_10);
  else if (VAR_7 && *VAR_7 != VAR_10)
   FUNC_1(((uint8_t *)VAR_5) + *VAR_7, 0, VAR_10 - *VAR_7);
 }
 return (VAR_9);
}
