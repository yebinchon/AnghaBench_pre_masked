
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char**,int) ;

int
FUNC_8 (int *VAR_1, int VAR_2, int VAR_3,
  int VAR_4, char *VAR_5)
{
  int VAR_6;
  char *VAR_7;
  const char *VAR_8;
  int VAR_9;
  int VAR_10 = VAR_4 ? 2 : 1;

  VAR_8 = FUNC_4 ("PS2");
  if (VAR_8 == ((void*)0))
    VAR_8 = ">";

  FUNC_6 ("%s ", VAR_8);
  FUNC_3 (VAR_0);

  VAR_7 = FUNC_0 ((char *) ((void*)0), 0, VAR_5);

  if (VAR_7 == ((void*)0))
    FUNC_2 ("one or more choice numbers");

  VAR_9 = 0;



  while (1)
    {
      char *VAR_11;
      int VAR_12, VAR_13;

      while (FUNC_5 (*VAR_7))
 VAR_7 += 1;
      if (*VAR_7 == '\0' && VAR_9 == 0)
 FUNC_2 ("one or more choice numbers");
      else if (*VAR_7 == '\0')
 break;

      VAR_12 = FUNC_7 (VAR_7, &VAR_11, 10);
      if (VAR_7 == VAR_11 || VAR_12 < 0
   || VAR_12 > VAR_2 + VAR_10 - 1)
 FUNC_1 ("Argument must be choice number");
      VAR_7 = VAR_11;

      if (VAR_12 == 0)
 FUNC_1 ("cancelled");

      if (VAR_12 < VAR_10)
 {
   VAR_9 = VAR_2;
   for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13 += 1)
     VAR_1[VAR_13] = VAR_13;
   break;
 }
      VAR_12 -= VAR_10;

      for (VAR_13 = VAR_9 - 1; VAR_13 >= 0 && VAR_12 < VAR_1[VAR_13]; VAR_13 -= 1)
 {
 }

      if (VAR_13 < 0 || VAR_12 != VAR_1[VAR_13])
 {
   int VAR_14;
   for (VAR_14 = VAR_9 - 1; VAR_14 > VAR_13; VAR_14 -= 1)
     VAR_1[VAR_14 + 1] = VAR_1[VAR_14];
   VAR_1[VAR_13 + 1] = VAR_12;
   VAR_9 += 1;
 }
    }

  if (VAR_9 > VAR_3)
    FUNC_1 ("Select no more than %d of the above", VAR_3);

  return VAR_9;
}
