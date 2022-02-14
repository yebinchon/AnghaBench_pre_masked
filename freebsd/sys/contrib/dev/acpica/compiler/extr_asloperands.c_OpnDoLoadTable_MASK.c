
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* String; } ;
struct TYPE_7__ {scalar_t__ ParseOpcode; int AmlLength; TYPE_3__* Next; TYPE_1__ Value; TYPE_3__* Child; } ;
struct TYPE_8__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    ACPI_PARSE_OBJECT *VAR_5;





    VAR_5 = VAR_4->Asl.Child;



    VAR_5 = VAR_5->Asl.Next;



    VAR_5 = VAR_5->Asl.Next;



    VAR_5 = VAR_5->Asl.Next;
    if (VAR_5->Asl.ParseOpcode == VAR_2)
    {
        VAR_5->Asl.ParseOpcode = VAR_1;
        VAR_5->Asl.Value.String = "\\";
        VAR_5->Asl.AmlLength = 2;
        FUNC_0 (VAR_5);
    }
}
