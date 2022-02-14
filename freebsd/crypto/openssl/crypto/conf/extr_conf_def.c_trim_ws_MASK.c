
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *,char) ;

__attribute__((used)) static void FUNC_2(CONF *VAR_0, char *VAR_1)
{
    char *VAR_2 = VAR_1;

    while (!FUNC_0(VAR_0, *VAR_2))
        VAR_2++;
    VAR_2--;
    while ((VAR_2 >= VAR_1) && FUNC_1(VAR_0, *VAR_2))
        VAR_2--;
    VAR_2++;
    *VAR_2 = '\0';
}
