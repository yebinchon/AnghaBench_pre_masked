
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suffix ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
    size_t VAR_1 = FUNC_1(VAR_0);
    char VAR_2[] = ".plist";
    if (VAR_1 < sizeof(VAR_2))
 return 0;
    if (FUNC_0(&VAR_0[VAR_1 - (sizeof(VAR_2) - 1)], VAR_2) != 0)
 return 0;
    return 1;
}
