
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_5__ {int Integer; } ;
struct TYPE_6__ {int AmlOpcodeLength; scalar_t__ ParseOpcode; void* AmlOpcode; TYPE_1__ Value; TYPE_3__* Child; TYPE_3__* Next; } ;
struct TYPE_7__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_7)
{
    ACPI_PARSE_OBJECT *VAR_8;
    ACPI_PARSE_OBJECT *VAR_9;
    ACPI_PARSE_OBJECT *VAR_10;
    UINT8 VAR_11;


    VAR_7->Asl.AmlOpcodeLength = 1;
    VAR_8 = VAR_7->Asl.Child;



    VAR_8->Asl.AmlOpcode = VAR_4;
    VAR_8->Asl.ParseOpcode = VAR_6;



    VAR_9 = VAR_8->Asl.Next;
    if (VAR_9->Asl.ParseOpcode == VAR_5)
    {
        VAR_9->Asl.Value.Integer = 0;
    }

    VAR_9->Asl.AmlOpcode = VAR_4;
    VAR_9->Asl.ParseOpcode = VAR_6;



    VAR_11 = (UINT8) VAR_9->Asl.Value.Integer;
    if ((VAR_11 != VAR_0) &&
        (VAR_11 != VAR_1) &&
        (VAR_11 != VAR_2))
    {
        return;
    }

    VAR_7->Asl.AmlOpcode = VAR_3;





    VAR_10 = VAR_9->Asl.Child;
    if (!VAR_10)
    {
        return;
    }



    if (VAR_10->Asl.ParseOpcode == VAR_5)
    {
        VAR_10->Asl.Value.Integer = 16;
    }

    VAR_10->Asl.AmlOpcode = VAR_4;
    VAR_10->Asl.ParseOpcode = VAR_6;
}
