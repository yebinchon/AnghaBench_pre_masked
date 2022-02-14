
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char) ;

char *
FUNC_8 (
    char *VAR_1,
    char *VAR_2)
{
    char *VAR_3;
    char *VAR_4;
    char *VAR_5;


    FUNC_0 (VAR_0, "Include: Prefix path - \"%s\"\n"
        "Include: FilePathname - \"%s\"\n",
         VAR_1, VAR_2);





    if (!VAR_1 || (!*VAR_1) ||
        (*VAR_2 == '/') ||
         (VAR_2[1] == ':'))
    {
        VAR_4 = FUNC_2 (FUNC_5 (VAR_2) + 1);
        FUNC_4 (VAR_4, VAR_2);
        goto ConvertBackslashes;
    }



    VAR_3 = FUNC_2 (FUNC_5 (VAR_1) + 1);
    FUNC_4 (VAR_3, VAR_1);






    while (*VAR_2 && (!FUNC_6 (VAR_2, "../", 3)))
    {


        VAR_5 = FUNC_7 (VAR_3, '/');
        if (!VAR_5)
        {
            goto ConcatenatePaths;
        }

        *VAR_5 = 0;
        VAR_2 += 3;
    }






    VAR_5 = FUNC_7 (VAR_3, '/');
    if (VAR_5)
    {
        *VAR_5 = 0;
    }



ConcatenatePaths:
    VAR_4 = FUNC_2 (
        FUNC_5 (VAR_3) + FUNC_5 (VAR_2) + 2);
    if (VAR_5 && *VAR_3)
    {
        FUNC_4 (VAR_4, VAR_3);
        FUNC_3 (VAR_4, "/");
    }
    FUNC_3 (VAR_4, VAR_2);



ConvertBackslashes:
    FUNC_1 (VAR_4);

    FUNC_0 (VAR_0, "Include: Merged Pathname - \"%s\"\n",
         VAR_4);
    return (VAR_4);
}
