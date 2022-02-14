
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;
 char* FUNC_2 (size_t) ;

char *
FUNC_3(const char *VAR_0, const char *VAR_1)
{
    char *VAR_2;
    size_t VAR_3, VAR_4;

    if (!VAR_0)
 VAR_0 = "";
    if (!VAR_1)
 VAR_1 = "";
    VAR_3 = FUNC_1(VAR_0);
    VAR_4 = FUNC_1(VAR_1);
    VAR_2 = FUNC_2((VAR_3 + VAR_4 + 1) * sizeof(char));
    FUNC_0(VAR_2, VAR_0, VAR_3);
    FUNC_0(VAR_2 + VAR_3, VAR_1, VAR_4 + 1);
    return (VAR_2);
}
