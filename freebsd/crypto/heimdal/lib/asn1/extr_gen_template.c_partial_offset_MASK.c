
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2)
{
    char *VAR_3;
    if (VAR_1 == ((void*)0) || VAR_2 == 0)
 return FUNC_2("0");
    if (FUNC_0(&VAR_3, "offsetof(struct %s, %s)", VAR_0, VAR_1) < 0 || VAR_3 == ((void*)0))
 FUNC_1(1, "malloc");
    return VAR_3;
}
