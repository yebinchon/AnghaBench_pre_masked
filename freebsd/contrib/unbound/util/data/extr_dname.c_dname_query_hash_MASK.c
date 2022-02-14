
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int hashvalue_type ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char) ;

hashvalue_type
FUNC_3(uint8_t* VAR_1, hashvalue_type VAR_2)
{
 uint8_t VAR_3[VAR_0+1];
 uint8_t VAR_4;
 int VAR_5;


 VAR_4 = *VAR_1++;
 while(VAR_4) {
  FUNC_1(VAR_4 <= VAR_0);
  VAR_3[0] = VAR_4;
  VAR_5=0;
  while(VAR_4--) {
   VAR_3[++VAR_5] = (uint8_t)FUNC_2((unsigned char)*VAR_1);
   VAR_1++;
  }
  VAR_2 = FUNC_0(VAR_3, VAR_3[0] + 1, VAR_2);
  VAR_4 = *VAR_1++;
 }

 return VAR_2;
}
