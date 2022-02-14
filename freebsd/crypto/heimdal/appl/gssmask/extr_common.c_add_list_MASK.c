
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (size_t,int) ;
 char*** FUNC_1 (char***,int) ;

__attribute__((used)) static void
FUNC_2(char ****VAR_0, size_t *VAR_1, char **VAR_2, size_t VAR_3)
{
    size_t VAR_4;
    *VAR_0 = FUNC_1(*VAR_0, sizeof(**VAR_0) * (*VAR_1 + 1));

    (*VAR_0)[*VAR_1] = FUNC_0(VAR_3, sizeof(**VAR_0));
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 (*VAR_0)[*VAR_1][VAR_4] = VAR_2[VAR_4];
    (*VAR_1)++;
}
