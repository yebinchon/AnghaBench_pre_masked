
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sb ;
typedef int macro_entry ;


 char FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 char* FUNC_6 (int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11 (const char *VAR_2, sb *VAR_3,
      const char **VAR_4, macro_entry **VAR_5)
{
  const char *VAR_6;
  char *VAR_7, *VAR_8;
  macro_entry *VAR_9;
  sb VAR_10;

  if (! FUNC_3 (*VAR_2)
      && (! VAR_1 || *VAR_2 != '.'))
    return 0;

  VAR_6 = VAR_2 + 1;
  while (FUNC_5 (*VAR_6))
    ++VAR_6;
  if (FUNC_4 (*VAR_6))
    ++VAR_6;

  VAR_7 = (char *) FUNC_1 (VAR_6 - VAR_2 + 1);
  FUNC_7 (VAR_7, VAR_2, VAR_6 - VAR_2);
  VAR_7[VAR_6 - VAR_2] = '\0';
  for (VAR_8 = VAR_7; *VAR_8 != '\0'; VAR_8++)
    *VAR_8 = FUNC_0 (*VAR_8);

  VAR_9 = (macro_entry *) FUNC_2 (VAR_0, VAR_7);

  if (VAR_9 == ((void*)0))
    return 0;


  FUNC_10 (&VAR_10);
  while (*VAR_6 != '\0' && *VAR_6 != '\n' && *VAR_6 != '\r')
    FUNC_8 (&VAR_10, *VAR_6++);

  FUNC_10 (VAR_3);
  *VAR_4 = FUNC_6 (0, &VAR_10, VAR_9, VAR_3);

  FUNC_9 (&VAR_10);


  if (VAR_5)
    *VAR_5 = VAR_9;

  return 1;
}
