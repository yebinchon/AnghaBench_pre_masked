
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int failmsg ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (char*,int,char*,char const*) ;

void
FUNC_7(const char *VAR_0)
{
    FILE *VAR_1;
    char VAR_2[128];

    VAR_1 = FUNC_4("test.c", "w");
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_5(VAR_1, "#include <%s>\n", VAR_0);
    FUNC_3(VAR_1);

    FUNC_6(VAR_2, sizeof(VAR_2),
             "Header check failed; %s is not self-contained", VAR_0);

    if (!FUNC_2("test.c"))
        FUNC_1("%s", VAR_2);
}
