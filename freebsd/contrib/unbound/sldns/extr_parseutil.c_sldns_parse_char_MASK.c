
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,char const**) ;

int
FUNC_1(uint8_t *VAR_0, const char** VAR_1)
{
 switch (**VAR_1) {

 case '\0': return 0;

 case '\\': *VAR_1 += 1;
   return FUNC_0(VAR_0, VAR_1);

 default: *VAR_0 = (uint8_t)*(*VAR_1)++;
   return 1;
 }
}
