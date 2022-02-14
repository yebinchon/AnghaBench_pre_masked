
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Device; struct TYPE_5__* Next; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_PCI_DEVICE ;
typedef scalar_t__ ACPI_HANDLE ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_4 (
    ACPI_HANDLE VAR_2,
    ACPI_HANDLE VAR_3,
    ACPI_PCI_DEVICE **VAR_4)
{
    ACPI_HANDLE VAR_5;
    ACPI_HANDLE VAR_6;
    ACPI_STATUS VAR_7;
    ACPI_PCI_DEVICE *VAR_8;







    *VAR_4 = ((void*)0);
    VAR_5 = VAR_3;
    while (1)
    {
        VAR_7 = FUNC_2 (VAR_5, &VAR_6);
        if (FUNC_1 (VAR_7))
        {


            FUNC_3 (*VAR_4);
            return (VAR_7);
        }



        if (VAR_6 == VAR_2)
        {
            return (VAR_1);
        }

        VAR_8 = FUNC_0 (sizeof (ACPI_PCI_DEVICE));
        if (!VAR_8)
        {


            FUNC_3 (*VAR_4);
            return (VAR_0);
        }



        VAR_8->Next = *VAR_4;
        VAR_8->Device = VAR_6;
        *VAR_4 = VAR_8;

        VAR_5 = VAR_6;
    }
}
