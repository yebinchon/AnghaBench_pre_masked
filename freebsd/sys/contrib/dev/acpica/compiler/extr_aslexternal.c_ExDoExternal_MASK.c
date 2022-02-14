
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Integer; } ;
struct TYPE_9__ {TYPE_3__* Next; TYPE_3__* Child; TYPE_1__ Value; int ParseOpcode; int AmlOpcode; } ;
struct TYPE_10__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    ACPI_PARSE_OBJECT *VAR_5;
    ACPI_PARSE_OBJECT *VAR_6;
    ACPI_PARSE_OBJECT *VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;


    VAR_8 = VAR_4->Asl.Child->Asl.Next->Asl.Next;
    VAR_8->Asl.AmlOpcode = VAR_0;
    VAR_8->Asl.ParseOpcode = VAR_2;
    VAR_8->Asl.Value.Integer = 0;
    FUNC_1 (VAR_8);



    VAR_5 = FUNC_0 (VAR_3);



    VAR_5->Asl.Child = VAR_4;
    VAR_5->Asl.Next = ((void*)0);

    if (VAR_1)
    {


        VAR_6 = VAR_1;
        VAR_7 = VAR_6;
        while (VAR_7)
        {
            VAR_6 = VAR_7;
            VAR_7 = VAR_7->Asl.Next;
        }

        VAR_6->Asl.Next = VAR_5;
    }
    else
    {
        VAR_1 = VAR_5;
    }
}
