
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int AcpiBtype; TYPE_2__* Parent; TYPE_2__* Child; TYPE_2__* Next; int LogicalLineNumber; int AmlOpcode; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_3,
    ACPI_PARSE_OBJECT *VAR_4)
{
    ACPI_PARSE_OBJECT *VAR_5;


    if (!VAR_3->Asl.Child)
    {
        VAR_3->Asl.Child = VAR_4;
        VAR_4->Asl.Parent = VAR_3;
        return;
    }

    VAR_5 = FUNC_0 (VAR_1);
    VAR_5->Asl.AmlOpcode = VAR_0;
    VAR_5->Asl.AcpiBtype = 0x7;
    VAR_5->Asl.LogicalLineNumber = VAR_3->Asl.LogicalLineNumber;



    VAR_5->Asl.Child = VAR_3->Asl.Child;
    VAR_3->Asl.Child->Asl.Parent = VAR_5;



    VAR_5->Asl.Child->Asl.Next = VAR_4;
    VAR_4->Asl.Parent = VAR_5;



    VAR_5->Asl.Child->Asl.Next->Asl.Next =
        FUNC_0 (VAR_2);
    VAR_5->Asl.Child->Asl.Next->Asl.Next->Asl.Parent =
        VAR_5;

    VAR_3->Asl.Child = VAR_5;
    VAR_5->Asl.Parent = VAR_3;
}
