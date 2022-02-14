
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_string_descriptor {int bLength; int * bString; int bDescriptorType; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const) ;
 int FUNC_1 (char const*) ;

uint8_t
FUNC_2(void *VAR_1, uint16_t VAR_2, const char *VAR_3)
{
 struct usb_string_descriptor *VAR_4 = VAR_1;
 uint8_t VAR_5;
 int VAR_6;

 if (VAR_2 < 2) {

  return (0);
 }
 VAR_2 = ((VAR_2 / 2) - 1);

 VAR_6 = FUNC_1(VAR_3);

 if (VAR_6 < 0) {
  VAR_6 = 0;
 }
 if (VAR_6 > 126) {
  VAR_6 = 126;
 }
 if (VAR_2 > VAR_6) {
  VAR_2 = VAR_6;
 }
 VAR_5 = (VAR_2 + 1) * 2;

 VAR_4->bLength = VAR_5;
 VAR_4->bDescriptorType = VAR_0;

 while (VAR_2--) {
  FUNC_0(VAR_4->bString[VAR_2], 0, VAR_3[VAR_2]);
 }
 return (VAR_5);
}
