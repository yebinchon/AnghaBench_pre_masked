
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {int ParseOpName; scalar_t__ Child; } ;
struct TYPE_8__ {scalar_t__ Arg; } ;
struct TYPE_10__ {TYPE_1__ Value; int AmlOpcode; } ;
struct TYPE_12__ {TYPE_2__ Asl; TYPE_3__ Common; } ;
struct TYPE_11__ {int OpInfo; int Opcode; TYPE_5__* Op; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_1,
    UINT32 VAR_2,
    void *VAR_3)
{
    ACPI_WALK_STATE *VAR_4 = VAR_3;
    ACPI_STATUS VAR_5;


    VAR_4->Op = VAR_1;
    VAR_4->Opcode = VAR_1->Common.AmlOpcode;
    VAR_4->OpInfo = FUNC_3 (VAR_1->Common.AmlOpcode);



    if (VAR_1->Asl.Child)
    {
        VAR_1->Common.Value.Arg = VAR_1->Asl.Child;
    }



    VAR_5 = FUNC_1 (VAR_4);
    if (FUNC_0 (VAR_5))
    {
        FUNC_4 (VAR_0,
            "%s: Constant interpretation failed (2) - %s\n",
            VAR_1->Asl.ParseOpName, FUNC_2 (VAR_5));
    }

    return (VAR_5);
}
