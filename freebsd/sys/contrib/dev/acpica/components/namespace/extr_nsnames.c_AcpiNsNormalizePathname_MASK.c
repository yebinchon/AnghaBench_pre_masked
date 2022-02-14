
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (
    char *VAR_1)
{
    char *VAR_2 = VAR_1;
    char *VAR_3;
    char *VAR_4;
    UINT32 VAR_5;




    VAR_3 = FUNC_0 (FUNC_3 (VAR_2) + 1);
    VAR_4 = VAR_3;
    if (!VAR_3)
    {
        return;
    }



    if (*VAR_2 == '\\')
    {
        *VAR_4 = *VAR_2;
        VAR_4++;
        VAR_2++;
    }

    while (*VAR_2 == '^')
    {
        *VAR_4 = *VAR_2;
        VAR_4++;
        VAR_2++;
    }



    while (*VAR_2)
    {


        for (VAR_5 = 0; (VAR_5 < VAR_0) && *VAR_2; VAR_5++)
        {
            if ((VAR_5 == 0) || (*VAR_2 != '_'))
            {
                *VAR_4 = *VAR_2;
                VAR_4++;
            }

            VAR_2++;
        }



        if (*VAR_2 == '.')
        {
            *VAR_4 = *VAR_2;
            VAR_4++;
            VAR_2++;
        }
    }

    *VAR_4 = 0;
    FUNC_2 (VAR_1, VAR_3);
    FUNC_1 (VAR_3);
}
