
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char** FUNC_5 (int) ;
 char* FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;
 int VAR_6 ;
 int FUNC_10 (int ,char const*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*,int,int) ;
 int FUNC_13 (char const*,char* const*,int ,char*,char**,char**,int) ;
 int VAR_7 ;
 int FUNC_14 (int,int*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16 (char *VAR_10, const char *VAR_11)
{
  char *VAR_12;
  int VAR_13, VAR_14, VAR_15;
  int VAR_16;
  const char **VAR_17;
  char *VAR_18, *VAR_19;
  char *VAR_20 = FUNC_6 ();
  int VAR_21;
  char VAR_22;
  int VAR_23 = -1;
  int VAR_24 = -1;


  VAR_16 = 0;

  for (VAR_12 = VAR_10; *VAR_12; VAR_12++)
    if (*VAR_12 == ' ')
      VAR_16++;

  VAR_16++;
  VAR_17 = FUNC_5 (sizeof (char *) * (VAR_16 + 3));
  VAR_16 = 0;
  VAR_12 = VAR_10;

  while (1)
    {
      while (*VAR_12 == ' ' && *VAR_12 != 0)
 VAR_12++;

      if (*VAR_12 == 0)
 break;

      VAR_21 = (*VAR_12 == '\'' || *VAR_12 == '"');
      VAR_22 = (VAR_21) ? *VAR_12++ : ' ';
      VAR_17[VAR_16++] = VAR_12;

      while (*VAR_12 != VAR_22 && *VAR_12 != 0)
 VAR_12++;

      if (*VAR_12 == 0)
 break;

      *VAR_12++ = 0;

      if (VAR_21)
 VAR_12++;
    }
  VAR_17[VAR_16++] = ((void*)0);




  FUNC_11 (VAR_9);
  FUNC_11 (VAR_8);


  VAR_23 = FUNC_12 (VAR_11, VAR_2 | VAR_1 | VAR_0, 0666);
  if (VAR_23 == -1)
    FUNC_10 (FUNC_4("can't open temporary file `%s': %s"), VAR_11,
    FUNC_15 (VAR_6));


  VAR_24 = FUNC_8 (VAR_5);
  if (VAR_24 == -1)
    FUNC_10 (FUNC_4("can't redirect stdout: `%s': %s"), VAR_11, FUNC_15 (VAR_6));


  FUNC_9 (VAR_23, VAR_5);

  VAR_13 = FUNC_13 (VAR_17[0], (char * const *) VAR_17, VAR_7, VAR_20,
    &VAR_18, &VAR_19, VAR_3 | VAR_4);


  FUNC_9 (VAR_24, VAR_5);


  FUNC_7 (VAR_23);

  if (VAR_13 == -1)
    {
      FUNC_10 (FUNC_4("%s %s: %s"), VAR_18, VAR_19, FUNC_15 (VAR_6));
      return 1;
    }

  VAR_15 = 0;
  VAR_13 = FUNC_14 (VAR_13, &VAR_14, 0);

  if (VAR_13 == -1)
    {
      FUNC_10 (FUNC_4("wait: %s"), FUNC_15 (VAR_6));
      VAR_15 = 1;
    }
  else if (FUNC_2 (VAR_14))
    {
      FUNC_10 (FUNC_4("subprocess got fatal signal %d"), FUNC_3 (VAR_14));
      VAR_15 = 1;
    }
  else if (FUNC_1 (VAR_14))
    {
      if (FUNC_0 (VAR_14) != 0)
 {
   FUNC_10 (FUNC_4("%s exited with status %d"), VAR_10,
          FUNC_0 (VAR_14));
   VAR_15 = 1;
 }
    }
  else
    VAR_15 = 1;

  return VAR_15;
}
