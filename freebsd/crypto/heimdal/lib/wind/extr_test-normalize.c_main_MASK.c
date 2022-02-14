
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int longname ;
typedef int filename ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,char const*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,unsigned int) ;

int
FUNC_9(int VAR_0, char **VAR_1)
{
    FILE *VAR_2;
    char VAR_3[1024];
    char VAR_4[256] = "NormalizationTest.txt";
    unsigned VAR_5 = 0;
    unsigned VAR_6 = 0;

    if (VAR_0 > 2)
 FUNC_1(1, "usage: %s [file]", VAR_1[0]);
    else if (VAR_0 == 2)
 FUNC_7(VAR_4, VAR_1[1], sizeof(VAR_4));

    VAR_2 = FUNC_4(VAR_4, "r");
    if (VAR_2 == ((void*)0)) {
 const char *VAR_7 = FUNC_5("srcdir");
 if (VAR_7 != ((void*)0)) {
     char VAR_8[256];
     FUNC_6(VAR_8, sizeof(VAR_8), "%s/%s", VAR_7, VAR_4);
     VAR_2 = FUNC_4(VAR_8, "r");
 }
 if (VAR_2 == ((void*)0))
     FUNC_0(1, "open %s", VAR_4);
    }
    while (FUNC_3(VAR_3, sizeof(VAR_3), VAR_2) != ((void*)0)) {
 VAR_6++;
 if (VAR_3[0] == '#')
     continue;
 if (VAR_3[0] == '@') {
     continue;
 }
 VAR_5 += FUNC_8(VAR_3, VAR_6);
    }
    FUNC_2(VAR_2);
    return VAR_5 != 0;
}
