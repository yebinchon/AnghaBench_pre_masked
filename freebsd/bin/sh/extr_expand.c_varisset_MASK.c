
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** p; long nparam; } ;


 char* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char const) ;
 TYPE_1__ VAR_2 ;
 long FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, int VAR_4)
{

 if (*VAR_3 == '!')
  return FUNC_0();
 else if (*VAR_3 == '@' || *VAR_3 == '*') {
  if (*VAR_2.p == ((void*)0))
   return 0;

  if (VAR_4) {
   char **VAR_5;

   for (VAR_5 = VAR_2.p; *VAR_5; VAR_5++)
    if (**VAR_5 != '\0')
     return 1;
   return 0;
  }
 } else if (FUNC_1(*VAR_3)) {
  char *VAR_6;
  long VAR_7;

  VAR_1 = 0;
  VAR_7 = FUNC_2(VAR_3, ((void*)0), 10);
  if (VAR_1 != 0 || VAR_7 > VAR_2.nparam)
   return 0;

  if (VAR_7 == 0)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_2.p[VAR_7 - 1];

  if (VAR_4 && (VAR_6 == ((void*)0) || *VAR_6 == '\0'))
   return 0;
 }
 return 1;
}
