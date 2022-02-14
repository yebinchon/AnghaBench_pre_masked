
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 size_t FUNC_0 (char*) ;
 char FUNC_1 (unsigned char) ;

int
FUNC_2(uint8_t* VAR_0, char* VAR_1, char** VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_1);
 size_t VAR_4 = VAR_3;
 size_t VAR_5 = (size_t)*VAR_0;
 if(VAR_3 > VAR_5)
  return 0;
 VAR_0++;
 while(VAR_3--) {
  if(*VAR_1 != FUNC_1((unsigned char)*VAR_0)) {
   return 0;
  }
  VAR_1++; VAR_0++;
 }
 if(VAR_4 < VAR_5)
  *VAR_2 = (char *)VAR_0;
 else

  *VAR_2 = ((void*)0);
 return 1;
}
