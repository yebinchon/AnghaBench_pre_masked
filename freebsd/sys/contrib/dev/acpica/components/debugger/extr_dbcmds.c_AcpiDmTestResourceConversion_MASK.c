
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* Pointer; void* Length; } ;
struct TYPE_10__ {scalar_t__ Length; int Pointer; } ;
struct TYPE_11__ {TYPE_1__ Buffer; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_RSDESC_SIZE ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_3__ ACPI_BUFFER ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int *,char*,int *,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_NAMESPACE_NODE *VAR_1,
    char *VAR_2)
{
    ACPI_STATUS VAR_3;
    ACPI_BUFFER VAR_4;
    ACPI_BUFFER VAR_5;
    ACPI_BUFFER VAR_6;
    ACPI_OBJECT *VAR_7;


    FUNC_6 ("Resource Conversion Comparison:\n");

    VAR_6.Length = VAR_0;
    VAR_4.Length = VAR_0;
    VAR_5.Length = VAR_0;



    VAR_3 = FUNC_3 (VAR_1, VAR_2, ((void*)0), &VAR_4);
    if (FUNC_0 (VAR_3))
    {
        FUNC_6 ("Could not obtain %s: %s\n",
            VAR_2, FUNC_4 (VAR_3));
        return (VAR_3);
    }



    VAR_3 = FUNC_5 (VAR_1, &VAR_5);
    if (FUNC_0 (VAR_3))
    {
        FUNC_6 ("AcpiGetCurrentResources failed: %s\n",
            FUNC_4 (VAR_3));
        goto Exit1;
    }



    VAR_3 = FUNC_7 (&VAR_5, &VAR_6);
    if (FUNC_0 (VAR_3))
    {
        FUNC_6 ("AcpiRsCreateAmlResources failed: %s\n",
            FUNC_4 (VAR_3));
        goto Exit2;
    }



    VAR_7 = VAR_4.Pointer;

    FUNC_2 (VAR_7->Buffer.Pointer,
        (ACPI_RSDESC_SIZE) VAR_7->Buffer.Length,
        VAR_6.Pointer, (ACPI_RSDESC_SIZE) VAR_6.Length);



    FUNC_1 (VAR_6.Pointer);
Exit2:
    FUNC_1 (VAR_5.Pointer);
Exit1:
    FUNC_1 (VAR_4.Pointer);
    return (VAR_3);
}
