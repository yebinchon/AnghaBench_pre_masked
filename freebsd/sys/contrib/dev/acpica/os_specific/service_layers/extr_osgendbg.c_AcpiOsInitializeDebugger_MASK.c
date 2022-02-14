
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

ACPI_STATUS
FUNC_4 (
    void)
{
    ACPI_STATUS VAR_5;




    VAR_5 = FUNC_2 (&VAR_2);
    if (FUNC_0 (VAR_5))
    {
        return (VAR_5);
    }
    VAR_5 = FUNC_2 (&VAR_1);
    if (FUNC_0 (VAR_5))
    {
        goto ErrorReady;
    }



    VAR_5 = FUNC_1 (VAR_1,
        VAR_0);
    if (FUNC_0 (VAR_5))
    {
        goto ErrorComplete;
    }
    VAR_5 = FUNC_1 (VAR_2,
        VAR_0);
    if (FUNC_0 (VAR_5))
    {
        goto ErrorComplete;
    }

    VAR_3 = VAR_4;
    return (VAR_5);

ErrorComplete:
    FUNC_3 (VAR_1);
ErrorReady:
    FUNC_3 (VAR_2);
    return (VAR_5);
}
