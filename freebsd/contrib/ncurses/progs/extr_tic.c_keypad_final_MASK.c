
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static char
FUNC_2(const char *VAR_0)
{
    char VAR_1 = '\0';

    if (FUNC_0(VAR_0)
 && *VAR_0++ == '\033'
 && *VAR_0++ == 'O'
 && FUNC_1(VAR_0) == 1) {
 VAR_1 = *VAR_0;
    }

    return VAR_1;
}
