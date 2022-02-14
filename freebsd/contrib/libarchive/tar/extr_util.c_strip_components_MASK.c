
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(const char *VAR_0, int VAR_1)
{

 while (VAR_1 > 0) {
  switch (*VAR_0++) {
  case '/':



   VAR_1--;
   break;
  case '\0':

   return (((void*)0));
  }
 }






 for (;;) {
  switch (*VAR_0) {
  case '/':



   ++VAR_0;
   break;
  case '\0':
   return (((void*)0));
  default:
   return (VAR_0);
  }
 }
}
