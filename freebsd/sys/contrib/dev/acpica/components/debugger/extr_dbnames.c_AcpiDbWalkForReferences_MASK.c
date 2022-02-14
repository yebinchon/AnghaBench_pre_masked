
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef void ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_HANDLE ;


 int VAR_0 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (char*,void*,...) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_HANDLE VAR_1,
    UINT32 VAR_2,
    void *VAR_3,
    void **VAR_4)
{
    ACPI_OPERAND_OBJECT *VAR_5 = (ACPI_OPERAND_OBJECT *) VAR_3;
    ACPI_NAMESPACE_NODE *VAR_6 = (ACPI_NAMESPACE_NODE *) VAR_1;




    if (VAR_6 == (void *) VAR_5)
    {
        FUNC_1 ("Object is a Node [%4.4s]\n",
            FUNC_2 (VAR_6));
    }



    if (FUNC_0 (VAR_6) == VAR_5)
    {
        FUNC_1 ("Reference at Node->Object %p [%4.4s]\n",
            VAR_6, FUNC_2 (VAR_6));
    }

    return (VAR_0);
}
