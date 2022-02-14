
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 char** FUNC_1 (char**,unsigned int) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char const*,char*) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (char*,char*,size_t) ;
 size_t FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*) ;

__attribute__((used)) static unsigned
FUNC_11 (const char *VAR_1, char ***VAR_2)
{
    unsigned VAR_3, VAR_4;
    FILE *VAR_5;
    char VAR_6[256];
    char **VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

    VAR_5 = FUNC_6 (VAR_1, "r");
    if (VAR_5 == ((void*)0))
 FUNC_2 (1, "cannot open %s", VAR_1);
    VAR_4 = VAR_3 = 0;
    while (FUNC_5 (VAR_6, sizeof(VAR_6), VAR_5) != ((void*)0)) {
 size_t VAR_11;

 VAR_6[FUNC_9(VAR_6, "\r\n")] = '\0';
 if (VAR_3 >= VAR_4) {
     VAR_4 = FUNC_7(VAR_4 + 16, VAR_4 * 2);
     VAR_7 = FUNC_1 (VAR_7, VAR_4 * sizeof(char **));
 }
 VAR_11 = FUNC_10(VAR_6);
 if (VAR_9 + VAR_11 + 1 >= VAR_10) {
     VAR_9 = VAR_8 = FUNC_0 (VAR_0);
     VAR_10 = VAR_8 + VAR_0;
 }
 FUNC_8 (VAR_9, VAR_6, VAR_11 + 1);
 VAR_7[VAR_3++] = VAR_9;
 VAR_9 += VAR_11 + 1;
    }
    if (VAR_3 == 0)
 FUNC_3(1, "%s is an empty file, no words to try", VAR_1);
    *VAR_2 = VAR_7;
    FUNC_4(VAR_5);
    return VAR_3;
}
