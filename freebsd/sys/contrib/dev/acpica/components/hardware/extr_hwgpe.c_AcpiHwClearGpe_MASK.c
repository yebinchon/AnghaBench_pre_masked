
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {TYPE_1__* RegisterInfo; } ;
struct TYPE_5__ {int StatusAddress; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GPE_REGISTER_INFO ;
typedef TYPE_2__ ACPI_GPE_EVENT_INFO ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;

ACPI_STATUS
FUNC_3 (
    ACPI_GPE_EVENT_INFO *VAR_1)
{
    ACPI_GPE_REGISTER_INFO *VAR_2;
    ACPI_STATUS VAR_3;
    UINT32 VAR_4;


    FUNC_0 ();



    VAR_2 = VAR_1->RegisterInfo;
    if (!VAR_2)
    {
        return (VAR_0);
    }





    VAR_4 = FUNC_1 (VAR_1);

    VAR_3 = FUNC_2 (VAR_4, &VAR_2->StatusAddress);
    return (VAR_3);
}
