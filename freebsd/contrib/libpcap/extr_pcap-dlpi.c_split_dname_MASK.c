
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (char*) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_4, u_int *VAR_5, char *VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 long VAR_9;




 VAR_7 = VAR_4 + FUNC_1(VAR_4) - 1;
 if (*VAR_7 < '0' || *VAR_7 > '9') {
  FUNC_0(VAR_6, VAR_2, "%s missing unit number",
      VAR_4);
  return (((void*)0));
 }


 while (VAR_7-1 >= VAR_4 && *(VAR_7-1) >= '0' && *(VAR_7-1) <= '9')
  VAR_7--;

 VAR_3 = 0;
 VAR_9 = FUNC_2(VAR_7, &VAR_8, 10);
 if (*VAR_8 != '\0') {
  FUNC_0(VAR_6, VAR_2, "%s bad unit number", VAR_4);
  return (((void*)0));
 }
 if (VAR_3 == VAR_0 || VAR_9 > VAR_1) {
  FUNC_0(VAR_6, VAR_2, "%s unit number too large",
      VAR_4);
  return (((void*)0));
 }
 if (VAR_9 < 0) {
  FUNC_0(VAR_6, VAR_2, "%s unit number is negative",
      VAR_4);
  return (((void*)0));
 }
 *VAR_5 = (u_int)VAR_9;
 return (VAR_7);
}
