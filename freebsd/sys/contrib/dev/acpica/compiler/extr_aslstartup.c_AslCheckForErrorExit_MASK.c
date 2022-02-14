
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (size_t,int ,int *,char*) ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

ACPI_STATUS
FUNC_1 (
    void)
{





    if (!VAR_8)
    {
        if (VAR_7[VAR_2] > 0)
        {
            return (VAR_0);
        }



        if (VAR_9)
        {
            if ((VAR_7[VAR_4] > 0) ||
                (VAR_7[VAR_5] > 0) ||
                (VAR_7[VAR_6] > 0))
            {
                FUNC_0 (VAR_2, VAR_3, ((void*)0),
                    "(reporting warnings as errors)");
                return (VAR_0);
            }
        }
    }

    return (VAR_1);
}
