
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const) ;

int FUNC_1(const char *VAR_0, int *VAR_1, int *VAR_2)
{
 int VAR_3 = 0;

 if (!*VAR_0)
  return -1;


 *VAR_2 = -1;
 if (FUNC_0("hlLb", *VAR_0)) {
  VAR_3 = *VAR_0++;
  if (VAR_3 == *VAR_0) {
   switch (*VAR_0++) {

   case 'h':
    VAR_3 = 'b';
    break;
   }
  }
 }


 if ((*VAR_0 == '\0') || !FUNC_0("iuxs", *VAR_0))
  return -1;


 if (*VAR_0 != 's')
  *VAR_2 = VAR_3 == 'b' ? 1 :
    VAR_3 == 'h' ? 2 :
    VAR_3 == 'l' ? 4 : -1;
 *VAR_1 = *VAR_0++;


 if (*VAR_0)
  return -1;
 return 0;
}
