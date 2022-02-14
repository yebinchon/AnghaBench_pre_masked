
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int Flags; } ;
struct TYPE_7__ {scalar_t__ AmlOpcode; int CompileFlags; TYPE_2__* Next; TYPE_2__* Child; } ;
struct TYPE_8__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OPCODE_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static ACPI_PARSE_OBJECT *
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    const ACPI_OPCODE_INFO *VAR_5;
    ACPI_PARSE_OBJECT *VAR_6 = VAR_4;


    VAR_5 = FUNC_0 (VAR_4->Asl.AmlOpcode);




    if (VAR_5->Flags & VAR_2)
    {


        VAR_6 = VAR_4->Asl.Child;
        if (VAR_4->Asl.AmlOpcode == VAR_0)
        {




            VAR_6 = VAR_4->Asl.Child->Asl.Next;
        }
    }
    else if (VAR_5->Flags & VAR_1)
    {


        VAR_6 = VAR_4->Asl.Child;
        while (!(VAR_6->Asl.CompileFlags & VAR_3))
        {
            VAR_6 = VAR_6->Asl.Next;
        }
    }

    return (VAR_6);
}
