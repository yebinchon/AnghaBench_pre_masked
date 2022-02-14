
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int* FUNC_2 (int *,scalar_t__) ;
 int* FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned char) ;

void
FUNC_6(sldns_buffer* VAR_1, uint8_t* VAR_2)
{
 uint8_t VAR_3;
 int VAR_4 = 0;
 if(VAR_2 >= FUNC_3(VAR_1))
  return;
 VAR_3 = *VAR_2++;
 while(VAR_3) {
  if(FUNC_0(VAR_3)) {
   if((size_t)FUNC_1(VAR_3, *VAR_2)
    >= FUNC_4(VAR_1))
    return;
   VAR_2 = FUNC_2(VAR_1, FUNC_1(VAR_3, *VAR_2));
   VAR_3 = *VAR_2++;
   if(VAR_4++ > VAR_0)
    return;
   continue;
  }
  if(VAR_2+VAR_3 >= FUNC_3(VAR_1))
   return;
  while(VAR_3--) {
   *VAR_2 = (uint8_t)FUNC_5((unsigned char)*VAR_2);
   VAR_2++;
  }
  if(VAR_2 >= FUNC_3(VAR_1))
   return;
  VAR_3 = *VAR_2++;
 }
}
