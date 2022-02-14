
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int Integer; } ;
struct TYPE_11__ {scalar_t__ ParseOpcode; TYPE_3__ Value; TYPE_5__* Next; TYPE_5__* Child; } ;
struct TYPE_8__ {scalar_t__ Integer; } ;
struct TYPE_9__ {TYPE_1__ Value; } ;
struct TYPE_12__ {TYPE_4__ Asl; TYPE_2__ Common; } ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef scalar_t__ ACPI_ADR_SPACE_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_5__*,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_5)
{
    ACPI_PARSE_OBJECT *VAR_6;
    ACPI_ADR_SPACE_TYPE VAR_7;





    VAR_6 = VAR_5->Asl.Child;



    VAR_6 = VAR_6->Asl.Next;
    VAR_7 = (ACPI_ADR_SPACE_TYPE) VAR_6->Common.Value.Integer;



    VAR_6 = VAR_6->Asl.Next;



    VAR_6 = VAR_6->Asl.Next;
    if (VAR_6->Asl.ParseOpcode == VAR_4)
    {


        VAR_5->Asl.Value.Integer = VAR_6->Asl.Value.Integer;
        if (!VAR_5->Asl.Value.Integer && (VAR_7 < VAR_0))
        {
            FUNC_0 (VAR_2, VAR_3, VAR_5, ((void*)0));
        }
    }
    else
    {
        VAR_5->Asl.Value.Integer = VAR_1;
    }
}
