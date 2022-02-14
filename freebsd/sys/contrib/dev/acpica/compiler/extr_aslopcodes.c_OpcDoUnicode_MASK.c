
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int Integer; int * Buffer; scalar_t__ String; } ;
struct TYPE_8__ {int AmlLength; TYPE_3__* Child; int ParseOpcode; int AmlOpcode; TYPE_1__ Value; TYPE_3__* Next; int CompileFlags; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_6)
{
    ACPI_PARSE_OBJECT *VAR_7;
    UINT32 VAR_8;
    UINT32 VAR_9;
    UINT32 VAR_10;
    UINT8 *VAR_11;
    UINT16 *VAR_12;
    ACPI_PARSE_OBJECT *VAR_13;




    VAR_6->Asl.CompileFlags &= ~VAR_2;
    VAR_6->Asl.ParseOpcode = VAR_3;
    FUNC_2 (VAR_6);



    VAR_13 = VAR_6->Asl.Child;
    VAR_7 = VAR_13->Asl.Next;

    VAR_11 = (UINT8 *) VAR_7->Asl.Value.String;



    VAR_9 = FUNC_3 (VAR_7->Asl.Value.String) + 1;
    VAR_8 = VAR_9 * sizeof (UINT16);
    VAR_12 = FUNC_1 (VAR_8);



    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
        VAR_12[VAR_10] = (UINT16) VAR_11[VAR_10];
    }





    VAR_13->Asl.ParseOpcode = VAR_4;
    VAR_13->Asl.AmlOpcode = VAR_0;
    VAR_13->Asl.Value.Integer = VAR_8;
    FUNC_2 (VAR_13);

    (void) FUNC_0 (VAR_13);



    VAR_7->Asl.Value.Buffer = (UINT8 *) VAR_12;
    VAR_7->Asl.AmlOpcode = VAR_1;
    VAR_7->Asl.AmlLength = VAR_8;
    VAR_7->Asl.ParseOpcode = VAR_5;
    VAR_7->Asl.Child = ((void*)0);
    FUNC_2 (VAR_7);
}
