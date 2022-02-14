
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;

ACPI_STATUS
FUNC_2 (
    char *VAR_7)
{
    UINT32 VAR_8;


    if (!VAR_7 || (FUNC_1 (VAR_7) != VAR_6))
    {
        return (VAR_0);
    }



    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    {


        if ((VAR_8 == VAR_2) ||
            (VAR_8 == VAR_3) ||
            (VAR_8 == VAR_4) ||
            (VAR_8 == VAR_5))
        {
            if (VAR_7[VAR_8] != '-')
            {
                return (VAR_0);
            }
        }
        else
        {


            if (!FUNC_0 ((int) VAR_7[VAR_8]))
            {
                return (VAR_0);
            }
        }
    }

    return (VAR_1);
}
