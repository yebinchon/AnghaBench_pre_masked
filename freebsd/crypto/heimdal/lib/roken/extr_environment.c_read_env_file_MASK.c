
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char**,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 char** FUNC_5 (char**,int) ;
 char* FUNC_6 (char*,char) ;
 size_t FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(FILE *VAR_3, char ***VAR_4, int *VAR_5)
{
    int VAR_6 = 0;
    int VAR_7;
    char **VAR_8;
    char VAR_9[VAR_0], *VAR_10, *VAR_11;
    char **VAR_12;
    int VAR_13 = 0;

    *VAR_5 = 0;

    for(VAR_6 = 0; *VAR_4 != ((void*)0) && (*VAR_4)[VAR_6] != ((void*)0); VAR_6++);
    VAR_8 = *VAR_4;




    while (FUNC_1(VAR_9, VAR_0, VAR_3) != ((void*)0)) {
 VAR_9[FUNC_7(VAR_9, "#\n")] = '\0';

 for(VAR_10 = VAR_9; FUNC_4((unsigned char)*VAR_10); VAR_10++);
 if (*VAR_10 == '\0')
     continue;


 VAR_11 = FUNC_6(VAR_10, '=');
 if (VAR_11 == ((void*)0))
     continue;

 if((VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11 - VAR_10 + 1)) >= 0) {
     char *VAR_14 = FUNC_8(VAR_10);
     if(VAR_14 == ((void*)0)) {
  VAR_13 = VAR_1;
  break;
     }
     FUNC_3(VAR_8[VAR_7]);
     VAR_8[VAR_7] = VAR_14;
     (*VAR_5)++;
     continue;
 }

 VAR_12 = FUNC_5(VAR_8, (VAR_6+2) * sizeof (char *));
 if(VAR_12 == ((void*)0)) {
     VAR_13 = VAR_1;
     break;
 }

 VAR_8 = VAR_12;
 VAR_8[VAR_6] = FUNC_8(VAR_10);
 if(VAR_8[VAR_6] == ((void*)0)) {
     VAR_13 = VAR_1;
     break;
 }
 VAR_8[++VAR_6] = ((void*)0);
 (*VAR_5)++;
    }
    if(FUNC_0(VAR_3))
 VAR_13 = VAR_2;
    *VAR_4 = VAR_8;
    return VAR_13;
}
