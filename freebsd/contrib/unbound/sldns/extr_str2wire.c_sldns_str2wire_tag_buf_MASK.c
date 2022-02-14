
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (scalar_t__*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 size_t VAR_6 = FUNC_3(VAR_3);
 const char* VAR_7;

 if (VAR_6 > 255)
  return VAR_2;
 if(*VAR_5 < VAR_6+1)
  return VAR_0;
 for (VAR_7 = VAR_3; *VAR_7; VAR_7++) {
  if(!FUNC_1((unsigned char)*VAR_7))
   return FUNC_0(VAR_2, VAR_7-VAR_3);
 }
 VAR_4[0] = (uint8_t)VAR_6;
 FUNC_2(VAR_4+1, VAR_3, VAR_6);
 *VAR_5 = VAR_6+1;
 return VAR_1;
}
