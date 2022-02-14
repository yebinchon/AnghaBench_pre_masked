
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
typedef int uint8_t ;
typedef int uint32_t ;
struct libusb20_transfer {int dummy; } ;
struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct libusb20_device*) ;
 struct libusb20_transfer* FUNC_1 (struct libusb20_device*,int) ;
 int FUNC_2 (struct libusb20_transfer*,int,int,int) ;

__attribute__((used)) static struct libusb20_transfer *
FUNC_3(usb_dev_handle * VAR_6, uint8_t VAR_7)
{
 struct libusb20_device *VAR_8 = (void *)VAR_6;
 struct libusb20_transfer *VAR_9;
 int VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;

 VAR_12 = (VAR_7 & VAR_0) * 2;

 if (VAR_7 & VAR_1) {

  VAR_12 |= 1;
 }
 VAR_13 = FUNC_0(VAR_8);


 if (VAR_13 == VAR_4) {
  VAR_11 = 256;
 } else if (VAR_13 == VAR_3) {
  VAR_11 = 4096;
 } else if (VAR_13 == VAR_5) {
  VAR_11 = 65536;
 } else {
  VAR_11 = 16384;
 }

 VAR_9 = FUNC_1(VAR_8, VAR_12);

 if (VAR_9 == ((void*)0))
  return (VAR_9);

 VAR_10 = FUNC_2(VAR_9, VAR_11, 1, VAR_7);
 if (VAR_10 == VAR_2) {

  return (VAR_9);
 } else if (VAR_10) {
  return (((void*)0));
 }

 return (VAR_9);
}
