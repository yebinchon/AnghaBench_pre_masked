
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
typedef int uint32_t ;
struct libusb20_transfer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct libusb20_transfer*) ;
 int FUNC_3 (struct libusb20_transfer*) ;
 int FUNC_4 (struct libusb20_transfer*) ;
 scalar_t__ FUNC_5 (struct libusb20_transfer*) ;
 int FUNC_6 (struct libusb20_transfer*,char*,int,int) ;
 int FUNC_7 (struct libusb20_transfer*,char*,int,int) ;
 int FUNC_8 (struct libusb20_transfer*) ;
 struct libusb20_transfer* FUNC_9 (int *,int) ;

__attribute__((used)) static int
FUNC_10(usb_dev_handle * VAR_2, int VAR_3, char *VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 struct libusb20_transfer *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 char *VAR_12;

 VAR_8 = FUNC_9(VAR_2, VAR_3);
 if (VAR_8 == ((void*)0))
  return (-1);

 if (FUNC_5(VAR_8)) {

  return (-1);
 }
 VAR_10 = FUNC_3(VAR_8);
 VAR_12 = VAR_4;





 do {

  VAR_9 = VAR_5;
  if (VAR_9 > VAR_10) {

   VAR_9 = VAR_10;
  }
  if (VAR_7)
   FUNC_7(VAR_8, VAR_4, VAR_9, VAR_6);
  else
   FUNC_6(VAR_8, VAR_4, VAR_9, VAR_6);

  FUNC_8(VAR_8);

  while (1) {

   if (FUNC_0((void *)VAR_2) != 0) {

    return (-1);
   }
   if (FUNC_5(VAR_8) == 0) {

    break;
   }

   FUNC_1((void *)VAR_2, -1);
  }

  switch (FUNC_4(VAR_8)) {
  case 0:

   break;
  case 128:

   return (-VAR_1);
  default:

   return (-VAR_0);
  }
  VAR_11 = FUNC_2(VAR_8);

  VAR_4 += VAR_11;
  VAR_5 -= VAR_11;

  if (VAR_11 != VAR_9) {

   break;
  }
 } while (VAR_5 > 0);

 return (VAR_4 - VAR_12);
}
