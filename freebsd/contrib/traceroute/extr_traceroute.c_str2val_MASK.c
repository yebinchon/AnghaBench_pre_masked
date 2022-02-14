
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int ,char const*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;

int
FUNC_3(register const char *VAR_2, register const char *VAR_3,
    register int VAR_4, register int VAR_5)
{
 register const char *VAR_6;
 register int VAR_7;
 char *VAR_8;

 if (VAR_2[0] == '0' && (VAR_2[1] == 'x' || VAR_2[1] == 'X')) {
  VAR_6 = VAR_2 + 2;
  VAR_7 = (int)FUNC_2(VAR_6, &VAR_8, 16);
 } else
  VAR_7 = (int)FUNC_2(VAR_2, &VAR_8, 10);
 if (*VAR_8 != '\0') {
  FUNC_0(VAR_1, "%s: \"%s\" bad value for %s \n",
      VAR_0, VAR_2, VAR_3);
  FUNC_1(1);
 }
 if (VAR_7 < VAR_4 && VAR_4 >= 0) {
  if (VAR_4 == 0)
   FUNC_0(VAR_1, "%s: %s must be >= %d\n",
       VAR_0, VAR_3, VAR_4);
  else
   FUNC_0(VAR_1, "%s: %s must be > %d\n",
       VAR_0, VAR_3, VAR_4 - 1);
  FUNC_1(1);
 }
 if (VAR_7 > VAR_5 && VAR_5 >= 0) {
  FUNC_0(VAR_1, "%s: %s must be <= %d\n", VAR_0, VAR_3, VAR_5);
  FUNC_1(1);
 }
 return (VAR_7);
}
