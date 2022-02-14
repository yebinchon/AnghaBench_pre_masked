
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int Flags; } ;
struct TYPE_9__ {char* String; TYPE_4__* Arg; } ;
struct TYPE_10__ {scalar_t__ AmlOpcode; int Node; TYPE_2__ Value; TYPE_4__* Next; } ;
struct TYPE_8__ {scalar_t__ AmlOpcode; } ;
struct TYPE_11__ {TYPE_3__ Asl; TYPE_1__ Common; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_OPCODE_INFO ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 TYPE_5__* FUNC_3 (scalar_t__) ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    ACPI_PARSE_OBJECT *VAR_4;
    ACPI_PARSE_OBJECT *VAR_5 = ((void*)0);
    char *VAR_6;
    const ACPI_OPCODE_INFO *VAR_7;


    if (VAR_3->Common.AmlOpcode == VAR_2)
    {
        VAR_5 = VAR_3->Asl.Value.Arg;
    }
    else
    {
        VAR_7 = FUNC_3 (VAR_3->Common.AmlOpcode);
        if (!(VAR_7->Flags & VAR_0))
        {
            return;
        }



        VAR_4 = VAR_3->Asl.Value.Arg;
        while (VAR_4)
        {
            VAR_5 = VAR_4;
            VAR_4 = VAR_5->Asl.Next;
        }
    }

    if (!VAR_5)
    {
        return;
    }



    if (VAR_5->Asl.AmlOpcode != VAR_1)
    {
        return;
    }



    if (!VAR_5->Asl.Value.String)
    {
        return;
    }



    if (!VAR_5->Asl.Node)
    {
        FUNC_2 (" /* External reference */");
        return;
    }



    if (*VAR_5->Asl.Value.String == '\\')
    {
        return;
    }



    VAR_6 = FUNC_1 (VAR_5->Asl.Node);
    if (!VAR_6)
    {
        return;
    }

    FUNC_2 (" /* %s */", VAR_6);
    FUNC_0 (VAR_6);
}
