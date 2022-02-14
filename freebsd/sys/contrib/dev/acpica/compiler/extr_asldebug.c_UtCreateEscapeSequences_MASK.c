
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 char FUNC_0 (char,int) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2 (
    char *VAR_0)
{
    char *VAR_1 = VAR_0;
    char *VAR_2;
    char *VAR_3;
    UINT32 VAR_4 = 0;
    UINT32 VAR_5 = 0;






    while (*VAR_1)
    {
        if ((*VAR_1 <= 0x1F) || (*VAR_1 >= 0x7F))
        {
            VAR_5++;
        }

        VAR_4++;
        VAR_1++;
    }

    if (!VAR_5)
    {
        return (VAR_0);
    }



    VAR_2 = FUNC_1 (VAR_4 + (VAR_5 * 3));
    VAR_3 = VAR_2;



    while (*VAR_0)
    {
        if ((*VAR_0 <= 0x1F) || (*VAR_0 >= 0x7F))
        {


            VAR_3[0] = '\\';
            VAR_3[1] = 'x';
            VAR_3[2] = FUNC_0 (*VAR_0, 4);
            VAR_3[3] = FUNC_0 (*VAR_0, 0);
            VAR_3 += 4;
        }
        else
        {
            *VAR_3 = *VAR_0;
            VAR_3++;
        }

        VAR_0++;
    }

    return (VAR_2);
}
