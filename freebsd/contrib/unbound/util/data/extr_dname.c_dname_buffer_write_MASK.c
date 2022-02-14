
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int sldns_buffer ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;

int
FUNC_3(sldns_buffer* VAR_0, uint8_t* VAR_1)
{
 uint8_t VAR_2;

 if(FUNC_0(VAR_0) < 1)
  return 0;
 VAR_2 = *VAR_1++;
 FUNC_2(VAR_0, VAR_2);
 while(VAR_2) {
  if(FUNC_0(VAR_0) < (size_t)VAR_2+1)
   return 0;
  FUNC_1(VAR_0, VAR_1, VAR_2);
  VAR_1 += VAR_2;
  VAR_2 = *VAR_1++;
  FUNC_2(VAR_0, VAR_2);
 }
 return 1;
}
