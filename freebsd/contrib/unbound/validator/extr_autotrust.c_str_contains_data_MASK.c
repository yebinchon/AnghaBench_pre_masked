
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char* VAR_0, char VAR_1)
{
        while (*VAR_0 != '\0') {
                if (*VAR_0 == VAR_1 || *VAR_0 == '\n')
                        return 0;
                if (*VAR_0 != ' ' && *VAR_0 != '\t')
                        return 1;
                VAR_0++;
        }
        return 0;
}
