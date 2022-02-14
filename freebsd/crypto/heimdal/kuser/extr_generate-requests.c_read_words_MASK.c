
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 char** FUNC_0 (char**,unsigned int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char*,char*) ;

__attribute__((used)) static unsigned
FUNC_8 (const char *VAR_0, char ***VAR_1)
{
    unsigned VAR_2, VAR_3;
    FILE *VAR_4;
    char VAR_5[256];
    char **VAR_6 = ((void*)0);

    VAR_4 = FUNC_6 (VAR_0, "r");
    if (VAR_4 == ((void*)0))
 FUNC_1 (1, "cannot open %s", VAR_0);
    VAR_3 = VAR_2 = 0;
    while (FUNC_5 (VAR_5, sizeof(VAR_5), VAR_4) != ((void*)0)) {
 VAR_5[FUNC_7(VAR_5, "\r\n")] = '\0';
 if (VAR_2 >= VAR_3) {
     VAR_3 += 16;
     VAR_6 = FUNC_0 (VAR_6, VAR_3 * sizeof(char **));
 }
 VAR_6[VAR_2++] = FUNC_3 (VAR_5);
    }
    *VAR_1 = VAR_6;
    if (VAR_2 == 0)
 FUNC_2(1, "%s is an empty file, no words to try", VAR_0);
    FUNC_4(VAR_4);
    return VAR_2;
}
