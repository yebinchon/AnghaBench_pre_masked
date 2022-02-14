
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(uint8_t *VAR_2, uint8_t *VAR_3)
{
 int VAR_4;
 int VAR_5;
 uint8_t *VAR_6 = (uint8_t*) &VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 ++) {
  VAR_5 = ((int)(VAR_2[VAR_4] & VAR_6[VAR_4])) - ((int)(VAR_3[VAR_4] & VAR_6[VAR_4]));
  if (VAR_5) {
   break;
  }
 }
 return VAR_5;
}
