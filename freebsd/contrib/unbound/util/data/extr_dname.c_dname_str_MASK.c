
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;

void FUNC_1(uint8_t* VAR_2, char* VAR_3)
{
 size_t VAR_4 = 0;
 uint8_t VAR_5 = 0;
 char* VAR_6 = VAR_3;
 if(!VAR_2 || !*VAR_2) {
  *VAR_6++ = '.';
  *VAR_6 = 0;
  return;
 }
 VAR_5 = *VAR_2++;
 while(VAR_5) {
  if(VAR_5 > VAR_1) {
   *VAR_6++ = '#';
   *VAR_6 = 0;
   return;
  }
  VAR_4 += VAR_5+1;
  if(VAR_4 >= VAR_0-1) {
   *VAR_6++ = '&';
   *VAR_6 = 0;
   return;
  }
  while(VAR_5--) {
   if(FUNC_0((unsigned char)*VAR_2)
    || *VAR_2 == '-' || *VAR_2 == '_'
    || *VAR_2 == '*')
    *VAR_6++ = *(char*)VAR_2++;
   else {
    *VAR_6++ = '?';
    VAR_2++;
   }
  }
  *VAR_6++ = '.';
  VAR_5 = *VAR_2++;
 }
 *VAR_6 = 0;
}
