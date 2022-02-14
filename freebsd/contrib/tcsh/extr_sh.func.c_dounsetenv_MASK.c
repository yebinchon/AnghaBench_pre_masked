
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef char Char ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char** VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct command*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_16 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char*,int ) ;
 int FUNC_12 () ;
 int * FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 () ;
 int VAR_17 ;
 char* FUNC_22 (int) ;

void
FUNC_23(Char **VAR_18, struct command *VAR_19)
{
    Char **VAR_20, *VAR_21, *VAR_22, *VAR_23;
    int VAR_24, VAR_25;

    FUNC_3(VAR_19);



    for (VAR_25 = 0, VAR_20 = VAR_14; *VAR_20; VAR_20++) {
 for (VAR_24 = 0, VAR_21 = *VAR_20; *VAR_21 && *VAR_21 != '='; VAR_21++, VAR_24++)
     continue;
 if (VAR_24 > VAR_25)
     VAR_25 = VAR_24;
    }

    VAR_23 = FUNC_22((VAR_25 + 1) * sizeof(Char));
    FUNC_5(VAR_23, VAR_17);

    while (++VAR_18 && *VAR_18)
 for (VAR_25 = 1; VAR_25;)
     for (VAR_25 = 0, VAR_20 = VAR_14; *VAR_20; VAR_20++) {
  for (VAR_22 = VAR_23, VAR_21 = *VAR_20; *VAR_21 && *VAR_21 != '='; *VAR_22++ = *VAR_21++)
      continue;
  *VAR_22 = '\0';
  if (!FUNC_1(VAR_23, *VAR_18))
      continue;
  VAR_25 = 1;







  FUNC_4(VAR_23);

  if (FUNC_11(VAR_23, VAR_12)) {
      VAR_8 = 0;
      VAR_6 = 0;
      VAR_7 = 0;
      FUNC_9();
  }




  else if (FUNC_14(VAR_23)) {
      VAR_0 = FUNC_13("LANG") == ((void*)0) &&
   FUNC_13("LC_CTYPE") == ((void*)0);

      VAR_7 = 0;
      FUNC_8();
      if (VAR_6 && !VAR_7)
   FUNC_10();

  }
  break;
     }
    FUNC_6(VAR_23);
}
