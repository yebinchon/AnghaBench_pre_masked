
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char) ;

int
FUNC_2(register uint8_t* VAR_0, register uint8_t* VAR_1)
{
 register uint8_t VAR_2, VAR_3;
 FUNC_0(VAR_0 && VAR_1);
 VAR_2 = *VAR_0++;
 VAR_3 = *VAR_1++;
 while( VAR_2 != 0 || VAR_3 != 0 ) {


  if(VAR_2 != VAR_3) {
   if(VAR_2 < VAR_3)
    return -1;
   return 1;
  }
  FUNC_0(VAR_2 == VAR_3 && VAR_2 != 0);

  while(VAR_2--) {

   if(*VAR_0 != *VAR_1 &&
    FUNC_1((unsigned char)*VAR_0) != FUNC_1((unsigned char)*VAR_1)) {
    if(FUNC_1((unsigned char)*VAR_0) < FUNC_1((unsigned char)*VAR_1))
     return -1;
    return 1;
   }
   VAR_0++;
   VAR_1++;
  }

  VAR_2 = *VAR_0++;
  VAR_3 = *VAR_1++;
 }
 return 0;
}
