
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_device {int dummy; } ;
struct bbb_transfer {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bbb_transfer* FUNC_0 (struct usb_device*,int,int ) ;
 int FUNC_1 (struct bbb_transfer*) ;
 int FUNC_2 (struct bbb_transfer*,int const*,int,int ) ;

usb_error_t
FUNC_3(struct usb_device *VAR_3, uint8_t VAR_4)
{
 static const uint8_t VAR_5[3] = { 0x1b, 0x5a, 0x01 };
 struct bbb_transfer *VAR_6;
 usb_error_t VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_0);
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_7 = FUNC_2(VAR_6, VAR_5, sizeof(VAR_5), VAR_2);
 FUNC_1(VAR_6);
 return (VAR_7);
}
