
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {int Flags; int ObjectType; } ;
struct TYPE_7__ {scalar_t__ ParseOpcode; int AmlOpcode; } ;
struct TYPE_8__ {TYPE_1__ Asl; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OPCODE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (TYPE_2__*,int ,void*)) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_PARSE_OBJECT *VAR_7,
    UINT32 VAR_8,
    void *VAR_9)
{
    ACPI_WALK_STATE *VAR_10 = (ACPI_WALK_STATE *) VAR_9;
    const ACPI_OPCODE_INFO *VAR_11;


    FUNC_1 (FUNC_8);




    VAR_11 = FUNC_4 (VAR_7->Asl.AmlOpcode);
    if (!(VAR_11->Flags & VAR_2))
    {
        FUNC_7 (VAR_1);
    }



    if ((VAR_7->Asl.ParseOpcode == VAR_6) ||
        (VAR_7->Asl.ParseOpcode == VAR_5) ||
        (VAR_7->Asl.ParseOpcode == VAR_4) ||
        (VAR_7->Asl.ParseOpcode == VAR_3))
    {
        FUNC_7 (VAR_1);
    }



    if (FUNC_3 (FUNC_6 (VAR_7->Asl.AmlOpcode)))
    {

        FUNC_0 ((VAR_0,
            "%s: Popping scope for Op %p\n",
            FUNC_5 (VAR_11->ObjectType), VAR_7));

        (void) FUNC_2 (VAR_10);
    }

    FUNC_7 (VAR_1);
}
