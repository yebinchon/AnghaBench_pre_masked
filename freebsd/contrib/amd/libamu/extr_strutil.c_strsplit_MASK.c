
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voidp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;

char **
FUNC_6(char *VAR_2, int VAR_3, int VAR_4)
{
  char **VAR_5;
  int VAR_6 = 0;
  int VAR_7 = 0;

  VAR_5 = (char **) FUNC_4((VAR_6 + 1) * sizeof(char *));

  while (!VAR_7) {
    char *VAR_8;




    while (*VAR_2 && (VAR_3 == ' ' ? (FUNC_1((unsigned char)*VAR_2) && FUNC_2((unsigned char)*VAR_2)) : *VAR_2 == VAR_3))
      *VAR_2++ = '\0';




    if (!*VAR_2)
      break;




    VAR_8 = VAR_2;




    while (*VAR_2 && !(VAR_3 == ' ' ? (FUNC_1((unsigned char)*VAR_2) && FUNC_2((unsigned char)*VAR_2)) : *VAR_2 == VAR_3)) {
      if (*VAR_2++ == VAR_4) {



 VAR_2++;
 while (*VAR_2 && *VAR_2 != VAR_4)
   VAR_2++;
 if (*VAR_2 == VAR_4)
   VAR_2++;
      }
    }

    if (!*VAR_2)
      VAR_7 = 1;
    *VAR_2++ = '\0';




    VAR_5[VAR_6++] = VAR_8;
    VAR_5 = (char **) FUNC_5((voidp) VAR_5, (VAR_6 + 1) * sizeof(char *));
    if (FUNC_0(VAR_0))
      FUNC_3(VAR_1, "strsplit saved \"%s\"", VAR_8);
  }

  if (FUNC_0(VAR_0))
    FUNC_3(VAR_1, "strsplit saved a total of %d strings", VAR_6);

  VAR_5[VAR_6] = ((void*)0);

  return VAR_5;
}
