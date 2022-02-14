
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct libusb20_transfer {struct libusb20_device* pdev; } ;
struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct libusb20_device*) ;
 int FUNC_1 (struct libusb20_device*,int) ;
 scalar_t__ FUNC_2 (struct libusb20_transfer*) ;
 scalar_t__ FUNC_3 (struct libusb20_transfer*) ;
 int FUNC_4 (struct libusb20_transfer*) ;
 scalar_t__ FUNC_5 (struct libusb20_transfer*) ;
 int FUNC_6 (struct libusb20_transfer*,void*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct libusb20_transfer*) ;

uint8_t
FUNC_8(struct libusb20_transfer *VAR_1,
    void *VAR_2, uint32_t VAR_3, uint32_t *VAR_4,
    uint32_t VAR_5)
{
 struct libusb20_device *VAR_6 = VAR_1->pdev;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint8_t VAR_9;


 if (VAR_4 != ((void*)0))
  *VAR_4 = 0;


 if (FUNC_5(VAR_1))
  return (VAR_0);

 do {

  VAR_7 =
      FUNC_3(VAR_1);

  if (VAR_7 > VAR_3)
   VAR_7 = VAR_3;


  FUNC_6(VAR_1, VAR_2,
      VAR_7, VAR_5);


  FUNC_7(VAR_1);


  while (FUNC_0(VAR_6) == 0) {

   if (FUNC_5(VAR_1) == 0)
    break;

   FUNC_1(VAR_6, -1);
  }

  VAR_8 = FUNC_2(VAR_1);


  if (VAR_4 != ((void*)0))
   VAR_4[0] += VAR_8;


  VAR_9 = FUNC_4(VAR_1);
  if (VAR_9)
   break;


  if (VAR_8 != VAR_7)
   break;


  VAR_2 = ((uint8_t *)VAR_2) + VAR_7;
  VAR_3 = VAR_3 - VAR_7;

 } while (VAR_3 != 0);

 return (VAR_9);
}
