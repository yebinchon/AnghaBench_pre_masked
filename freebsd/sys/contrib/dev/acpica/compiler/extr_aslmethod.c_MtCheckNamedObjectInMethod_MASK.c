
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ Class; } ;
struct TYPE_8__ {scalar_t__ AmlOpcode; } ;
struct TYPE_10__ {TYPE_1__ Asl; } ;
struct TYPE_9__ {void* ShouldBeSerialized; int Op; void* CreatesNamedObjects; } ;
typedef TYPE_2__ ASL_METHOD_INFO ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 void* VAR_5 ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_6,
    ASL_METHOD_INFO *VAR_7)
{
    const ACPI_OPCODE_INFO *VAR_8;




    if ((VAR_6->Asl.AmlOpcode == VAR_1) ||
        (VAR_6->Asl.AmlOpcode == VAR_2))
    {
        return;
    }



    if (!VAR_7)
    {
        return;
    }

    VAR_8 = FUNC_0 (VAR_6->Asl.AmlOpcode);
    if (VAR_8->Class == VAR_0)
    {
        VAR_7->CreatesNamedObjects = VAR_5;
        if (!VAR_7->ShouldBeSerialized)
        {
            FUNC_1 (VAR_4, VAR_3, VAR_7->Op,
                "due to creation of named objects within");



            VAR_7->ShouldBeSerialized = VAR_5;
        }
    }
}
