
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



int
FUNC_0(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2=0; VAR_2<VAR_1 ; VAR_2++)
  if ( (VAR_0[VAR_2/8] & (1 << (7 - (VAR_2%8)))) == 0)
   break;
 for (VAR_3=VAR_2+1; VAR_3 < VAR_1; VAR_3++)
  if ( (VAR_0[VAR_3/8] & (1 << (7 - (VAR_3%8)))) != 0)
   return -1;
 return VAR_2;
}
