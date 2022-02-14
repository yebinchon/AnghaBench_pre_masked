
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {int * Aml; } ;
struct TYPE_7__ {int Flags; } ;
struct TYPE_6__ {scalar_t__ PassNumber; TYPE_3__ ParserState; int * Aml; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef TYPE_2__ ACPI_OPCODE_INFO ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3 (
    ACPI_WALK_STATE *VAR_3)
{
    UINT8 *VAR_4;
    UINT16 VAR_5;
    const ACPI_OPCODE_INFO *VAR_6;


    if (!VAR_2)
    {
        return;
    }





    VAR_4 = VAR_3->ParserState.Aml;
    VAR_5 = (UINT16) FUNC_0 (VAR_4);
    VAR_6 = FUNC_1 (VAR_5);

    if (!(VAR_6->Flags & VAR_1) ||
        ((VAR_6->Flags & VAR_1) &&
        (VAR_3->PassNumber != VAR_0)))
    {
        FUNC_2 (&VAR_3->ParserState);
        VAR_3->Aml = VAR_3->ParserState.Aml;
    }

}
