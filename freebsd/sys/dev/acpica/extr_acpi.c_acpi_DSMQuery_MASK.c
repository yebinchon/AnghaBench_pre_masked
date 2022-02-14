
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int UINT8 ;
struct TYPE_11__ {scalar_t__ Pointer; } ;
struct TYPE_9__ {int Value; } ;
struct TYPE_8__ {scalar_t__ Pointer; } ;
struct TYPE_10__ {int Type; TYPE_2__ Integer; TYPE_1__ Buffer; } ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;


 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int ,int*,int,int ,int *,TYPE_4__*) ;

UINT8
FUNC_7(ACPI_HANDLE VAR_1, uint8_t *VAR_2, int VAR_3)
{
    ACPI_BUFFER VAR_4;
    ACPI_OBJECT *VAR_5;
    UINT8 VAR_6 = 0;

    if (!FUNC_2(FUNC_6(VAR_1, VAR_2, VAR_3, 0, ((void*)0), &VAR_4))) {
 FUNC_1(("Failed to enumerate DSM functions\n"));
 return (0);
    }

    VAR_5 = (ACPI_OBJECT *)VAR_4.Pointer;
    FUNC_5(VAR_5, ("Object not allowed to be NULL\n"));







    switch (VAR_5->Type) {
    case 129:
 VAR_6 = *(uint8_t *)VAR_5->Buffer.Pointer;
 break;
    case 128:
 FUNC_0((VAR_0,
     "Possibly buggy BIOS with ACPI_TYPE_INTEGER for function enumeration\n"));
 VAR_6 = VAR_5->Integer.Value & 0xFF;
 break;
    default:
 FUNC_3((VAR_0, "Unexpected return type %u\n", VAR_5->Type));
    };

    FUNC_4(VAR_5);
    return VAR_6;
}
