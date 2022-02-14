
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct libusb20_device {int dummy; } ;
struct LIBUSB20_CONTROL_SETUP_DECODED {int bmRequestType; int wValue; int wIndex; int wLength; int bRequest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct LIBUSB20_CONTROL_SETUP_DECODED*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct libusb20_device*,struct LIBUSB20_CONTROL_SETUP_DECODED*,void*,int *,int,int) ;
 int FUNC_2 (void*,int ,int) ;

int
FUNC_3(struct libusb20_device *VAR_9,
    uint8_t VAR_10, uint16_t VAR_11, void *VAR_12, uint16_t VAR_13)
{
 struct LIBUSB20_CONTROL_SETUP_DECODED VAR_14;
 int VAR_15;
 int VAR_16;


 FUNC_2(VAR_12, 0, VAR_13);

 if (VAR_13 < 4) {

  return (VAR_3);
 }
 FUNC_0(VAR_0, &VAR_14);





 VAR_14.bmRequestType =
     VAR_7 |
     VAR_5 |
     VAR_2;
 VAR_14.bRequest = VAR_6;
 VAR_14.wValue = (VAR_1 << 8) | VAR_10;
 VAR_14.wIndex = VAR_11;
 VAR_14.wLength = 4;

 VAR_15 = FUNC_1(VAR_9, &VAR_14,
     VAR_12, ((void*)0), 1000, VAR_8);
 if (VAR_15) {

  VAR_14.wLength = 255;
  VAR_16 = 0;
 } else {

  VAR_14.wLength = *(uint8_t *)VAR_12;
  VAR_16 = VAR_8;
 }
 if (VAR_14.wLength > VAR_13) {

  VAR_14.wLength = VAR_13;
 }
 VAR_15 = FUNC_1(VAR_9, &VAR_14, VAR_12, ((void*)0), 1000, VAR_16);
 if (VAR_15)
  return (VAR_15);

 if (((uint8_t *)VAR_12)[1] != VAR_1)
  return (VAR_4);
 return (0);
}
