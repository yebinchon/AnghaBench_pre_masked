
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {TYPE_2__* bus; } ;
struct mtx {int dummy; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {scalar_t__ (* set_address ) (struct usb_device*,struct mtx*,int ) ;} ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct usb_device*,struct mtx*,int ) ;
 int FUNC_4 (struct mtx*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct usb_device*,struct mtx*,struct usb_device_request*,int *,int ,int *,int) ;

usb_error_t
FUNC_6(struct usb_device *VAR_5, struct mtx *VAR_6, uint16_t VAR_7)
{
 struct usb_device_request VAR_8;
 usb_error_t VAR_9;

 FUNC_0(6, "setting device address=%d\n", VAR_7);

 VAR_8.bmRequestType = VAR_3;
 VAR_8.bRequest = VAR_0;
 FUNC_2(VAR_8.wValue, VAR_7);
 FUNC_2(VAR_8.wIndex, 0);
 FUNC_2(VAR_8.wLength, 0);

 VAR_9 = VAR_2;


 if (VAR_5->bus->methods->set_address != ((void*)0))
  VAR_9 = (VAR_5->bus->methods->set_address) (VAR_5, VAR_6, VAR_7);

 if (VAR_9 != VAR_2)
  goto done;


 VAR_9 = FUNC_5(VAR_5, VAR_6, &VAR_8, ((void*)0),
     VAR_1, ((void*)0), 1000);

done:

 FUNC_4(VAR_6,
     FUNC_1(VAR_4));

 return (VAR_9);
}
