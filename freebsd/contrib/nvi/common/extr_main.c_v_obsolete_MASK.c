
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int *) ;

__attribute__((used)) static int
FUNC_6(
 char *VAR_1,
 char *VAR_2[])
{
 size_t VAR_3;
 char *VAR_4;
 while (*++VAR_2 && FUNC_1(VAR_2[0], "--"))
  if (VAR_2[0][0] == '+') {
   if (VAR_2[0][1] == '\0') {
    VAR_2[0] = FUNC_2("-c$");
    if (VAR_2[0] == ((void*)0))
     goto nomem;
   } else {
    VAR_4 = VAR_2[0];
    VAR_3 = FUNC_4(VAR_2[0]);
    VAR_2[0] = FUNC_0(VAR_3 + 2);
    if (VAR_2[0] == ((void*)0))
     goto nomem;
    VAR_2[0][0] = '-';
    VAR_2[0][1] = 'c';
    (void)FUNC_3(VAR_2[0] + 2, VAR_4 + 1, VAR_3);
   }
  } else if (VAR_2[0][0] == '-')
   if (VAR_2[0][1] == '\0') {
    VAR_2[0] = FUNC_2("-s");
    if (VAR_2[0] == ((void*)0)) {
nomem: FUNC_5(VAR_1, VAR_0, ((void*)0));
     return (1);
    }
   } else
    if ((VAR_2[0][1] == 'c' || VAR_2[0][1] == 'T' ||
        VAR_2[0][1] == 't' || VAR_2[0][1] == 'w') &&
        VAR_2[0][2] == '\0')
     ++VAR_2;
 return (0);
}
