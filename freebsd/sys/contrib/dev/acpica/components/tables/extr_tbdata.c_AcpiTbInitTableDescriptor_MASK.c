
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_7__ {int Ascii; } ;
struct TYPE_9__ {TYPE_1__ Signature; int Flags; int Length; int Address; } ;
struct TYPE_8__ {int Signature; int Length; } ;
typedef TYPE_2__ ACPI_TABLE_HEADER ;
typedef TYPE_3__ ACPI_TABLE_DESC ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void
FUNC_2 (
    ACPI_TABLE_DESC *VAR_0,
    ACPI_PHYSICAL_ADDRESS VAR_1,
    UINT8 VAR_2,
    ACPI_TABLE_HEADER *VAR_3)
{





    FUNC_1 (VAR_0, 0, sizeof (ACPI_TABLE_DESC));
    VAR_0->Address = VAR_1;
    VAR_0->Length = VAR_3->Length;
    VAR_0->Flags = VAR_2;
    FUNC_0 (VAR_0->Signature.Ascii, VAR_3->Signature);
}
