
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_3)
{
    char VAR_4;
    char *VAR_5;
    int VAR_6 = (*VAR_3 != 'i') ? 1 : 0;
    char *VAR_7 = &VAR_3[7 + VAR_6];


    while (*VAR_7 == ' ' || *VAR_7 == '\t')
 VAR_7++;

    if (*VAR_7 != '"' && *VAR_7 != '<') {
 FUNC_0(VAR_0,
     ".include filename must be delimited by '\"' or '<'");
 return;
    }






    if (*VAR_7 == '<') {
 VAR_4 = '>';
    } else {
 VAR_4 = '"';
    }


    for (VAR_5 = ++VAR_7; *VAR_5 && *VAR_5 != VAR_4; VAR_5++)
 continue;

    if (*VAR_5 != VAR_4) {
 FUNC_0(VAR_0,
       "Unclosed %cinclude filename. '%c' expected",
       '.', VAR_4);
 return;
    }
    *VAR_5 = '\0';





    VAR_7 = FUNC_2(((void*)0), VAR_7, VAR_2, VAR_1);

    FUNC_1(VAR_7, VAR_4 == '>', (*VAR_3 == 'd'), VAR_6);
    FUNC_3(VAR_7);
}
