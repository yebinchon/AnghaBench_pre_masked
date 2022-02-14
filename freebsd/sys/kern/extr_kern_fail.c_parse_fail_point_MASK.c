
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fail_point_setting {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct fail_point_setting*,char*) ;

__attribute__((used)) static char *
FUNC_1(struct fail_point_setting *VAR_1, char *VAR_2)
{



 uint8_t VAR_3;

 VAR_3 = 1;

 VAR_2 = FUNC_0(VAR_1, VAR_2);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 while (*VAR_2 != '\0') {
  VAR_3++;
  if (VAR_2[0] != '-' || VAR_2[1] != '>' ||
          (VAR_2 = FUNC_0(VAR_1, VAR_2+2)) == ((void*)0) ||
          VAR_3 > VAR_0)
   return (((void*)0));
 }
 return (VAR_2);
}
