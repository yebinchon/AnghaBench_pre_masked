
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

char *
FUNC_4 (
    char *VAR_0,
    char *VAR_1)
{
    char* VAR_2;
    UINT32 VAR_3 = 0;


    if (!VAR_0)
    {
        return (VAR_1);
    }

    if (!VAR_1)
    {
        return (VAR_0);
    }

    VAR_3 = FUNC_3 (VAR_1);
    VAR_3 += FUNC_3 (VAR_0);
    VAR_2 = FUNC_0 (VAR_3 + 1);

    FUNC_2 (VAR_2, VAR_0);
    FUNC_1 (VAR_2, VAR_1);
    VAR_2[VAR_3 +1] = 0;
    return (VAR_2);
}
