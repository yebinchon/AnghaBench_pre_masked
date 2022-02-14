
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 () ;
 char** FUNC_6 (int) ;
 char* FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char const*,scalar_t__) ;
 int FUNC_11 (char const*,char* const*,int ,char*,char**,char**,int) ;
 int VAR_3 ;
 int FUNC_12 (int,int*,int ) ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (const char *VAR_4, char *VAR_5)
{
  char *VAR_6;
  int VAR_7, VAR_8;
  int VAR_9;
  const char **VAR_10;
  char *VAR_11, *VAR_12;
  char *VAR_13 = FUNC_7 ();

  FUNC_9 ("run: %s %s", VAR_4, VAR_5);


  VAR_9 = 0;
  for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
    if (*VAR_6 == ' ')
      VAR_9++;
  VAR_9++;
  VAR_10 = FUNC_6 (sizeof (char *) * (VAR_9 + 3));
  VAR_9 = 0;
  VAR_10[VAR_9++] = VAR_4;
  VAR_6 = VAR_5;
  while (1)
    {
      while (*VAR_6 == ' ')
 ++VAR_6;
      VAR_10[VAR_9++] = VAR_6;
      while (*VAR_6 != ' ' && *VAR_6 != 0)
 VAR_6++;
      if (*VAR_6 == 0)
 break;
      *VAR_6++ = 0;
    }
  VAR_10[VAR_9++] = ((void*)0);

  VAR_7 = FUNC_11 (VAR_10[0], (char * const *) VAR_10, VAR_3, VAR_13,
    &VAR_11, &VAR_12, VAR_0 | VAR_1);

  if (VAR_7 == -1)
    {
      FUNC_9 (FUNC_13 (VAR_2));

      FUNC_8 (VAR_11, VAR_12);
    }

  VAR_7 = FUNC_12 (VAR_7, & VAR_8, 0);

  if (VAR_7 == -1)
    {

      FUNC_8 (FUNC_4("wait: %s"), FUNC_13 (VAR_2));
    }
  else if (FUNC_2 (VAR_8))
    {

      FUNC_8 (FUNC_4("subprocess got fatal signal %d"), FUNC_3 (VAR_8));
    }
  else if (FUNC_1 (VAR_8))
    {
      if (FUNC_0 (VAR_8) != 0)

 FUNC_10 (FUNC_4("%s exited with status %d"),
     VAR_4, FUNC_0 (VAR_8));
    }
  else
    FUNC_5 ();
}
