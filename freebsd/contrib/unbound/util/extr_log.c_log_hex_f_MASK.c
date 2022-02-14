
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;


 int FUNC_0 (int,char*,char const*,unsigned int,...) ;

__attribute__((used)) static void
FUNC_1(enum verbosity_value VAR_0, const char* VAR_1, void* VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 uint8_t* VAR_6 = (uint8_t*)VAR_2;
 const char* VAR_7 = "0123456789ABCDEF";
 char VAR_8[1024+1];
 const size_t VAR_9 = 512;
 size_t VAR_10;

 if(VAR_3 == 0) {
  FUNC_0(VAR_0, "%s[%u]", VAR_1, (unsigned)VAR_3);
  return;
 }

 for(VAR_4=0; VAR_4<VAR_3; VAR_4+=VAR_9/2) {
  VAR_10 = VAR_9/2;
  if(VAR_3 - VAR_4 < VAR_9/2)
   VAR_10 = VAR_3 - VAR_4;
  for(VAR_5=0; VAR_5<VAR_10; VAR_5++) {
   VAR_8[VAR_5*2] = VAR_7[ VAR_6[VAR_4+VAR_5] >> 4 ];
   VAR_8[VAR_5*2 + 1] = VAR_7[ VAR_6[VAR_4+VAR_5] & 0xF ];
  }
  VAR_8[VAR_10*2] = 0;
  FUNC_0(VAR_0, "%s[%u:%u] %.*s", VAR_1, (unsigned)VAR_3,
   (unsigned)VAR_4, (int)VAR_10*2, VAR_8);
 }
}
