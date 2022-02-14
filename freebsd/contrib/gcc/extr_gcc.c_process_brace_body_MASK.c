
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * part1; } ;


 scalar_t__ FUNC_0 (int,unsigned int) ;
 scalar_t__ FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 char* FUNC_4 (char const*,int) ;
 int FUNC_5 (int *,char const*,unsigned int) ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static const char *
FUNC_6 (const char *VAR_3, const char *VAR_4, const char *VAR_5,
      int VAR_6, int VAR_7)
{
  const char *VAR_8, *VAR_9;
  unsigned int VAR_10;
  bool VAR_11 = 0;



  VAR_8 = VAR_3;
  VAR_10 = 1;
  for (;;)
    {
      if (*VAR_3 == '{')
 VAR_10++;
      else if (*VAR_3 == '}')
 {
   if (!--VAR_10)
     break;
 }
      else if (*VAR_3 == ';' && VAR_10 == 1)
 break;
      else if (*VAR_3 == '%' && VAR_3[1] == '*' && VAR_10 == 1)
 VAR_11 = 1;
      else if (*VAR_3 == '\0')
 goto invalid;
      VAR_3++;
    }

  VAR_9 = VAR_3;
  while (VAR_9[-1] == ' ' || VAR_9[-1] == '\t')
    VAR_9--;

  if (VAR_11 && !VAR_6)
    goto invalid;

  if (VAR_7)
    {



      char *VAR_12 = FUNC_4 (VAR_8, VAR_9 - VAR_8);
      if (!VAR_11)
 {
   if (FUNC_1 (VAR_12, 0, ((void*)0)) < 0)
     return 0;
 }
      else
 {



   unsigned int VAR_13 = VAR_5 - VAR_4;
   int VAR_14;

   for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
     if (!FUNC_5 (VAR_2[VAR_14].part1, VAR_4, VAR_13)
  && FUNC_0 (VAR_14, VAR_13))
       {
  if (FUNC_1 (VAR_12, 0,
          &VAR_2[VAR_14].part1[VAR_13]) < 0)
    return 0;

  FUNC_3 (VAR_14, 1);
  VAR_1 = ((void*)0);
       }
 }
    }

  return VAR_3;

 invalid:
  FUNC_2 ("braced spec body '%s' is invalid", VAR_8);
}
