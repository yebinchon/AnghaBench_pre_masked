
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* from; char* to; } ;
typedef TYPE_1__ substring_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char**,int ) ;
 int FUNC_2 (char const*,char**,int) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_1, const char *VAR_2, substring_t VAR_3[])
{
 char *VAR_4;
 int VAR_5 = 0;

 if (!VAR_2)
  return 1;

 while(1) {
  int VAR_6 = -1;
  VAR_4 = FUNC_3(VAR_2, '%');
  if (!VAR_4)
   return FUNC_4(VAR_2, VAR_1) == 0;

  if (FUNC_6(VAR_2, VAR_1, VAR_4-VAR_2))
   return 0;

  VAR_1 += VAR_4 - VAR_2;
  VAR_2 = VAR_4 + 1;

  if (FUNC_0(*VAR_2))
   VAR_6 = FUNC_2(VAR_2, (char **) &VAR_2, 10);
  else if (*VAR_2 == '%') {
   if (*VAR_1++ != '%')
    return 0;
   VAR_2++;
   continue;
  }

  if (VAR_5 >= VAR_0)
   return 0;

  VAR_3[VAR_5].from = VAR_1;
  switch (*VAR_2++) {
  case 's':
   if (FUNC_5(VAR_1) == 0)
    return 0;
   else if (VAR_6 == -1 || VAR_6 > FUNC_5(VAR_1))
    VAR_6 = FUNC_5(VAR_1);
   VAR_3[VAR_5].to = VAR_1 + VAR_6;
   break;
  case 'd':
   FUNC_1(VAR_1, &VAR_3[VAR_5].to, 0);
   goto num;
  case 'u':
   FUNC_2(VAR_1, &VAR_3[VAR_5].to, 0);
   goto num;
  case 'o':
   FUNC_2(VAR_1, &VAR_3[VAR_5].to, 8);
   goto num;
  case 'x':
   FUNC_2(VAR_1, &VAR_3[VAR_5].to, 16);
  num:
   if (VAR_3[VAR_5].to == VAR_3[VAR_5].from)
    return 0;
   break;
  default:
   return 0;
  }
  VAR_1 = VAR_3[VAR_5].to;
  VAR_5++;
 }
}
