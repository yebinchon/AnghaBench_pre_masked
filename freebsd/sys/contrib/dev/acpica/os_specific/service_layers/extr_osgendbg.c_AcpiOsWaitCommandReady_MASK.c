
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_13 ;

ACPI_STATUS
FUNC_6 (
    void)
{
    ACPI_STATUS VAR_14 = VAR_6;


    if (VAR_11 == VAR_13)
    {
        VAR_14 = VAR_7;

        while (VAR_14 == VAR_7)
        {
            if (VAR_10)
            {
                VAR_14 = VAR_4;
            }
            else
            {
                VAR_14 = FUNC_3 (VAR_8, 1000);
            }
        }
    }
    else
    {


        FUNC_2 (VAR_0);



        if (!VAR_12)
        {
            FUNC_5 ("%1c ", VAR_2);
        }
        else
        {
            FUNC_5 ("%1c ", VAR_3);
        }



        VAR_14 = FUNC_4 (VAR_9,
            VAR_1, ((void*)0));
    }

    if (FUNC_1 (VAR_14) && VAR_14 != VAR_4)
    {
        FUNC_0 ((VAR_5, VAR_14,
            "While parsing/handling command line"));
    }
    return (VAR_14);
}
