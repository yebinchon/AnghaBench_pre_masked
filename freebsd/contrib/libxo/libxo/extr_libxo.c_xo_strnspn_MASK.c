
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int * FUNC_0 (char const*,char const) ;

__attribute__((used)) static ssize_t
FUNC_1 (const char *VAR_0, size_t VAR_1, const char *VAR_2)
{
    ssize_t VAR_3;
    const char *VAR_4, *VAR_5;

    for (VAR_3 = 0, VAR_4 = VAR_0, VAR_5 = VAR_0 + VAR_1; VAR_4 < VAR_5 && *VAR_4 != '\0'; VAR_3++, VAR_4++) {
 if (FUNC_0(VAR_2, *VAR_4) == ((void*)0))
     break;
    }

    return VAR_3;
}
