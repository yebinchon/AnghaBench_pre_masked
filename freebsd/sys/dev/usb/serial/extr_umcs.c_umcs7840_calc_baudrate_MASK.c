
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static usb_error_t
FUNC_0(uint32_t VAR_3, uint16_t *VAR_4, uint8_t *VAR_5)
{
 uint8_t VAR_6 = 0;

 if (VAR_3 > VAR_1[VAR_2 - 1])
  return (-1);

 for (VAR_6 = 0; VAR_6 < VAR_2 - 1 &&
     !(VAR_3 > VAR_1[VAR_6] && VAR_3 <= VAR_1[VAR_6 + 1]); ++VAR_6);
 if (VAR_3 == 0)
  *VAR_4 = 1;
 else
  *VAR_4 = VAR_1[VAR_6 + 1] / VAR_3;

 *VAR_5 = VAR_6 << VAR_0;
 return (0);
}
