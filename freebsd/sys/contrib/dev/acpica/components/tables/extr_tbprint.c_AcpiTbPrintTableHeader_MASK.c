
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Revision; int Length; int OemId; } ;
struct TYPE_7__ {int AslCompilerRevision; int AslCompilerId; int OemRevision; int OemTableId; int OemId; int Revision; int Length; int Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 TYPE_5__* FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

void
FUNC_8 (
    ACPI_PHYSICAL_ADDRESS VAR_3,
    ACPI_TABLE_HEADER *VAR_4)
{
    ACPI_TABLE_HEADER VAR_5;


    if (FUNC_1 (VAR_4->Signature, VAR_1))
    {


        FUNC_3 (("%-4.4s 0x%8.8X%8.8X %06X",
            VAR_4->Signature, FUNC_2 (VAR_3),
            VAR_4->Length));
    }
    else if (FUNC_4 (VAR_4->Signature))
    {


        FUNC_7 (VAR_5.OemId, FUNC_0 (VAR_2,
            VAR_4)->OemId, VAR_0);
        FUNC_6 (VAR_5.OemId, VAR_0);

        FUNC_3 (("RSDP 0x%8.8X%8.8X %06X (v%.2d %-6.6s)",
            FUNC_2 (VAR_3),
            (FUNC_0 (VAR_2, VAR_4)->Revision > 0) ?
                FUNC_0 (VAR_2, VAR_4)->Length : 20,
            FUNC_0 (VAR_2, VAR_4)->Revision,
            VAR_5.OemId));
    }
    else
    {


        FUNC_5 (&VAR_5, VAR_4);

        FUNC_3 ((
            "%-4.4s 0x%8.8X%8.8X"
            " %06X (v%.2d %-6.6s %-8.8s %08X %-4.4s %08X)",
            VAR_5.Signature, FUNC_2 (VAR_3),
            VAR_5.Length, VAR_5.Revision, VAR_5.OemId,
            VAR_5.OemTableId, VAR_5.OemRevision,
            VAR_5.AslCompilerId, VAR_5.AslCompilerRevision));
    }
}
