
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char**,size_t*,char*,...) ;

__attribute__((used)) static int
FUNC_1(char** VAR_0, size_t* VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 int VAR_4 = 0;
 uint8_t VAR_5;

 if(VAR_3 < 2) {
  if(VAR_3 == 1)
   VAR_2 *= 10;
  return FUNC_0(VAR_0, VAR_1, "0.%02ld", (long)VAR_2);
 }

 VAR_4 += FUNC_0(VAR_0, VAR_1, "%d", (int)VAR_2);
 for(VAR_5=0; VAR_5<VAR_3-2; VAR_5++)
  VAR_4 += FUNC_0(VAR_0, VAR_1, "0");
 return VAR_4;
}
