
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

unsigned int
FUNC_1(const char *VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6 = VAR_5;
 const char *VAR_7 = VAR_4;
 unsigned int VAR_8 = 1;

 if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
  return (0);

 while (*VAR_7 != '\0') {
  if (VAR_2) {
   if (FUNC_0(VAR_7, "\\n", 2) == 0) {
    VAR_7++;
    VAR_8++;
    VAR_6 = VAR_1;
   } else if (*VAR_7 == '\n') {
    if (!VAR_6)
     VAR_8++;
    VAR_6 = VAR_0;
   }
  } else if (VAR_3) {
   if (*VAR_7 == '\n')
    VAR_8++;
  } else if (FUNC_0(VAR_7, "\\n", 2) == 0) {
   VAR_7++;
   VAR_8++;
  }
  VAR_7++;
 }

 return (VAR_8);
}
