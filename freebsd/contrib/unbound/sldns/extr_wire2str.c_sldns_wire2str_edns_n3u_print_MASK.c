
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (char**,size_t*,char*,...) ;

int FUNC_1(char** VAR_0, size_t* VAR_1, uint8_t* VAR_2,
 size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5 = 0;
 for(VAR_4=0; VAR_4<VAR_3; VAR_4++) {
  if(VAR_2[VAR_4] == 1)
   VAR_5 += FUNC_0(VAR_0, VAR_1, " SHA1");
  else VAR_5 += FUNC_0(VAR_0, VAR_1, " %d", (int)VAR_2[VAR_4]);
 }
 return VAR_5;
}
