
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_0,
    UINT32 VAR_1,
    void *VAR_2)
{
    ACPI_STATUS VAR_3;




    VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2);
    if (FUNC_0 (VAR_3))
    {
        return (VAR_3);
    }



    VAR_3 = FUNC_2 (VAR_0);
    return (VAR_3);
}
