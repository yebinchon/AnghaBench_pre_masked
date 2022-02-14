
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int,scalar_t__*,int) ;
 int FUNC_1 (struct usb_device*,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_5)
{
 u8 VAR_6 = 1;

 FUNC_0(VAR_5, FUNC_1(VAR_5, 0), 0x2a,
   VAR_1 | VAR_4 | VAR_3,
   0, 0, &VAR_6, 1);
 if (VAR_6 == 0) {
  FUNC_0(VAR_5, FUNC_2(VAR_5, 0), 0x29,
    VAR_2 | VAR_4 | VAR_3,
    1, 2000, ((void*)0), 0);
  return -VAR_0;
 }
 return 0;
}
