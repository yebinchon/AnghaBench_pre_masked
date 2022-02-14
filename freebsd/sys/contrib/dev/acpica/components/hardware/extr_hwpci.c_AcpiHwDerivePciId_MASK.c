
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_PCI_ID ;
typedef int ACPI_PCI_DEVICE ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
    ACPI_PCI_ID *VAR_2,
    ACPI_HANDLE VAR_3,
    ACPI_HANDLE VAR_4)
{
    ACPI_STATUS VAR_5;
    ACPI_PCI_DEVICE *VAR_6;


    FUNC_0 (VAR_1);


    if (!VAR_2)
    {
        FUNC_5 (VAR_0);
    }



    VAR_5 = FUNC_2 (VAR_3, VAR_4, &VAR_6);
    if (FUNC_1 (VAR_5))
    {


        VAR_5 = FUNC_4 (VAR_2, VAR_6);



        FUNC_3 (VAR_6);
    }

    FUNC_5 (VAR_5);
}
