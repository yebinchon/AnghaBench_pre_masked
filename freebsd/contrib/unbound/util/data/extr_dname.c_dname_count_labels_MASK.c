
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



int
FUNC_0(uint8_t* VAR_0)
{
 uint8_t VAR_1;
 int VAR_2 = 1;

 VAR_1 = *VAR_0++;
 while(VAR_1) {
  VAR_2++;
  VAR_0 += VAR_1;
  VAR_1 = *VAR_0++;
 }
 return VAR_2;
}
