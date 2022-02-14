
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_interface {scalar_t__ alt_index; TYPE_1__* idesc; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int bAlternateSetting; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_device*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct usb_device*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;
 struct usb_interface* FUNC_4 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct usb_device*,int *,scalar_t__,int ) ;

usb_error_t
FUNC_6(struct usb_device *VAR_1,
    uint8_t VAR_2, uint8_t VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_4(VAR_1, VAR_2);
 usb_error_t VAR_5;
 uint8_t VAR_6;


 VAR_6 = FUNC_2(VAR_1);

 if (VAR_4 == ((void*)0)) {
  VAR_5 = VAR_0;
  goto done;
 }
 if (VAR_4->alt_index == VAR_3) {




  VAR_5 = 0;
  goto done;
 }
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5) {
  goto done;
 }
 if (VAR_4->alt_index != VAR_3) {

  VAR_5 = VAR_0;
  goto done;
 }

 VAR_5 = FUNC_5(VAR_1, ((void*)0), VAR_2,
     VAR_4->idesc->bAlternateSetting);

done:
 if (VAR_6)
  FUNC_3(VAR_1);
 return (VAR_5);
}
