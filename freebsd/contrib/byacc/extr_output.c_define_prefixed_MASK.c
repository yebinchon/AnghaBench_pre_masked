
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_2(FILE * VAR_2, const char *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_2);
    if (VAR_4)
 ++VAR_0;
    FUNC_1(VAR_2, "\n");

    if (VAR_4)
 ++VAR_0;
    FUNC_1(VAR_2, "#ifndef %s\n", VAR_3);

    if (VAR_4)
 ++VAR_0;
    FUNC_1(VAR_2, "#define %-10s %s%s\n", VAR_3, VAR_1, VAR_3 + 2);

    if (VAR_4)
 ++VAR_0;
    FUNC_1(VAR_2, "#endif /* %s */\n", VAR_3);
}
