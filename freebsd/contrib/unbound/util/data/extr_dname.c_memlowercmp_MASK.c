
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1(uint8_t* VAR_0, uint8_t* VAR_1, uint8_t VAR_2)
{
 while(VAR_2--) {
  if(*VAR_0 != *VAR_1 && FUNC_0((unsigned char)*VAR_0) != FUNC_0((unsigned char)*VAR_1)) {
   if(FUNC_0((unsigned char)*VAR_0) < FUNC_0((unsigned char)*VAR_1))
    return -1;
   return 1;
  }
  VAR_0++;
  VAR_1++;
 }
 return 0;
}
