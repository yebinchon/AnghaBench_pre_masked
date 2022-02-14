
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_7__ {int Integer; } ;
struct TYPE_8__ {scalar_t__ ParseOpcode; int AmlLength; int Extra; int AmlOpcode; TYPE_1__ Value; TYPE_3__* Next; TYPE_3__* Child; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_5)
{
    ACPI_PARSE_OBJECT *VAR_6;



    UINT8 VAR_7 = 0;
    UINT8 VAR_8 = 0;
    UINT8 VAR_9 = 0;
    UINT8 VAR_10;





    VAR_6 = VAR_5->Asl.Child;



    VAR_6 = VAR_6->Asl.Next;
    if (VAR_6->Asl.ParseOpcode != VAR_3)
    {
        VAR_7 = (UINT8) VAR_6->Asl.Value.Integer;
        VAR_6->Asl.ParseOpcode = VAR_3;
    }



    VAR_6 = VAR_6->Asl.Next;
    if (VAR_6->Asl.ParseOpcode != VAR_3)
    {
        VAR_8 = (UINT8) VAR_6->Asl.Value.Integer;
        VAR_6->Asl.ParseOpcode = VAR_3;
    }



    VAR_6 = VAR_6->Asl.Next;
    if (VAR_6->Asl.ParseOpcode != VAR_3)
    {


        FUNC_1 (VAR_6, 0, ((void*)0));

        if (VAR_6->Asl.Value.Integer > 15)
        {
            FUNC_0 (VAR_1, VAR_2, VAR_6, ((void*)0));
        }

        VAR_9 = (UINT8) VAR_6->Asl.Value.Integer;
    }



    VAR_10 = (UINT8)
        ((VAR_7 & 0x7) |
        ((VAR_8 & 0x1) << 3) |
        ((VAR_9 & 0xF) << 4));



    VAR_6->Asl.Value.Integer = VAR_10;
    VAR_6->Asl.AmlOpcode = VAR_0;
    VAR_6->Asl.AmlLength = 1;
    VAR_6->Asl.ParseOpcode = VAR_4;



    VAR_5->Asl.Extra = VAR_7;
}
