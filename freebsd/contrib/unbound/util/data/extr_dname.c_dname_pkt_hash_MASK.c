
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sldns_buffer ;
typedef int hashvalue_type ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int,int ) ;
 int FUNC_3 (int) ;
 int* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (unsigned char) ;

hashvalue_type
FUNC_6(sldns_buffer* VAR_1, uint8_t* VAR_2, hashvalue_type VAR_3)
{
 uint8_t VAR_4[VAR_0+1];
 uint8_t VAR_5;
 int VAR_6;


 VAR_5 = *VAR_2++;
 while(VAR_5) {
  if(FUNC_0(VAR_5)) {

   VAR_2 = FUNC_4(VAR_1, FUNC_1(VAR_5, *VAR_2));
   VAR_5 = *VAR_2++;
   continue;
  }
  FUNC_3(VAR_5 <= VAR_0);
  VAR_4[0] = VAR_5;
  VAR_6=0;
  while(VAR_5--) {
   VAR_4[++VAR_6] = (uint8_t)FUNC_5((unsigned char)*VAR_2);
   VAR_2++;
  }
  VAR_3 = FUNC_2(VAR_4, VAR_4[0] + 1, VAR_3);
  VAR_5 = *VAR_2++;
 }

 return VAR_3;
}
