
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; } ;
typedef TYPE_1__ macro ;
struct TYPE_7__ {char const* start; int len; } ;
typedef TYPE_2__ arg ;




 int VAR_0 ;
 char* FUNC_0 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5 (const char *VAR_1, int VAR_2)
{
  int VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5 = -1;
  arg VAR_6[VAR_0];
  int VAR_7 = 128;
  const char *VAR_8 = VAR_1;
  macro *VAR_9 = 0;

  char *VAR_10 = 0;
  char *VAR_11 = 0;

  while (*VAR_1)
    {
      switch (VAR_7)
 {
 case 128:
   if (*VAR_1 == '%' && *(VAR_1 + 1) && (!VAR_2 || VAR_3 == 0))
     {
       VAR_9 = FUNC_2 (VAR_1 + 1);
       if (VAR_9)
  {

    VAR_11 = FUNC_3 (VAR_11, VAR_8, VAR_1 - VAR_8);
    VAR_8 = VAR_1;
    VAR_1 += 1 + FUNC_4 (VAR_9->name);
    while (*VAR_1 == ' ') ++VAR_1;
    if (*VAR_1 != '(')
      {
        VAR_7 = 128;
        VAR_9 = 0;
      }
    else
      {
        VAR_7 = 129;
        VAR_5 = 0;
        VAR_6[VAR_5].start = VAR_1 + 1;
        VAR_6[VAR_5].len = 0;
        VAR_8 = VAR_1 + 1;
      }
  }
     }
   break;
 case 129:
   if (VAR_4 == 0)
     {
       switch (*VAR_1)
  {
  case ',':
    VAR_5++;
    VAR_6[VAR_5].start = (VAR_1 + 1);
    VAR_6[VAR_5].len = 0;
    break;
  case ')':
    VAR_7 = 128;

    if (VAR_9)
      {
        VAR_10 = 0;
        VAR_10 = FUNC_0 (VAR_6, VAR_5, VAR_9);
        VAR_3++;
        if (VAR_10)
   {
     VAR_11 = FUNC_3 (VAR_11, VAR_10, FUNC_4 (VAR_10));
     FUNC_1 (VAR_10);
   }
      }
    else
      {
        VAR_11 = FUNC_3 (VAR_11, VAR_8, VAR_1 - VAR_8);
      }
    VAR_9 = 0;
    VAR_8 = VAR_1 + 1;
    break;
  case '(':
    VAR_4++;
  default:
    VAR_6[VAR_5].len++;
    break;
  }
     }
   else
     {
       if (*VAR_1 == ')')
  VAR_4--;
       if (VAR_5 > -1)
  VAR_6[VAR_5].len++;
     }

 }
      ++VAR_1;
    }

  if (VAR_8 != VAR_1)
    VAR_11 = FUNC_3 (VAR_11, VAR_8, VAR_1 - VAR_8);

  return VAR_11;
}
