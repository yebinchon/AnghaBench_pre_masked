
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_0)
{
    char VAR_1;
    char *VAR_2;
    int VAR_3;

    if (*VAR_0 == '\0')
 return -1;
    VAR_1 = *VAR_0++;
    if (VAR_1 != *VAR_0++)
 return -1;
    if (VAR_1 != *VAR_0++)
 return -1;
    VAR_3 = FUNC_1 (VAR_0, &VAR_2, 0);
    if (VAR_0 == VAR_2)
 return -1;
    if (VAR_2[0] != VAR_1 || VAR_2[1] != '\0')
 return -1;
    return FUNC_0(VAR_3);
}
