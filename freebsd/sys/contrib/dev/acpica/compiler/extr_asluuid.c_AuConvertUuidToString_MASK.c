
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 char FUNC_0 (char,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

ACPI_STATUS
FUNC_1 (
    char *VAR_9,
    char *VAR_10)
{
    UINT32 VAR_11;


    if (!VAR_9 || !VAR_10)
    {
        return (VAR_0);
    }

    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
    {
        VAR_10[VAR_2[VAR_11]] =
            FUNC_0 (VAR_9[VAR_11], 4);

        VAR_10[VAR_2[VAR_11] + 1] =
            FUNC_0 (VAR_9[VAR_11], 0);
    }



    VAR_10[VAR_4] =
    VAR_10[VAR_5] =
    VAR_10[VAR_6] =
    VAR_10[VAR_7] = '-';

    VAR_10[VAR_8] = 0;
    return (VAR_1);
}
