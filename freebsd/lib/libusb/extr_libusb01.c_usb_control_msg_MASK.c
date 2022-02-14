
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
typedef int uint16_t ;
struct LIBUSB20_CONTROL_SETUP_DECODED {int bmRequestType; int bRequest; int wValue; int wIndex; int wLength; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct LIBUSB20_CONTROL_SETUP_DECODED*) ;
 int FUNC_1 (void*,struct LIBUSB20_CONTROL_SETUP_DECODED*,char*,int*,int,int ) ;

int
FUNC_2(usb_dev_handle * VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, char *VAR_6, int VAR_7, int VAR_8)
{
 struct LIBUSB20_CONTROL_SETUP_DECODED VAR_9;
 int VAR_10;
 uint16_t VAR_11;

 FUNC_0(VAR_0, &VAR_9);

 VAR_9.bmRequestType = VAR_2;
 VAR_9.bRequest = VAR_3;
 VAR_9.wValue = VAR_4;
 VAR_9.wIndex = VAR_5;
 VAR_9.wLength = VAR_7;

 VAR_10 = FUNC_1((void *)VAR_1, &VAR_9, VAR_6,
     &VAR_11, VAR_8, 0);

 if (VAR_10)
  return (-1);

 return (VAR_11);
}
