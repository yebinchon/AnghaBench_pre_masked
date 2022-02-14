
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_ss_endpoint_companion_descriptor {int bLength; int bDescriptorType; int bMaxBurst; int bmAttributes; int wBytesPerInterval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct libusb_ss_endpoint_companion_descriptor* FUNC_0 (int) ;

int
FUNC_1(const void *VAR_5, int VAR_6,
    struct libusb_ss_endpoint_companion_descriptor **VAR_7)
{
 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || VAR_6 < 1)
  return (VAR_2);

 if (VAR_6 > 65535)
  VAR_6 = 65535;

 *VAR_7 = ((void*)0);

 while (VAR_6 != 0) {
  uint8_t VAR_8;
  uint8_t VAR_9;

  VAR_8 = ((const uint8_t *)VAR_5)[0];
  VAR_9 = ((const uint8_t *)VAR_5)[1];

  if (VAR_8 < 2 || VAR_8 > VAR_6)
   break;

  if (VAR_8 >= VAR_1 &&
      VAR_9 == VAR_0) {
   struct libusb_ss_endpoint_companion_descriptor *VAR_10;

   VAR_10 = FUNC_0(sizeof(*VAR_10));
   if (VAR_10 == ((void*)0))
    return (VAR_4);

   VAR_10->bLength = VAR_1;
   VAR_10->bDescriptorType = VAR_9;
   VAR_10->bMaxBurst = ((const uint8_t *)VAR_5)[2];
   VAR_10->bmAttributes = ((const uint8_t *)VAR_5)[3];
   VAR_10->wBytesPerInterval = ((const uint8_t *)VAR_5)[4] |
       (((const uint8_t *)VAR_5)[5] << 8);

   *VAR_7 = VAR_10;

   return (0);
  }

  VAR_5 = ((const uint8_t *)VAR_5) + VAR_8;
  VAR_6 -= VAR_8;
 }
 return (VAR_3);
}
