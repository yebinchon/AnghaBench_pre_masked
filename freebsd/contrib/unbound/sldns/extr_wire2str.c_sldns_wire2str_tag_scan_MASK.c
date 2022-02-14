
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*,char) ;

int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 size_t VAR_4, VAR_5;
 int VAR_6 = 0;
 if(*VAR_1 < 1)
  return -1;
 VAR_5 = (size_t)((*VAR_0)[0]);
 if(*VAR_1 < 1+VAR_5)
  return -1;
 for(VAR_4=0; VAR_4<VAR_5; VAR_4++)
  if(!FUNC_0((unsigned char)(*VAR_0)[VAR_4+1]))
   return -1;
 for(VAR_4=0; VAR_4<VAR_5; VAR_4++)
  VAR_6 += FUNC_1(VAR_2, VAR_3, "%c", (char)(*VAR_0)[VAR_4+1]);
 (*VAR_0)+=VAR_5+1;
 (*VAR_1)-=(VAR_5+1);
 return VAR_6;
}
