
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
typedef int ACPI_PARSE_OBJECT ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static UINT16
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_0,
    UINT32 VAR_1)
{
    UINT16 VAR_2;
    UINT32 VAR_3;




    VAR_2 = 0;
    for (VAR_3 = 0; VAR_0; VAR_3++)
    {
        VAR_0 = FUNC_0 (VAR_0);



        if (VAR_3 >= VAR_1)
        {
            VAR_2 += 2;
        }
    }

    return (VAR_2);
}
