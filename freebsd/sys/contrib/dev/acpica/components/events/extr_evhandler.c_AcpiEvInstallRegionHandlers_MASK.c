
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;



 int FUNC_2 (int ,int ,int ,int *,int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int) ;

ACPI_STATUS
FUNC_6 (
    void)
{
    ACPI_STATUS VAR_6;
    UINT32 VAR_7;


    FUNC_1 (VAR_5);


    VAR_6 = FUNC_3 (VAR_1);
    if (FUNC_0 (VAR_6))
    {
        FUNC_5 (VAR_6);
    }
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    {
        VAR_6 = FUNC_2 (VAR_4,
            VAR_3[VAR_7],
            VAR_0, ((void*)0), ((void*)0));
        switch (VAR_6)
        {
        case 129:
        case 128:
        case 130:



            VAR_6 = 129;
            break;

        default:

            goto UnlockAndExit;
        }
    }

UnlockAndExit:
    (void) FUNC_4 (VAR_1);
    FUNC_5 (VAR_6);
}
