
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int (*) (char*)) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int *,int ) ;

ACPI_STATUS
FUNC_5 (
    char *VAR_2)
{
    UINT8 VAR_3;
    UINT32 VAR_4;


    FUNC_0 (FUNC_5);




    if (!VAR_2)
    {
        FUNC_2 ("Invoking all possible sleep states, 0-%d\n",
            VAR_0);

        for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++)
        {
            FUNC_1 ((UINT8) VAR_4);
        }

        FUNC_3 (VAR_1);
    }



    VAR_3 = (UINT8) FUNC_4 (VAR_2, ((void*)0), 0);
    FUNC_1 (VAR_3);
    FUNC_3 (VAR_1);
}
