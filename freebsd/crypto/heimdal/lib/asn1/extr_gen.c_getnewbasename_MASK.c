
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(char **VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
    if (VAR_1)
 *VAR_0 = FUNC_3(VAR_3);
    else {
 if (VAR_3[0] == '*')
     VAR_3++;
 if (FUNC_0(VAR_0, "%s_%s", VAR_2, VAR_3) < 0)
     FUNC_2(1, "malloc");
    }
    if (*VAR_0 == ((void*)0))
 FUNC_1(1, "malloc");
}
