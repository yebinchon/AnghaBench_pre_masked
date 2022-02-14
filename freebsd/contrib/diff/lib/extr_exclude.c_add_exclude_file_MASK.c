
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char) ;
 int * VAR_2 ;
 void FUNC_5 (struct exclude*,char const*,int) ;
 char* FUNC_6 (char*,size_t*) ;
 char* FUNC_7 (char*,size_t) ;

int
FUNC_8 (void (*VAR_3) (struct exclude *, char const *, int),
    struct exclude *VAR_4, char const *VAR_5, int VAR_6,
    char VAR_7)
{
  bool VAR_8 = VAR_5[0] == '-' && !VAR_5[1];
  FILE *VAR_9;
  char *VAR_10 = ((void*)0);
  char *VAR_11;
  char const *VAR_12;
  char const *VAR_13;
  size_t VAR_14 = 0;
  size_t VAR_15 = 0;
  int VAR_16;
  int VAR_17 = 0;

  if (VAR_8)
    VAR_9 = VAR_2;
  else if (! (VAR_9 = FUNC_2 (VAR_5, "r")))
    return -1;

  while ((VAR_16 = FUNC_3 (VAR_9)) != VAR_0)
    {
      if (VAR_15 == VAR_14)
 VAR_10 = FUNC_6 (VAR_10, &VAR_14);
      VAR_10[VAR_15++] = VAR_16;
    }

  if (FUNC_1 (VAR_9))
    VAR_17 = VAR_1;

  if (!VAR_8 && FUNC_0 (VAR_9) != 0)
    VAR_17 = VAR_1;

  VAR_10 = FUNC_7 (VAR_10, VAR_15 + 1);
  VAR_10[VAR_15] = VAR_7;
  VAR_13 = VAR_10 + VAR_15 + ! (VAR_15 == 0 || VAR_10[VAR_15 - 1] == VAR_7);
  VAR_12 = VAR_10;

  for (VAR_11 = VAR_10; VAR_11 < VAR_13; VAR_11++)
    if (*VAR_11 == VAR_7)
      {
 char *VAR_18 = VAR_11;

 if (FUNC_4 (VAR_7))
   {
     for (; ; VAR_18--)
       if (VAR_18 == VAR_12)
  goto next_pattern;
       else if (! FUNC_4 (VAR_18[-1]))
  break;
   }

 *VAR_18 = '\0';
 (*VAR_3) (VAR_4, VAR_12, VAR_6);

      next_pattern:
 VAR_12 = VAR_11 + 1;
      }

  VAR_1 = VAR_17;
  return VAR_17 ? -1 : 0;
}
