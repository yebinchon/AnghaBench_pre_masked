
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_size_t ;
typedef scalar_t__ uint8_t ;



__attribute__((used)) static uint8_t
FUNC_0(usb_size_t *VAR_0, uint8_t VAR_1,
    uint8_t VAR_2, uint8_t VAR_3)
{
 usb_size_t VAR_4 = (usb_size_t)-1;
 usb_size_t VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;

 VAR_7 = 0;



 for (VAR_6 = VAR_1; VAR_6 < VAR_2; VAR_6++) {

  VAR_5 = 0;


  for (VAR_8 = VAR_6; VAR_8 < VAR_2; VAR_8++) {
   if (VAR_3 & (1U << (VAR_8 - VAR_6)))
    VAR_5 += VAR_0[VAR_8];
  }


  if (VAR_4 >= VAR_5) {
   VAR_4 = VAR_5;
   VAR_7 = VAR_6;
  }


  if (VAR_3 & (1U << (VAR_2 - 1 - VAR_6)))
   break;
 }
 return (VAR_7);
}
