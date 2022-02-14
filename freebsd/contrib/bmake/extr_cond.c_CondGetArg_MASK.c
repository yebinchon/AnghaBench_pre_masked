
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_6 (char*,int ,int,int*,void**) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(char **VAR_5, char **VAR_6, const char *VAR_7)
{
    char *VAR_8;
    int VAR_9;
    Buffer VAR_10;
    int VAR_11;
    char VAR_12;

    VAR_8 = *VAR_5;
    if (VAR_7 != ((void*)0))

 VAR_8++;

    if (*VAR_8 == '\0') {






 *VAR_6 = ((void*)0);
 return (0);
    }

    while (*VAR_8 == ' ' || *VAR_8 == '\t') {
 VAR_8++;
    }





    FUNC_4(&VAR_10, 16);

    VAR_11 = 0;
    for (;;) {
 VAR_12 = *VAR_8;
 if (VAR_12 == 0 || VAR_12 == ' ' || VAR_12 == '\t')
     break;
 if ((VAR_12 == '&' || VAR_12 == '|') && VAR_11 == 0)
     break;
 if (*VAR_8 == '$') {






     char *VAR_13;
     int VAR_14;
     void *VAR_15;

     VAR_13 = FUNC_6(VAR_8, VAR_4, VAR_2|VAR_3,
       &VAR_14, &VAR_15);
     FUNC_1(&VAR_10, FUNC_8(VAR_13), VAR_13);
     FUNC_7(VAR_15);
     VAR_8 += VAR_14;
     continue;
 }
 if (VAR_12 == '(')
     VAR_11++;
 else
     if (VAR_12 == ')' && --VAR_11 < 0)
  break;
 FUNC_0(&VAR_10, *VAR_8);
 VAR_8++;
    }

    *VAR_6 = FUNC_3(&VAR_10, &VAR_9);
    FUNC_2(&VAR_10, VAR_0);

    while (*VAR_8 == ' ' || *VAR_8 == '\t') {
 VAR_8++;
    }

    if (VAR_7 != ((void*)0) && *VAR_8++ != ')') {
 FUNC_5(VAR_1, "Missing closing parenthesis for %s()",
       VAR_7);
 return (0);
    }

    *VAR_5 = VAR_8;
    return (VAR_9);
}
