
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_descriptor {int dummy; } ;
struct usb_config_descriptor {int wTotalLength; } ;


 int FUNC_0 (int ) ;

struct usb_descriptor *
FUNC_1(struct usb_config_descriptor *VAR_0,
    struct usb_descriptor *VAR_1)
{
 uint8_t *VAR_2;
 uint8_t *VAR_3;
 uint8_t *VAR_4;
 uint8_t *VAR_5;


 if (VAR_0 == ((void*)0))
  return (((void*)0));


 VAR_3 = (uint8_t *)VAR_0;
 VAR_4 = VAR_3 + FUNC_0(VAR_0->wTotalLength);
 VAR_5 = (uint8_t *)VAR_1;


 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_3;
 else
  VAR_5 = VAR_5 + VAR_5[0];


 if ((VAR_5 < VAR_3) || (VAR_5 >= VAR_4))
  return (((void*)0));


 VAR_2 = VAR_5 + VAR_5[0];
 if ((VAR_2 < VAR_3) || (VAR_2 > VAR_4))
  return (((void*)0));


 if (VAR_5[0] < 3)
  return (((void*)0));


 return ((struct usb_descriptor *)VAR_5);
}
