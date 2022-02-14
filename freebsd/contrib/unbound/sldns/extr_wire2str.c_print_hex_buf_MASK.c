
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char**,size_t*,char*,char const,char const) ;

__attribute__((used)) static int FUNC_1(char** VAR_0, size_t* VAR_1, uint8_t* VAR_2, size_t VAR_3)
{
 const char* VAR_4 = "0123456789ABCDEF";
 size_t VAR_5;
 for(VAR_5=0; VAR_5<VAR_3; VAR_5++) {
  (void)FUNC_0(VAR_0, VAR_1, "%c%c", VAR_4[(VAR_2[VAR_5]&0xf0)>>4],
   VAR_4[VAR_2[VAR_5]&0x0f]);
 }
 return (int)VAR_3*2;
}
