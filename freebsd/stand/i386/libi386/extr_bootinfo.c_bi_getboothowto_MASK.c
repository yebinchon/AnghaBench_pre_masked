
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (char**,char*) ;

int
FUNC_7(char *VAR_3)
{
    char *VAR_4, *VAR_5, *VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_7 = FUNC_1(VAR_3);
    VAR_7 |= FUNC_0();


    VAR_6 = VAR_5 = FUNC_5(FUNC_3("console"));
    VAR_8 = 0;
    while (VAR_5 != ((void*)0)) {
 VAR_4 = FUNC_6(&VAR_5, " ,");
 if (*VAR_4 == '\0')
  continue;
 if (!FUNC_4(VAR_4, "vidconsole"))
     VAR_8 = 1;
 else if (!FUNC_4(VAR_4, "comconsole"))
     VAR_7 |= VAR_2;
 else if (!FUNC_4(VAR_4, "nullconsole"))
     VAR_7 |= VAR_1;
    }

    if (VAR_8 && (VAR_7 & VAR_2))
 VAR_7 |= VAR_0;





    if (!FUNC_4(VAR_6, "vidconsole"))
 VAR_7 &= ~VAR_2;

    FUNC_2(VAR_6);

    return(VAR_7);
}
