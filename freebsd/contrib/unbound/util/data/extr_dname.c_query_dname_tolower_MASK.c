
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (unsigned char) ;

void
FUNC_1(uint8_t* VAR_0)
{

 uint8_t VAR_1;
 VAR_1 = *VAR_0;
 while(VAR_1) {
  VAR_0++;
  while(VAR_1--) {
   *VAR_0 = (uint8_t)FUNC_0((unsigned char)*VAR_0);
   VAR_0++;
  }
  VAR_1 = *VAR_0;
 }
}
